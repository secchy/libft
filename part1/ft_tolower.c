#include "libft.h"

int	ft_tolower(int c)
{
	int	b;

	if ((c >= 65) && (c <= 90))
	{
		b = c + 32;
		return (b);
	}
	else
		return (c);
}
