/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 11:42:28 by aroualid          #+#    #+#             */
/*   Updated: 2023/11/27 13:28:53 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ds;
	const char	*sc;
	size_t		i;

	ds = (char *)dest;
	sc = src;
	i = 0;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			ds[n] = sc[n];
		}
	}
	else
	{
		while (i < n)
		{
			ds[i] = sc[i];
			i++;
		}
	}
	return (dest);
}
