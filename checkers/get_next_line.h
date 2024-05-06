/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rharutyu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:59:33 by rharutyu          #+#    #+#             */
/*   Updated: 2024/04/29 17:59:34 by rharutyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
#  include "../push_swap.h"
# endif

char	*get_next_line(int fd);
char	*reader(int fd, char *str);
char	*remove_line(char *str);
char	*new_line(char *str);
char	*ft_joiner(char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *s, char c);
char	*ft_joiner(char *s1, char *s2);
int		ft_strlen(char *s);
#endif
