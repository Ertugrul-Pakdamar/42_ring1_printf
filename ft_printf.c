/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 11:29:38 by epakdama          #+#    #+#             */
/*   Updated: 2025/06/16 14:06:06 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	write_variadic(char *s, int i, va_list args)
{
	if (s[i + 1] == 's')
		ft_putstr(va_arg(args, char *));
	else if (s[i + 1] == 'c')
		ft_putchar(va_arg(args, int));
	else if (s[i + 1] == 'i' || s[i + 1] == 'd')
		ft_putnbr(va_arg(args, int));
	else if (s[i + 1] == 'u')
		ft_putunsigned(va_arg(args, unsigned int));
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] != '%')
			ft_putchar(s[i]);
		else if (s[i + 1] == '%')
			ft_putchar(s[i++]);
		else
			write_variadic((char *)s, i++, args);
		i++;
	}
	return (0);
}

/**
 * bu işaretten yanyana iki tane varsa %% şeklinde onu işleme
 * stringi sol baştan yazdır % denk gelince türüne göre va_arg yazdır
 *
	• %% Prints a percent sign
	• %c Prints a single character.
	• %s Prints a string (as defined by the common C convention).
	• %i Prints an integer in base 10.
	• %u Prints an unsigned decimal (base 10) number.
	• %d Prints a decimal (base 10) number.

	• %p The void * pointer argument has to be printed in hexadecimal format.
	• %x Prints a number in hexadecimal (base 16) lowercase format.
	• %X Prints a number in hexadecimal (base 16) uppercase format.
 */