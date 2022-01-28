/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeser <aeser@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 14:05:54 by aeser             #+#    #+#             */
/*   Updated: 2022/01/28 14:19:26 by aeser            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	written;

	if (s1 && s2)
	{
		new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
		if (new_str == NULL)
			return (NULL);
		written = ft_strlcat(new_str, (char *)s1, ft_strlen(s1) + 1);
		written += ft_strlcat(new_str + written, (char *)s2, ft_strlen(s2) + 1);
		new_str[written] = '\0';
		return (new_str);
	}
	return (NULL);
}
