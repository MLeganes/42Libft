/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:19:48 by x250              #+#    #+#             */
/*   Updated: 2021/06/25 18:18:18 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int src_len;

	src_len = ft_strlen(src);
	i = 0;
	
	if (size != 0)
	{
		while ((i < size - 1) && *(src + i))
		{
			*(dst + i) = *(src + i);
			i++;
		}
		if (src[i] == '\0')	
			return (i);	
		
	}
	if (size ==0)
	{
		
	}

	
	
	*(dst + i) = '\0';
	while( *dst)
		dst++;
	return (src_len);
}
