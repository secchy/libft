#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (NULL);
	new = (char *) malloc((len + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		new[i] = s[start];
		start++;
		i++;
	}
	while (i <= len)
	{
		new[i] = '\0';
		i++;
	}
	retrn (new);
}

