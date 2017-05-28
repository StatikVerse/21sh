/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:12:28 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:12:30 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

static int	ft_find_prec(char *flags, char *s)
{
	int	prec;

	prec = ft_strlen(s);
	while (*flags)
	{
		if (*flags == '.')
			prec = ft_atoi(flags + 1);
		flags++;
	}
	return (prec);
}

void		ft_handle_s(char *flags, char *s)
{
	int	l_justfy;
	int	width;
	int	prec;

	l_justfy = ft_flags('-', flags);
	prec = ft_find_prec(flags, s);
	width = ft_find_width(flags) - prec;
	if (prec > (int)ft_strlen(s))
		width = ft_find_width(flags) - ft_strlen(s);
	if (l_justfy)
	{
		ft_putnstr(s, prec);
		ft_manage_width(width);
	}
	else
	{
		ft_manage_width(width);
		ft_putnstr(s, prec);
	}
}
