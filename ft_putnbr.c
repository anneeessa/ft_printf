/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:54:36 by anmohamm          #+#    #+#             */
/*   Updated: 2023/03/01 18:08:55 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	len;

	len = 0;
	if (nb == -2147483648)
		len += ft_putstr("-2147483648");
	else if (nb > 9)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else if (nb < 0)
	{
		len += ft_putchar('-');
		nb = -1 * nb;
		len += ft_putnbr(nb);
	}
	else
	{
		len += ft_putchar(nb % 10 + '0');
	}
	return (len);
}
