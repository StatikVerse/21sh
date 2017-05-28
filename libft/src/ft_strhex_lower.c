/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strhex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:32:51 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:32:52 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

void	ft_strhex_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(ft_tolower(str[i++]));
}
