/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:23:56 by x250              #+#    #+#             */
/*   Updated: 2021/07/14 15:43:04 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(const char *str, char c)
{
	int		words;
	int		isword;
	char	*s;

	s = (char *)str;
	words = 0;
	isword = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			isword = 0;
		}
		else if (isword == 0)
		{
			isword = 1;
			words++;
		}
		s++;
	}
	return (words);
}

// static char *ft_takeworkd( char *s, char c, int *len, int slen)
// {
// 	char *start;
	
// 	start = s;
// 	s = ft_strchr(start, c);
// 	if (s == 0)
// 		s = start + (slen - (*len));
// 	*len = (*len) + s - start;
// 	return (ft_substr(start, 0, s - start));	
// }


static void	ft_findworkds(char **result, char *s, char c)
{
	char	*start;
	int		counter;
	int		len;
	int		slen;

	start = (char *)s;
	counter = 0;
	len = 0;
	slen = ft_strlen(s);
	while (len < slen)
	{
		if (*s == c)
		{
			s++;
			len++;
		}
		else if (*s != c)
		{
			//result[counter++] = ft_takeworkd((char *)s, c, &len, slen);
			
			start = (char *)s;
			s = ft_strchr(start, c);
			if (s == 0)
					s = start + (slen - len);
			len += s - start;
			result[counter++] = ft_substr(start, 0, s - start);
		}
	}
	result[counter] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	char	*set;
	char	*copy;

	set = &c;
	if (s == 0)
		return (0);
	words = ft_countwords(s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (result == 0)
		return (0);
	if (words == 1)
	{
		result[0] = ft_strtrim(s, set);
		result[1] = NULL;
		return (result);
	}
	copy = (char *)s;
	ft_findworkds(result, copy, c);
	return (result);
}
