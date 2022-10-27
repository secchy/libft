#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int	i;

	str = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (str[i] == c)
			return (&(str[i]));
		i--;
	}
	return (0);
}
