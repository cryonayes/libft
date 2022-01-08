/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 16:54:56 by aeser             #+#    #+#             */
/*   Updated: 2022/01/08 16:54:57 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	size_t	index;
	size_t	len;

	len = ft_strlen(s);
	ret = malloc(sizeof(char) * len);
	index = 0;
	while (index < len)
	{
		ret[index] = s[index];
		index++;
	}
	return (ret);
}
