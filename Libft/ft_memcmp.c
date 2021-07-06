/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 23:52:18 by x250              #+#    #+#             */
/*   Updated: 2021/07/07 00:15:01 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (n > 0 && *ps2 != '\0' && *ps1 != '\0' && *ps1 == *ps2)
	{
		ps1++;
		ps2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((*ps1) - (*ps2));
}
