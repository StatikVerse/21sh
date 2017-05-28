/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_contains.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:26:11 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:26:12 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_str_contains(char c)
{
	static char conversions[] = "sSpdDioOuUxXcC%";
	int			i;

	i = 0;
	while (conversions[i])
	{
		if (c == conversions[i++])
			return (1);
	}
	return (0);
}
