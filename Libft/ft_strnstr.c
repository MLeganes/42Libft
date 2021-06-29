/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:34:56 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/29 17:55:59 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		siz;
	size_t		needlelen;
	const char	*ret;
	const char	*ptrhaystack;
	const char	*ptrneedle;

	siz = 0;
	ptrhaystack = haystack;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*ptrhaystack && siz < len)
	{
		if (*ptrhaystack == *needle)
		{				
			needlelen = ft_strlen(needle);
			ret = ptrhaystack;
			ptrneedle = needle;
			while (*ptrhaystack == *ptrneedle && needlelen != 0 && siz < len)
			{
				ptrneedle++;
				ptrhaystack++;
				needlelen--;
				siz++;
			}
			if (needlelen == 0 && siz <= len)
				return ((char *)ret);
			ptrhaystack = ret;
			ptrneedle = needle;
		}
		ptrhaystack++;
		siz++;
	}
	return (0);
}
