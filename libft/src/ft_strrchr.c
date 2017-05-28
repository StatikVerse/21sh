/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:28:10 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:28:11 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		ch;
	const char	*str;

	ch = (char)c;
	str = NULL;
	if (ch == '\0')
		return ((char *)str);
	while (*s)
	{
		if (*s == '\0')
			return (0);
		else if (*s == ch)
			str = s;
		s++;
	}
	s = str;
	return (char *)s;
}
