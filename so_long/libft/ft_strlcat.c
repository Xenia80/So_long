/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:12:22 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:12:24 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(src);
	dlen = 0;
	i = 0;
	while (dst[dlen] && dlen < dstsize)
	{
		dlen++;
	}
	while (src[i] && (i + dlen + 1) < dstsize)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	if (dstsize > dlen)
		dst[dlen + i] = '\0';
	return (slen + ft_min(dstsize, dlen));
}
