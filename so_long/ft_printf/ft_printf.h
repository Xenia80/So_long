/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 19:06:37 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 19:06:39 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		print_char(char c);
int		print_string(char *str);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
int		print_base10_int(int n);
char	*ft_utoa(unsigned int n);
int		print_unsigned_int(unsigned int n);
int		print_base16(unsigned int numb, int type);
int		print_pointer(unsigned long n);
int		ft_printf(const char *in, ...);

#endif