/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:20:12 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:20:14 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned	ft_num_digits(const int n)
{
	if (n >= 0 && n < 10)
		return (1);
	if (n < 0)
		return (ft_strlen(ft_itoa(n)));
	return (1 + ft_num_digits(n / 10));
}
