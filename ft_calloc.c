/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:56:10 by aeser             #+#    #+#             */
/*   Updated: 2022/01/08 16:56:11 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ret;
	size_t	counter;
	size_t	char_counter;

	ret = malloc(nmemb * size);
	counter = 0;
	while (counter < nmemb)
	{
		char_counter = 0;
		while (char_counter < size)
		{
			((char *)ret)[counter + char_counter] = 0;
			char_counter++;
		}
		counter++;
	}
	return (ret);
}
