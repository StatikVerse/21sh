/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:18:44 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:18:45 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *r;

	r = (unsigned char *)s;
	while (n > 0)
	{
		if (*r++ == (unsigned char)c)
			return ((void *)r - 1);
		n--;
	}
	return (NULL);
}
