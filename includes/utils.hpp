#ifndef CONTROLTLBX_UTILS_HPP
#define CONTROLTLBX_UTILS_HPP

// Additional library
#include <cassert>
#include <cstdint>
#include <Eigen/Dense>
#include <iostream>

// Macros definitions
#define MAX_NB_STATE 65535
#define STATE_VECTOR_DIM_T uint16_t

#define MAX_NB_TIME 65535
#define TIME_VECTOR_DIM_T uint16_t

#define MAX_NB_CNTRL 255
#define CNTRL_VECTOR_DIM_T uint8_t

#define SCALAR double

#ifndef M_PI
    /**
    * @brief A macro definig pi constant
    */
    #define M_PI 3.141592653589793238463
#endif

#ifndef M_E
    /**
    * @brief A macro defining Euler's number constant 
    */
    #define M_E  2.718281828459045235360
#endif

#endif