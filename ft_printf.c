/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:46:46 by anmohamm          #+#    #+#             */
/*   Updated: 2023/03/28 14:58:23 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_cases(const char *word, int len, va_list args)
{
	len = 0;
	if (*word == 'c')
		len = ft_putchar(va_arg(args, int));
	if (*word == 's')
		len = ft_putstr(va_arg(args, char *));
	if (*word == 'p')
	{
		len += ft_putstr("0x");
		len += ft_pointer(va_arg(args, unsigned long), "0123456789abcdef");
	}
	if (*word == 'd' || *word == 'i')
		len = ft_putnbr(va_arg(args, int));
	if (*word == 'u')
		len = ft_putnbru(va_arg(args, unsigned int));
	if (*word == 'x')
		len += ft_pointer(va_arg(args, unsigned int), "0123456789abcdef");
	if (*word == 'X')
		len += ft_pointer(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (*word == '%')
		len = ft_putchar('%');
	return (len);
}

int	ft_printf(const char *word, ...)
{
	int		len;
	va_list	args;

	va_start(args, word);
	len = 0;
	while (*word)
	{
		if (*word == '%' && *(word + 1))
		{
			word++;
			len += ft_cases(word, len, args);
		}
		else
			len += ft_putchar(*word);
		word++;
	}
	va_end (args);
	return (len);
}

// int main()
// {
// 	int len;
// 	int len1;

// 	len = ft_printf("%x\n", 437);
// 	len1 = printf("%x\n", 437);

// 	printf("%d\n", len);
// 	printf("%d\n", len1);
// 	return(0);
// }