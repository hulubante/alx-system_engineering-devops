#include <stdio.h>

/**
 * main - prints the alphabet is lowercase
 * followed by a new line, except q and e
 * Return: Always o (success)
 */
int main(void)
	{
		int ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
		if (ch != 'q' && ch != 'e')
		 	putchar(ch);
		}
	        	putchar('\n');
		return (0);
}

