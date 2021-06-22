/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:35:47 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/22 12:16:23 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			count;
	unsigned char	*ptr;

	count = 0;
	ptr = (unsigned char *)s;
	while (count < n)
	{
		ptr[count] = (unsigned char)c;
		count++;
	}
	return (s);
}
