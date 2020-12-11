/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 22:35:33 by gselyse           #+#    #+#             */
/*   Updated: 2020/12/12 02:56:45 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>

typedef	struct		s_list
{
	int				fd;
	char			*rest;
	struct s_list	*next;
}					t_list;

int					get_next_line(int fd, char **line);
t_list				*ft_add(int fd);

char				*ft_strdup_gnl(char *src);
size_t				ft_strlen_gnl(const char *s);
char				*ft_strjoin_gnl(char **s1, char *s2);
char				*ft_strchr(const char *s, int c);

#endif
