/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:06:20 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:06:22 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_length(int a)
{
	size_t	len;

	len = 0;
	if (a <= 0)
		len++;
	while (a != 0)
	{
		a = a / 10;
		len++;
	}
	return (len);
}

static int	ft_modul(int b)
{
	if (b < 0)
		b = -b;
	return (b);
}

static void	ft_rev(char *str)
{
	size_t	i;
	size_t	len;
	size_t	buf;

	len = ft_strlen(str) - 1;
	i = 0;
	while (i <= (len / 2))
	{
		buf = str[i];
		str[i] = str[len - i];
		str[len - i] = buf;
		i++;
	}
}

char	*ft_itoa(int n)
{
	size_t	len;
	size_t	j;
	char	*new;

	len = ft_length(n);
	new = (char *)malloc(len + 1);
	if (!new)
		return (NULL);
	if (n < 0)
		new[len - 1] = '-';
	if (n == 0)
		new[0] = '0';
	j = 0;
	while (n != 0)
	{
		new[j] = ft_modul(n % 10) + '0';
		n = n / 10;
		j++;
	}
	new[len] = '\0';
	ft_rev(new);
	return (new);
}

int	print_base10_int(int n)
{
	int		len;
	char	*rez_itoa;

	rez_itoa = ft_itoa(n);
	len = ft_strlen(rez_itoa);
	write(1, rez_itoa, len);
	free(rez_itoa);
	return (len);
}
