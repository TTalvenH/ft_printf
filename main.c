
#include "ft_printf.h"
#include <stdio.h>

int main ()
{
	int	rtn = 0;
	char	 c = 'e';
	char	*s = "NULL";
	char	*ptr = "test";
	int	d = -42;
	int	i = -42;
	int	u = -42;
	int	x = -42;
	int	X = -42;

	
	rtn = ft_printf("%%test %% %c%s%ptr%d%i%u%x%X test%%", c, s, ptr, d, i, u, x, X);	 ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("%%test %% %c%s%ptr%d%i%u%x%X test%%", c, s, ptr, d, i, u, x, X);      printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf c: '%c'", c);   ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf c: '%c'", c);   printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf s: '%s'", NULL);   ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf s: '%s'", NULL);      printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf p: '%p'", ptr); ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf p: '%p'", ptr);    printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf d: '%d'", d);   ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf d: '%d'", d);      printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf i: '%i'", i);   ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf i: '%i'", i);      printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf u: '%u'", u);   ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf u: '%u'", u);      printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf x: '%x'", x);   ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf x: '%x'", x);      printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf X: '%X'", X);   ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf X: '%X'", X);      printf(" rtn: %d\n\n", rtn);

	rtn = ft_printf("ft_printf %%: '%%'");     ft_printf(" rtn: %d\n", rtn);
	   rtn = printf("   printf %%: '%%'");        printf(" rtn: %d\n\n", rtn);

	return (0);
}