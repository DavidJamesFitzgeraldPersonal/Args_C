// Test comment
#include <stdio.h>

#include "app_argument_parser.h"

int main(int argc, char* argv[])
{
	// Parse each argument
	for(int i = 0; i < argc; i++)
	{
		app_parse_argument(&argv[i]);
	}
	return -1;
}