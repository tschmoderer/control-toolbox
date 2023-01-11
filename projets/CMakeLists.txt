find_package(LATEX COMPONENTS PDFLATEX)

set(LATEX_DIR ${CMAKE_CURRENT_SOURCE_DIR})


if(LATEX_FOUND AND LATEX_PDFLATEX_FOUND)
    file(GLOB texfiles "${LATEX_DIR}/*.tex")

    add_custom_target(projets) 

    foreach(f ${texfiles})
        get_filename_component(CURFILENAME ${f} NAME_WLE)

        add_custom_target(latex-prebuild-${CURFILENAME}
			COMMAND ${PDFLATEX_COMPILER}  -output-directory ${CMAKE_CURRENT_BINARY_DIR} -draftmode -interaction=nonstopmode ${f}
			COMMENT "Starting Prebuild."
			WORKING_DIRECTORY ${LATEX_DIR}
			DEPENDS ${f}
        )

        add_custom_target(latex-pdf-${CURFILENAME}
            COMMAND ${PDFLATEX_COMPILER} -output-directory ${CMAKE_CURRENT_BINARY_DIR} ${f}
            WORKING_DIRECTORY ${LATEX_DIR}
            COMMENT "Assembling the final pdf file."
            DEPENDS ${f}
        )
        
        add_dependencies(latex-pdf-${CURFILENAME} latex-prebuild-${CURFILENAME})

        add_custom_command(
            TARGET latex-pdf-${CURFILENAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy
            ${CMAKE_CURRENT_BINARY_DIR}/*.pdf
            ${LATEX_DIR}
        )

        add_dependencies(projets latex-pdf-${CURFILENAME})
    endforeach()

else()
    message(STATUS "No latex tools found!")
endif()


