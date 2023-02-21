#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * Return: on success 1
 * on erro, -1 is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
