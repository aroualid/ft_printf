/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:03:00 by aroualid          #+#    #+#             */
/*   Updated: 2023/11/27 13:17:33 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_ptr(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
	i++;
	}
	return (0);
}

static int	ft_first_sep(char const *s, char const *set)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while ((s[i]) && ft_is_ptr(s[i], set))
		{
			i++;
			count++;
		}
		if (s[i] != *set)
			return (count);
	}
	return (count);
}

static int	ft_last_sep(char const *s, char const *set)
{
	int	i;
	int	count;

	count = 0;
	i = ft_strlen(s) - 1;
	while (s[i])
	{
		while ((s[i]) && ft_is_ptr(s[i], set))
		{
			i--;
			count++;
		}
		if (s[i] != *set)
			return (count);
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		v;

	if (s1 == NULL || set == NULL)
		return (NULL);
	v = ft_strlen(s1) - (ft_first_sep(s1, set) + ft_last_sep(s1, set));
	ptr = ft_substr(s1, ft_first_sep(s1, set), v);
	return (ptr);
}
