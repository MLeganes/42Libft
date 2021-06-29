/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 15:34:56 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/29 18:17:30 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		siz;
	size_t		needlelen;
	int			cmp;
	//const char	*ret;
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
			///ret = ptrhaystack;
			needlelen = ft_strlen(needle);
			cmp = ft_strncmp(ptrhaystack, ptrneedle, needlelen);		
			// ptrneedle = needle;
			// while (*ptrhaystack == *ptrneedle && needlelen != 0 && siz < len)
			// {				
			// 	ptrneedle++;
			// 	ptrhaystack++;
			// 	needlelen--;
			// 	siz++;
			// }
			if (cmp == 0)
				return ((char *)ptrhaystack);
			//ptrhaystack = ret;
			//ptrneedle = needle;
		}
		ptrhaystack++;
		siz++;
	}
	return (0);
}