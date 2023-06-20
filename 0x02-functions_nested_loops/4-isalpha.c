#include "main.h"

/**
 * _islower - checks whether a character is alphabetic or not
 * Return: 1 if chharacter is alphabetic, 0 if not
 */
int _islower(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 'A' && c <= 'Z'));
}
