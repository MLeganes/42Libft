/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 01:20:46 by x250              #+#    #+#             */
/*   Updated: 2021/07/06 15:03:20 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	unsigned char	buffer[1000];
	size_t			count;

	if (dest == 0 || src == 0)
		return (NULL);
	count = 0;
	ps = (unsigned char *)src;
	pd = (unsigned char *)dest;
	while (count < 1000 && count < n)
	{
		buffer[count] = ps[count];
		count++;
	}
	count = 0;
	while (count < n)
	{
		pd[count] = buffer[count];
		count++;
	}
	return (dest);
}
