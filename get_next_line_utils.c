/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 00:02:21 by gselyse           #+#    #+#             */
/*   Updated: 2020/06/03 00:02:21 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_list	*ft_add(int fd)
{
	t_list	*elem;

	if (!(elem = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	elem->fd = fd;
	elem->rest = NULL;
	elem->next = NULL;
	return (elem);
}

size_t	ft_strlen_gnl(const char *s)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup_gnl(char *src)
{
	char		*new_line;
	size_t		i;

	i = 0;
	if (!(new_line = (char *)malloc(sizeof(char) * (ft_strlen_gnl(src) + 1))))
		return (NULL);
	while (src[i] != '\0')
	{
		new_line[i] = src[i];
		i++;
	}
	new_line[i] = '\0';
	return (new_line);
}

char	*ft_strjoin_gnl(char **s1, char *s2)
{
	size_t		len;
	size_t		i;
	char		*new;

	if (*s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen_gnl(*s1) + ft_strlen_gnl(s2) + 1;
	if (!(new = (char*)malloc(len * sizeof(char))))
		return (NULL);
	len = 0;
	while ((*s1)[i])
		new[len++] = (*s1)[i++];
	i = 0;
	while (s2[i])
		new[len++] = s2[i++];
	new[len] = '\0';
	free(*s1);
	return (new);
}

char	*ft_strchr(const char *s, int c)
{
	char	*t;

	t = (char *)s;
	while (*t != '\0')
	{
		if (*t == c)
			return (t);
		else if (*t == '\0')
			return (NULL);
		t++;
	}
	if (c == '\0')
		return (t);
	return (0);
}
