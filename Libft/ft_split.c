/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:23:56 by x250              #+#    #+#             */
/*   Updated: 2021/07/13 18:04:06 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countwords(char *s, char c)
{
	int	words;
	int	isword;

	words = 0;
	isword = 0;
	while( *s != '\0')
	{
		if ( *s == c)
		{
			isword = 0;			
		}
		else 
		{
			isword = 1 
			//letter from word
		}
		if (isword == 1)
		{
			
		}
		s++;
		
		
	}
}

char **ft_split(char const *s, char c)
{
	char const	*s1;
	char 	*result;
	int 	words;
	int 	len;

	
	words = ft_countwords(s, c);




	s1 = s;
	len = ft_strlen(s);
	result = malloc( len);
	if (!result)
		return (NULL);
	i = 0;



	
	while (*s1)
	{
		if (*s1 == c)
			s1++;
		else
		{
			while ( *s1 != c && *s1 != '\0')
			{
				result[i] = *s1;
				s1++;
				i++;
			}
			result[i] = '\n';
		}
	}
	
	return (result);
}
