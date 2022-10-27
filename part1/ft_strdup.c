#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*dupe;

	i = ft_strlen(s);
	dupe = (char *) malloc((i + 1) * sizeof(char));
	if (!dupe)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		dupe[i] = s[i];
		i++;
	}
	dupe[i] = '\0';
	return (dupe);
}
