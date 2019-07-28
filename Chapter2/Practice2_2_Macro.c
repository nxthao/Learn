#include <stdio.h>
/*
Macro with #ifdef and #ifndef is negative with #ifdef( Check it is defined or not to compile)
Macro with #if, #endif (Check if it is true or false to compile)
*/
#define TEST 10

void main()
{
	#ifdef TEST
	{
		printf("Test is defined \n");
	}
	#else
	{
		printf("Test is not defined yet\n");
	}
	#endif
}
