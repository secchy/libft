#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

int	ft_isascii(int c);

int	main(void)
{
	int	c;
	int	b;

	c = 0x80;
	b = ft_isascii(c);

	write(1, &b, 1);
	write(1, "\n", 1);
	printf("%d", isascii(c));
	
	return (0);
}

