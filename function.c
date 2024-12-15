#include <stdio.h>
#include <unistd.h>
// %c

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

// %s
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar_fd ('-', fd);
		n *= -1;
		ft_putnbr_fd (n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putchar_fd (n % 10 + '0', fd);
	}
	else if (n >= 0 && n < 10)
		ft_putchar_fd (n % 10 + '0', fd);
}

// %d


// %i


// %u


// %x


// %X


// %%