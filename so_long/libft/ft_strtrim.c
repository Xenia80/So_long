/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:13:13 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:13:14 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	cut;
	size_t	i;
	char	*new;

	if (!s1)
		return (NULL);
	cut = ft_strlen(s1);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[cut - 1]) && cut > i)
		cut--;
	new = (char *)malloc(cut - i + 1);
	if (!new)
		return (NULL);
	if (new)
		ft_strlcpy(new, &s1[i], cut - i + 1);
	return (new);
}
