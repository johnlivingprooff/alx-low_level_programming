#include "main.h"
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

int main (void)
{
	_puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick\n");
	printf("%c: %d\n", 'a', _isupper('a'));
	
	char buffer[98] = {0x00};

  simple_print_buffer(buffer, 98);
  _memset(buffer, 0x01, 95);
  printf("-------------------------------------------------\n");
  simple_print_buffer(buffer, 98);

  char s1[98] = "Hello ";
  char s2[] = "World!\n";
  char *ptr;

  printf("%s\n", s1);
  printf("%s", s2);
  ptr = _strcat(s1, s2);
  printf("%s", s1);
  printf("%s", s2);
  printf("%s", ptr);
	
	printf("%c: %d\n", '5', _isdigit('5'));

	char s3[] = "Hello";
  char s4[] = "World!";

  printf("%d\n", _strcmp(s3, s4));
  printf("%d\n", _strcmp(s4, s3));
  printf("%d\n", _strcmp(s3, s4));

	return (0);
}
