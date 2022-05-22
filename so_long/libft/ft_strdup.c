/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:12:03 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:12:05 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*c;
	size_t	a;
	size_t	lench;

	lench = ft_strlen(s1);
	c = (char *)malloc(lench + 1);
	if (!c)
		return (NULL);
	a = 0;
	while (s1[a])
	{
		c[a] = s1[a];
		a++;
	}
	c[a] = '\0';
	return (c);
}
