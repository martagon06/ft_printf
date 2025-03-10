/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:22:56 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/10 19:32:49 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *s, ...)
{
	va_list	args;
	int		cont;
	int		i;

	i = 0;
	va_start(args, s);
	cont = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == '%')
			{
				write (1, "%", 1);
				cont++;
			}
			cont += ft_filter(s[i], args);
		}
		else
		{
			write(1, &s[i], 1);
			cont++;
		}
		i++;
	}
	va_end(args);
	return (cont);
}
