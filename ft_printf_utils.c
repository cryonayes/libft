/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:56:39 by aeser             #+#    #+#             */
/*   Updated: 2022/02/19 23:22:45 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_char(const int chr)
{
	write(1, &chr, 1);
	return (1);
}

int	ft_print_string(const char *str)
{
	int	printed;

	if (str == NULL)
		return (ft_print_string("(null)"));
	printed = 0;
	while (*str)
	{
		printed += ft_print_char(*str);
		str++;
	}
	return (printed);
}

int	ft_print_percent(void)
{
	return (ft_print_char('%'));
}
