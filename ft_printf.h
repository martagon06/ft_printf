/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:32:01 by miguelmo          #+#    #+#             */
/*   Updated: 2025/02/13 23:23:03 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// aqui se ponen todas las librerias que valla a necesitar/

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

// aqui se ponen todos las funciones y archivos con funciones que cree/

int	ft_printf(char const *s, ...);
int	ft_filter(char const s[i], va_list args);
int	ft_print_string(va_list);
int	ft_putchar(va_list);
int	ft_putnbr(va_list);
#endif 
