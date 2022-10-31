#include "libft.h"

int		main(void)
{
	size_t	i;
	char	*str1;
	char	*str2;

	str1 = "tutu";
	str2 = "tata";
	i = ft_strlcat(str1, str2, 9);
	ft_putendl_fd(str1, 1);
	return (0);
}
