/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epakdama <epakdama@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:03:45 by epakdama          #+#    #+#             */
/*   Updated: 2025/06/16 15:38:31 by epakdama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, int *len)
{
	int	i;

	if (s == NULL)
	{
		ft_putstr("(null)", len);
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar(s[i], len);
		i++;
	}
}
