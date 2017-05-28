/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:08:44 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/28 00:48:38 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "libft.h"

int get_next_line(const int fd, char **line);
int	ft_getchar(const int fd);
# ifndef GET_C_BUFF_SIZE
#  define GET_C_BUFF_SIZE 1024
# endif
# ifndef BUFF_SIZE
#  define BUFF_SIZE 1024
# endif
#endif
