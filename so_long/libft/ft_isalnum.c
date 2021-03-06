/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:09:06 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:09:08 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int a)
{
	return ((a >= '0' && a <= '9') || (a >= 'a' && a <= 'z')
		|| (a >= 'A' && a <= 'Z'));
}
