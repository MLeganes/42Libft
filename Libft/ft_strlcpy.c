/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 23:19:48 by x250              #+#    #+#             */
/*   Updated: 2021/06/26 12:21:29 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	char *d;
	const char *s;
	size_t n;
	
	d = dst;
	s = src;
	n = size;
	if (n != 0)
	{
		while (n != 0)
		{
			*d++ = *s++;			
			n--;
			if (*s == '\0')
				break ;
		}
	}
	if (n == 0)
	{
		if (size != 0)
			*d = '\0';
		while (*s++)
			;
	}
	return (ft_strlen(src));
}
