/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:06:54 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:06:56 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	write(1, &c, 1);
	return (1);
}

int	print_string(char *str)
{
	int	i;

	i = 0;
	if (!str)
		str = "(null)";
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	print_pointer(unsigned long n)
{
	char	*base;
	int		i;

	i = 1;
	base = "0123456789abcdef";
	if (n < 16)
		write(1, &base[n], 1);
	else
	{
		i += print_pointer(n / 16);
		print_pointer(n % 16);
	}
	return (i);
}

int	print_base16(unsigned int numb, int type)
{
	char	*base;
	int		i;

	i = 1;
	base = "0123456789abcdef0123456789ABCDEF";
	if (numb < 16)
		write(1, &base[numb + 16 * type], 1);
	else
	{
		i += print_base16(numb / 16, type);
		print_base16(numb % 16, type);
	}
	return (i);
}
