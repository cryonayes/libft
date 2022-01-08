/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:54:10 by aeser             #+#    #+#             */
/*   Updated: 2022/01/08 16:54:13 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	index;

	if (ft_strlen(s) == 0)
		return (NULL);
	substr = (char *)malloc(len + 1);
	index = 0;
	while (index < len)
	{
		substr[index] = s[start++];
		index++;
	}
	substr[start] = '\0';
	return (substr);
}
