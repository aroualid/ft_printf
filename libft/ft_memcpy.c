/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:15:34 by aroualid          #+#    #+#             */
/*   Updated: 2023/11/16 11:45:28 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ds;
	size_t	i;

	ds = (char *)dest;
	i = 0;
	while (i < n)
	{
		*(char *)ds = *(char *)src;
		ds++;
		src++;
		i++;
	}
	return (dest);
}
