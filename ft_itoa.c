/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:36:43 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/04 21:37:04 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	take_len(unsigned int n)
{
	size_t	ret;

	ret = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		n /= 10;
		ret++;
	}
	return (ret);
}

static void	is_min(int *n, size_t *len, int *min, unsigned int *num)
{
	*min = 0;
	*len = 0;
	if ((*n) < 0)
	{
		(*num) = -1 * (*n);
		*len = 1;
		*min = 1;
	}
	if (!((*n) < 0))
		(*num) = (*n);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*ret;
	int				min;
	unsigned int	num;

	is_min(&n, &len, &min, &num);
	len += take_len(num);
	ret = (char *)ft_calloc(1, len + 1);
	if (!ret)
		return (NULL);
	ret[len] = 0;
	if (!num)
		ret[len - 1] = '0';
	while (num > 0)
	{
		len--;
		ret[len] = (num % 10) + '0';
		num /= 10;
	}
	if (min)
		ret[len - 1] = '-';
	return (ret);
}
