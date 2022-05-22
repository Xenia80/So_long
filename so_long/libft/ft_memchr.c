/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:10:50 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:10:52 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		bite;
	const char	*sec;

	sec = (const char *)s;
	bite = (char)c;
	i = 0;
	while (i < n)
	{
		if (sec[i] == bite)
		{
			return ((char *)sec + i);
		}
		i++;
	}
	return (NULL);
}
