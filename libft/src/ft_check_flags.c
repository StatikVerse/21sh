/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_flags.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:10:34 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:10:36 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

char	*ft_check_flags(char *dest, char *traverse)
{
	char	*flags;
	char	*ttr;
	int		i;

	flags = dest;
	ttr = traverse;
	i = 0;
	while (!ft_str_contains(*ttr))
		flags[i++] = *ttr++;
	return (dest);
}
