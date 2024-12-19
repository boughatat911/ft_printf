/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbougrin <nbougrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 00:06:53 by nbougrin          #+#    #+#             */
/*   Updated: 2024/12/19 00:45:31 by nbougrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %c    
int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}
// %s

int	ft_putstr(char *s)
{
    int i;

	i = 0;
    if(!s)
    return(write(1,"(null)",6));
	while (s && s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
    return (i);
}
// %p 
int	ft_putadd(unsigned long nb)
{
	int		total;
	char	*base;

	total = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		total += ft_putadd(nb / 16);
		total += ft_putadd(nb % 16);
	}
	else
		total += ft_putchar(base[nb % 16]);
	return (total);
}
// %d

int	ft_putnbr(int n)
{
	int i;

	i = 0;
	if (n == -2147483648)
		return(write (1, "-2147483648", 11));
	else if (n < 0)
	{
		i = ft_putchar ('-');
		n *= -1;
		i+= ft_putnbr(n);
	}
	else if (n >= 10)
	{
		i+= ft_putnbr (n / 10);
		i+= ft_putchar (n % 10 + '0');
	}
	else if (n >= 0 && n < 10)
		i+= ft_putchar (n % 10 + '0');
	return (i);
}

// %i


// %u
int	ft_putunsnbr(unsigned int n)
{
	unsigned	int	i;

	i = 0;

	if (n < 0)
	{
		i = ft_putchar ('-');
		n *= -1;
		i+= ft_putnbr(n);
	}
	else if (n >= 10)
	{
		i+= ft_putnbr (n / 10);
		i+= ft_putchar (n % 10 + '0');
	}
	else if (n >= 0 && n < 10)
		i+= ft_putchar (n % 10 + '0');
	return (i);
}

// %x

int	ft_put_low_hexa(unsigned int nb)
{
	int		total;
	char	*base;

	total = 0;
	base = "0123456789abcdef";
	if (nb >= 16)
	{
		total += ft_put_low_hexa(nb / 16);
		total += ft_put_low_hexa(nb % 16);
	}
	else
		total += ft_putchar(base[nb % 16]);
	return (total);
}

// %X
int	ft_put_up_hexa(unsigned int nb)
{
	int		total;
	char	*base;

	total = 0;
	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		total += ft_put_up_hexa(nb / 16);
		total += ft_put_up_hexa(nb % 16);
	}
	else
		total += ft_putchar(base[nb % 16]);
	return (total);
}

// %% 