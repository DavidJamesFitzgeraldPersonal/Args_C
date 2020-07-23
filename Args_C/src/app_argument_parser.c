#include "app_argument_parser.h"
#include <stdio.h>

#define ARG_SEPERATOR '-'

unsigned int get_argument_seperators(char argument[])
{
	unsigned int ret = 0;
	static char* ptr;

	// set to first character
	ptr = &argument[0];
	
	while(0 != *ptr)
	{
		if(ARG_SEPERATOR == *ptr)
		{
			ret++;
		}
		ptr++;
	}
	return ret;
}

void app_parse_argument(char* argument[])
{
	get_argument_seperators(*argument);
}