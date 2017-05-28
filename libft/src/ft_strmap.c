/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:34:15 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:34:16 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	int		i;

	i = -1;
	str = ft_memalloc(ft_strlen(s));
	if (str)
	{
		while (s[++i])
		{
			str[i] = f(s[i]);
		}
		str[i] = '\0';
	}
	return (str);
}
