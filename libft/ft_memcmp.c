/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:13:17 by aroualid          #+#    #+#             */
/*   Updated: 2023/11/16 13:18:04 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size )
{
	size_t			i;
	const char		*pt1;
	const char		*pt2;

	pt1 = (const char *)pointer1;
	pt2 = (const char *)pointer2;
	i = 0;
	if (size <= 0)
	{
		return (0);
	}
	while ((i < size - 1) && pt1[i] == pt2[i])
	{
		i++;
	}
	return ((unsigned char)pt1[i] - (unsigned char)pt2[i]);
}
