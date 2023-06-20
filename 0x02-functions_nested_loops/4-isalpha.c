#include "main.h"

/**
 * _isalpha - checks whether a character is alphabetic or not
 * Return: 1 if chharacter is alphabetic, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
