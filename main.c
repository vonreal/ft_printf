#include <stdio.h>
#include <limits.h>

int	ft_printf(const char *format, ...);

int	main(void)
{
	int a;

	a = 1000;
	//ft_printf("%%%c%s%c 143 is [8f] correct? %x %X minus number: %d, plus number %i unsigend int is %u. and address of a :%p.\n", 'a', "bcd", 'e', 143, 143, -12345, 12345, 4294967295, &a);

	//printf("address of a : %#x.\n", &a);
	//	ft_printf("%.*s\n", 10, "123");
	//printf("%.*s\n", 10, "123");
	ft_printf("%.12X\n", 161616);
	printf("%.12X\n", 161616);
	return (0);
}
