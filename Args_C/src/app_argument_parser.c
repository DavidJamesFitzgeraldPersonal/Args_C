#include <stdio.h>
#include <stdbool.h>

#include "app_argument_parser.h"

#define ARG_SEPERATOR 	'-'
#define ARG_LOG			'L'

//comment

// Static Functions
static bool parse_logging_flag(char* string);

/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param argument [description]
 * @return [description]
 */
static unsigned int get_number_of_char_in_string(char* string, char searchChar)
{
	unsigned int ret = 0;
	static char* ptr;

	// set to first character
	ptr = string;
	
	while(0 != *ptr)
	{
		if(searchChar == *ptr)
		{
			ret++;
		}
		ptr++;
	}
	return ret;
}

/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param string [description]
 * @param sep [description]
 * 
 * @return [description]
 */
static bool is_valid_flag(char* string)
{
	bool ret = false;

	// ptr points to the string
	static char* ptr;
	// pptr points to individual chars in the string
	static char** pptr;
	// thisChar represents the value at pptr
	char thisChar;

	ptr = &string[0];
	pptr = &ptr;
	thisChar = **pptr;

	if(ARG_SEPERATOR == thisChar)
	{
		// The seperator is in the correct postion. Is this a valid flag
		ptr = &string[1];
		pptr = &ptr;
		thisChar = **pptr;

		switch(thisChar)
		{
			case ARG_LOG:
				ptr = &string[2];
				ret = parse_logging_flag(ptr);
				if(ret)
				{
					printf("%s\n", "Logging flag set.");
				}
				break;

			default:
				printf("%s\n", "Flag type unknown.");
				break;
		}
	}

	return ret;
}

/**
 * @brief [brief description]
 * @details [long description]
 * 
 * @param string [description]
 * @return [description]
 */
static bool parse_logging_flag(char* string)
{
	bool ret = false;

	// ptr points to the string
	static char* ptr;
	// pptr points to individual chars in the string
	static char** pptr;
	// thisChar represents the value at pptr
	char thisChar;

	ptr = &string[0];
	pptr = &ptr;
	thisChar = **pptr;

	// Logging flags should have nothing after the flags
	if((char)0 == thisChar)
	{
		ret = true;
	}

	return ret;
}

// Accessible Functions

/**
 * @brief Search a string for 
 * @details [long description]
 * 
 * @param argument [description]
 */
void app_parse_argument(char* argument[])
{
	static char* ptr;
	ptr = argument[0];
	// Firstly check for a flag - there must be a single seperator character at the front of the string
	if(is_valid_flag(ptr) && 
		1 == get_number_of_char_in_string(ptr,ARG_SEPERATOR))
	{
		// N/A
	}
}