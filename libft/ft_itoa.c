/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:03:11 by aroualid          #+#    #+#             */
/*   Updated: 2023/11/27 13:16:24 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static ssize_t	ft_length_num(ssize_t c)
{
	int	count;

	count = 0;
	if (c == 0)
		return (1);
	if (c < 0)
	{
		count++;
		c = c * -1;
	}
	while (c > 0)
	{
		c = c / 10;
		count++;
	}
	return (count);
}

static void	ft_swap(char *a, char *b)
{
	char	c;

	c = *a;
	*a = *b;
	*b = c;
}

static void	ft_strrev(char *tab, int len)
{
	int	size;
	int	v;

	v = 0;
	size = len - 1;
	while (size >= v)
	{
		ft_swap(&tab[v], &tab[size]);
		v++;
		size--;
	}
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;
	int		length;
	long	v;

	i = 0;
	v = n;
	if (v < 0)
		v = v * -1;
	length = ft_length_num(n);
	tab = ft_calloc(length + 1, sizeof(char));
	if (tab == NULL)
		return (NULL);
	if (v == 0)
		tab[0] = '0';
	while (v > 0)
	{
		tab[i] = (v % 10) + '0';
		v = v / 10;
		i++;
	}
	if (n < 0)
		tab[i++] = '-';
	ft_strrev(tab, i);
	return (tab);
}
