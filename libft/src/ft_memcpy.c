/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:19:15 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:19:17 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*n_dest;
	const unsigned char	*n_src;

	n_dest = (unsigned char *)dest;
	n_src = (unsigned char *)src;
	while (n--)
		*n_dest++ = *n_src++;
	*(++n_dest) = '\0';
	return (dest);
}
