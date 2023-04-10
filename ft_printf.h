/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:15:34 by anmohamm          #+#    #+#             */
/*   Updated: 2023/03/28 15:00:12 by anmohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *word, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_pointer(unsigned long p, char *digits);
int	ft_putnbr(int nb);
int	ft_putnbru(unsigned int nb);

#endif