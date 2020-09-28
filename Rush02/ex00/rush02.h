/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcatinau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/26 10:01:11 by fcatinau          #+#    #+#             */
/*   Updated: 2020/09/27 21:48:12 by cmalard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_putstr(char *c);
void	ft_putchar(char c);
int		ft_strlen(char *c);
void	ft_error(void);
int		verif_enter(char *str);
int		open_file(char *c);
char	*read_file(int file);
void	close_file(int file);
void	ft_split(char *str, char **key, char **value);
void	select_need(char *arg, char *content);
char	*ft_strdup(char *src);

#endif
