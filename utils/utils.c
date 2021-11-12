#include "utils.h"

char* strcpy(const char* src, char* dest)
{
	/* The code is self explatory here.
	* We assign the value pointed by src to dest and then we increment each pointer
	* Don't forget that we are working with local pointers, so every increment
	* has no effect on the initial pointer before this call */

	char* tmp = dest;
	while ((*dest++ = *src++) != '\0')
		;
	return tmp;
}


int strlen(const char* str)
{
	char* tmp = str; // Create a pointer to the first char to use it later
	while (*str != '\0') // We increment our pointer this we met '\0'.
		str++; // While doing this, str point further in the memory
	return str - tmp; // So by calculating the difference, we get the length as a char = 1 byte.
}

int strcat(char* str, const char* str1)
{
	while (*str != '\0') // Getting to the end of str
		str++;
	/* Doing the same thing as strcpy but this time starting at the end of str*/
	while ((*str++ = *str1++) != '\0')
		;
	return 0;
}

int atoi(const char* str)
{
	int number = 0;
	int sign = 1;

	if (*str++ == 0x2D) // Verify the sign of the number (0x2D == '-')
		sign = -1;

	/* Here we use the ASCII table as numbers follow each other
	* in the table
	* We first get the first digit, multiply it by 10
	* and then we do the difference between the that digit and the first
	* possible digit in the table wich gives us an offset */

	while (*str >= 0x30 && *str <= 0x39)
	{
		number = (number *10) + (*str - 0x30);
		str++;
	}

	number *= sign; // Don't forget to multiply by the sign !!!

	return number;
}
