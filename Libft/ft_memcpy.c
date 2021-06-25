/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 11:56:41 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/25 13:04:52 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		len;

	if (!dst && !src)
		return (NULL);
	len = 0;
	while (len < n)
	{		
		*(char *)(dst + len) = *(char *)(src + len);
		len++;
	}
	return (dst);
}
