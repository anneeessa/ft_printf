/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:34:39 by anmohamm          #+#    #+#             */
/*   Updated: 2023/03/28 14:49:34 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long p, char *digits)
{
	int	len;

	len = 0;
	if (p > 15)
	{
		len += ft_pointer((p / 16), digits);
	}
	len += ft_putchar(digits[p % 16]);
	return (len);
}
