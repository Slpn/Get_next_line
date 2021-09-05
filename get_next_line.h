/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snarain <snarain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 21:23:34 by snarain           #+#    #+#             */
/*   Updated: 2021/06/07 13:17:19 by snarain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

void	savecheck(char *save);

int		get_next_line(int fd, char **line);
int		ft_strchr(char *s, char c);
int		ft_strlen(char *s);
int		ft_bzero(void *s);

char	*ft_strdup(char *s);
char	*newline(char *buffer);
char	*ft_strjoin(char *s1, char *s2);

#endif
