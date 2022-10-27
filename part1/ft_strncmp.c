#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	if (n < 1)
		return (0);
	while (--n && s1[i])
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
