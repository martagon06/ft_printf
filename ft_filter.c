/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:22:49 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/10 10:21:31 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter(char const c, va_list args)
{
	if (c == 'c')
		ft_putchar(args);
	if (c == 's')
		ft_print_string(args);
	if (c == 'p')
		ft_printpunt(args);
	if (c == 'd')
		ft_print_int(args);
	if (c == 'i')
		ft_print_int(args);
	if (c == 'u')
		ft_print_unsigned_int(args);
	if (c == 'x')
		ft_hexa_min(args);
	if (c == 'X')
		ft_hexa_max(args);
	return (0);
}
