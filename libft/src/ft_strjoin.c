/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:33:48 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:33:49 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = ft_memalloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join)
	{
		ft_strcpy(join, s1);
		ft_strcat(join, s2);
	}
	return (join);
}
