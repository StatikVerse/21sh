/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_width.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:10:44 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:10:51 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int	ft_find_width(char *flags)
{
	int	width;
	int	found;

	width = 0;
	found = 0;
	while (*flags != '.' && found == 0)
	{
		if (*flags >= 48 && *flags <= 57)
		{
			width = ft_atoi(flags);
			found = 1;
		}
		flags++;
	}
	return (width);
}
