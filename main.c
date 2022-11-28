
#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	char	 c = 'e';
	ft_printf("ft_printf c: '%c'\n", c);
	   printf("   printf c: '%c'\n\n", c);

	char	 *s = "test";
	ft_printf("ft_printf s: '%s'\n", s);
	   printf("   printf s: '%s'\n\n", s);

	char	 *ptr = "test";
	ft_printf("ft_printf p: '%p'\n", ptr);
	   printf("   printf p: '%p'\n\n", ptr);

	// char	 c = 'e';
	// ft_printf("ft_printf c: '%c'\n", c);
	//    printf("   printf c: '%c'\n\n", c);

	// char	 c = 'e';
	// ft_printf("ft_printf c: '%c'\n", c);
	//    printf("   printf c: '%c'\n\n", c);

	// char	 c = 'e';
	// ft_printf("ft_printf c: '%c'\n", c);
	//    printf("   printf c: '%c'\n\n", c);

	// char	 c = 'e';
	// ft_printf("ft_printf c: '%c'\n", c);
	//    printf("   printf c: '%c'\n\n", c);

	// char	 c = 'e';
	// ft_printf("ft_printf c: '%c'\n", c);
	//    printf("   printf c: '%c'\n\n", c);

	ft_printf("ft_printf c: '%%'\n");
	   printf("   printf c: '%%'\n\n");

	return (0);
}