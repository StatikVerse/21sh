/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:25:43 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/28 02:16:59 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t len)
{
	void	*real;

	real = (void *)malloc(len);
	if (real)
	{
		memset(real, 0, len);
		memcpy(real, ptr, strlen(ptr));
	}
	free(ptr);
	return (real);
}
