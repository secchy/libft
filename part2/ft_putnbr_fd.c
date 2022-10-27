#inclde "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	i;

	i = 1;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = (n * -1);
		}
		while ((n / 10) / 1> 0)
			i = (i * 10);
		while (i >= 1)
		{
			ft_putchar_fd((n / i) + '0', fd);
			n = n % i;
			i = (i / 10);
		}
	}
}

