#include "libft.h"

int	ft_toupper(int c)
{
	int	ret;

	if ((c >= 97) && (c <= 122))
	{
		ret = c - 32;
		return (ret);
	}
	else
		return (c);
}
