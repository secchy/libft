#include "libft.h"

int		main(void)
{
	size_t	i;
	char	*str1;
	char	*str2;
	char	buff[12];

	str1 = "tutu ";
	str2 = "tata";
	strcpy(buff, str1);
	i = ft_strlcat(buff, str2, 10);
	ft_putendl_fd(buff, 1);
	ft_putnbr_fd(i, 1);
	return (0);
}
