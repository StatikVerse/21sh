/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmgoduka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:10:14 by kmgoduka          #+#    #+#             */
/*   Updated: 2017/05/27 22:10:15 by kmgoduka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_base(unsigned long num, int base)
{
	static char	representation[] = "0123456789ABCDEF";
	static char	buffer[50];
	char		*ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	while (num != 0)
	{
		*--ptr = representation[num % base];
		num /= base;
	}
	return (ptr);
}
