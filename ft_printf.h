/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:54:47 by aroualid          #+#    #+#             */
/*   Updated: 2023/12/05 13:51:27 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdio.h>
# include <limits.h>
# include <strings.h>
# include <ctype.h>
# include <string.h>

int		ft_putnbr_basep(unsigned long nbr, char *base);
int		ft_printf(const	char *c, ...);
int		ft_putchar(char c);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		ft_putnbr(long long nbr);
int		ft_putstr(char *s);
size_t	ft_strlen(const char *s);
char	*ft_strstr(char *str, char *to_find);
int		ft_handle_p(void*ptr);

#endif
