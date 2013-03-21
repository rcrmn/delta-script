

#pragma once
#if !defined(__DELTA_CONFIG_H__)
#define __DELTA_CONFIG_H__



#if !defined(__DELTA_NUMBER_TYPE__)
#define __DELTA_NUMBER_TYPE__ float
#endif




/*******************************************************************************
 *******************************************************************************
 *******************************************************************************
 *******************************************************************************
 *******************************************************************************
 */

#include <cstdint>


namespace delta{



typedef __DELTA_NUMBER_TYPE__	number_t;
#undef __DELTA_NUMBER_TYPE__ 


typedef std::uint32_t				refid_t;


typedef std::int16_t				stackpos_t;


typedef std::int32_t				jump_t;


typedef std::uint8_t				byte;


}


#endif

