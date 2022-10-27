#include "libft.h"

char *ft_strlcpy(char *dest, const char *src, size_t maxlen)
{
	const size_t	srclen;
	
	srclen = ft_strlen(src);
	if (srclen + 1 < maxlen)
		ft_memcpy(dest, src, srclen + 1);
	else if (maxlen != 0)
	{
		ft_memcpy(dest, src, maxlen - 1);
		dest[maxlen - 1] = '\0';
	}
	return (srclen);
}
