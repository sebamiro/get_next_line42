/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seba <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:04:00 by seba              #+#    #+#             */
/*   Updated: 2022/08/26 16:11:15 by seba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s && (char)c != *s)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*str;
	size_t	i;
	size_t	j;

	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(total, sizeof(char));
	if (!str || !s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}

void	*ft_calloc(size_t n, size_t size)
{
	char	*res;
	size_t	i;

	i = 0;
	res = malloc(n * size);
	if (!res)
		return (NULL);
	while (i < size * n)
	{
		res[i] = '\0';
		i++;
	}
	return (res);
}

void	*ftfree(char *s)
{
	free(s);
	return (NULL);
}
