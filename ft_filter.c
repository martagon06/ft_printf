/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:22:49 by miguelmo          #+#    #+#             */
/*   Updated: 2025/02/13 23:23:01 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter(char const s[i], va_list args)
{
	int	
	if (s[i] == 'c')
			ft_putchar(va_list args);
	if (s[i] == 's')
		ft_print_string(va_list args);
	if (s[i] == 'd')
			ft_putnbr(va_list args);
}
