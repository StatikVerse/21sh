/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:14:31 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:14:32 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int nbr)
{
	static char	rep[] = "0123456789";
	static char buff[65];
	char		*ptr;
	long int	neg;

	ptr = &buff[64];
	*ptr = '\0';
	neg = nbr;
	if (neg < 0)
		neg *= -1;
	if (nbr == 0)
		*--ptr = rep[neg % 10];
	while (neg != 0)
	{
		*--ptr = rep[neg % 10];
		neg /= 10;
	}
	if (nbr < 0)
		*--ptr = '-';
	return (ptr);
}
