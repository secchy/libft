#include "libft.h"

void	*ft_memset(void *dest, int c, size_t len)
{
	unsigned char	*ptr;

	prt = dest;
	while (len-- > 0)
	{
		*ptr++ = (unsigned char) c;
	}
	return (dest);
}
