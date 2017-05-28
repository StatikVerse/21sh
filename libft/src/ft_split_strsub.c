/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_strsub.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 01:50:22 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/28 01:55:17 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_split_strsub(t_token token)
{
	size_t	len;
	char	*sub;

	len = token.end - token.top;
	sub = malloc(len + 1);
	if (sub)
	{
		memcpy(sub, token.top, len);
		sub[len] = 0;
	}
	return (sub);
}
