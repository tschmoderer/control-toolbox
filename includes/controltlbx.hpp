
#ifndef CNTRLTLBX_HPP
#define CNTRLTLBX_HPP

/* INCLUDES */
#include "utils.hpp"
#include "types/types.hpp"

/* VERSION MACROS */
#define VERSION_MPP_TLBX "@CMAKE_LIB_VERSION@"
#define AUTHOR_MPP_TLBX  "@AUTHOR@"
#define CONTACT_MPP_TLBX "@AUTHOR_MAIL@"
#define DOCUMENTATION_MPP_TLBX "@DOCUMENTATION_ADDR@"
#define CODE_MPP_TLBX "@CODE_ADDR@" 

/**
* @brief Welcome function 
*/
void hello_world_control_tlbx() {
    std::cout << "Welcome to the Control Toolbox" << std::endl;
    std::cout << "Version       : " << VERSION_MPP_TLBX << std::endl;
    std::cout << "Code          : " << CODE_MPP_TLBX << std::endl;
    std::cout << "Documentation : " << DOCUMENTATION_MPP_TLBX << std::endl; 
    std::cout << "Contact       : " << AUTHOR_MPP_TLBX  << " - " << CONTACT_MPP_TLBX << std::endl; 
    std::cout << "--" << std::endl;
}

#endif