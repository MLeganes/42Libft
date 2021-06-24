/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:19:48 by x250              #+#    #+#             */
/*   Updated: 2021/06/24 23:02:05 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (len < (size - 1))
	{
		dst[len] = src[len];
		if (src[len] == '\0')
		{
			break;
		}
		len++;
	}
	if (len <= size)
	{
		dst[len] = '\0';
	}
	return (len);
}
