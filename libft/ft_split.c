/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroualid <aroualid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:36:31 by aroualid          #+#    #+#             */
/*   Updated: 2023/11/27 13:22:16 by aroualid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while ((s[i]) && s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_strncpy( char *dest, const char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_copy_word(const char *str, char sep, int *length)
{
	int			len;
	const char	*start;
	char		*ptr;

	start = str;
	while (*str && *str != sep)
		str++;
	len = str - start;
	*length = len;
	ptr = malloc(sizeof(char) * len + 1);
	if (!ptr)
		return (NULL);
	ft_strncpy(ptr, start, len);
	return (ptr);
}

static void	*ft_free(char **tav)
{
	int	i;

	i = 0;
	while (tav[i] != NULL)
	{
		free(tav[i]);
		i++;
	}
	free(tav);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		length;

	i = 0;
	if (!s)
		return (NULL);
	tab = ft_calloc(sizeof(char *), (ft_count_word(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		length = 0;
		if (*s != c)
		{
			tab[i] = ft_copy_word(s, c, &length);
			if (tab[i] == NULL)
				return (ft_free(tab));
			i++;
		}
		if (*s == c)
			s++;
		s += length;
	}
	return (tab);
}
