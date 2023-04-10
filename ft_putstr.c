/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:01:51 by anmohamm          #+#    #+#             */
/*   Updated: 2023/02/28 18:48:08 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
	{
		ft_putstr("(null)");
		return (6);
	}
	len += write(1, s, ft_strlen(s));
	return (len);
}
