///
/// @file	LocalLibrary.h 
/// @brief	Library header
/// @details	<#details#>
/// @n	
/// @n @b	Project blinkLED
/// @n @a	Developed with [embedXcode](http://embedXcode.weebly.com)
/// 
/// @author	Pat Escalona
/// @author	__MyCompanyName__
/// @date	7/22/12 9:18 AM
/// @version	<#version#>
/// 
/// @copyright	© Pat Escalona, 2012
/// @copyright	CC = BY NC SA
///
/// @see	ReadMe.txt for references
///


// Core library - IDE-based
#if defined(WIRING) // Wiring specific - official
#include "Wiring.h"
#elif defined(MAPLE_IDE) // Maple specific - official
#include "WProgram.h"   
#elif defined(MPIDE) // chipKIT specific - embedXcode only
#include "WProgram.h"
#elif defined(ENERGIA) // LaunchPad specific - embedXcode only
#include "Energia.h"
#elif defined(ARDUINO) && (ARDUINO >= 100) // Arduino 1.0 specific - official
#include "Arduino.h"
#elif defined(ARDUINO) && (ARDUINO < 100) // Arduino 23 specific - official
#include "WProgram.h"
#endif

#ifndef blinkLED_LocalLibrary_h
#define blinkLED_LocalLibrary_h

///
/// @brief	Blink a LED
/// @details	LED attached to pin is light on then light off
/// @n		Total cycle duration = ms
/// @param	pin pin to which the LED is attached
/// @param	times number of times
/// @param	ms cycle duration in ms
///
void blink(uint8_t pin, uint8_t times, uint16_t ms);

#endif
