#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = ft_strlen(dest);
	total = ft_strlen(src);
	if (size <= i)
		total = total + size;
	else
		total = total + 1;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (total);
}
