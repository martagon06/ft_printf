/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:22:49 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/08 12:49:16 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter(char const c, va_list args)
{
	if (c == 'c')
		ft_putchar(va_list args);
	if (c == 's')
		ft_print_string(va_list args);
	if (c == 'p')
		ft_printpunt(va_list args);
	if (c == 'd')
		ft_print_int(va_list args);
	if (c == 'i')
		ft_print_int(va_list args);
	if (c == 'u')
		ft_print_unsigned_int(va_list args);
	if (c == 'x')
		ft_hexa_min(va_list args);
	if (c == 'X')
		ft_hexa_max(va_list args);
}
