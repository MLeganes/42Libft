/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:09:02 by x250              #+#    #+#             */
/*   Updated: 2021/07/06 15:33:43 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*ps;
	unsigned char	find;

	ps = (unsigned char *)s;
	find = (unsigned char)c;
	count = 0;
	while (count < n && ps[count] != '\0')
	{
		if (ps[count] == find)
			return ((void *)&ps[count]);
		count++;
	}
	return (NULL);
}
