/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:22:49 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/04 21:22:20 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter(char const s[i], va_list args)
{
	if (s[i] == 'c')
		ft_putchar(va_list args);
	if (s[i] == 's')
		ft_print_string(va_list args);
	if (s[i] == 'p')
		ft_printpunt(va_list args);
	if (s[i] == 'd')
		ft_print_int(va_list args);
	if (s[i] == 'i')
		ft_print_int(va_list args);
	if (s[i] == 'u')
		ft_print_unsigned_int(va_list args);
	if (s[i] == 'x')
		ft_hexa_min(va_list args);
	if (s[i] == 'X')
		ft_hexa_max(va_list args);
}
