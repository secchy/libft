#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	int	i;

	i = 0;
	if (!s1)
		return (NULL);

	*trim = ft_substr(s1, set, (ft_strlen(s1) - set));
	if (trim == NULL)
		return (NULL);
	return (trim);
}

