#include "utils.h"

char* strcpy(const char* src, char* dest)
{
	char* tmp = dest;
	while ((*dest++ = *src++) != '\0')
		;
	return tmp;
}

int strlen(const char* str)
{
	char* tmp = str;
	while (*str != '\0')
		str++;
	return str - tmp;
}

int strcat(char* str, const char* str1)
{
	while (*str != '\0')
		str++;
	while ((*str++ = *str1++) != '\0')
		;

}

int atoi(const char* str)
{
	int number = 0;
	int sign = 1;
	if (*str++ == 0x2D)
		sign = -1;

	while (*str >= 0x30 && *str <= 0x39)
	{
		number = (number *10) + (*str - 0x30);
		str++;
	}
	number *= sign;

	return number;
}
