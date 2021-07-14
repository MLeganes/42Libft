/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:23:56 by x250              #+#    #+#             */
/*   Updated: 2021/07/14 10:50:50 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static 	int ft_countwords(const char *str, char c)
{
	int		words;
	int		isword;
	char	*s;

	s = (char *)str;
	words = 0;
	isword = 0;
	while( *s != '\0')
	{
		if ( *s == c)
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

// static char *ft_findword(char *str, char c)
// {
//     ft_strchr( s, c)
// }

static char	*ft_sub(char const *s, unsigned int start, int len)
{
	char	*substr;
	int     counter;

	counter = 0;
	substr = (char *)malloc(len + 1);
	
    if (substr == NULL )
        return (NULL);

	while (counter < len && s[counter] != '\0')
	{
		substr[counter] = s[start + counter];
		counter++;
	}
	substr[counter] = '\0';	
	return (substr);
}

static void ft_findworkd()
{

}

char **ft_split(char const *s, char c)
{
	char    **result;
    char    *start_word;
    char    *end_word;
    char    *word;
	int 	words;
    int     counter;
    int     lenword;
    int     isword;

	words = ft_countwords(s, c);
    result = (char **)malloc( sizeof(char **) * (words + 1)); // words + 1 ending with null. (char *) = 1???????
    if (result == 0)
        return (0);  //malloc protected == 0 or null

    start_word = (char *)s;
    end_word = (char *)s;
    counter = 0;

    lenword = 0;
    isword = 0;


    //look for the word and sub-workd


    
    while( *s != '\0')
    {
        if ( *s == c)
		{
            if (isword == 1)
            {
                end_word = (char *)s;
                ///ft_memcpy or strcpy or somethign to copy the word in the result.
                lenword = start_word - end_word;
                if ( lenword < 0)
                    lenword = lenword * (-1);

                word = ft_sub(start_word, 0, end_word - start_word);
                result[counter] = word;
                counter++;
            }
			isword = 0;
		}
		else if (isword == 0)
		{
			isword = 1;
			start_word = (char *)s;
		}
		s++;
    }
    result[counter] = NULL;
	return (result);
}


/*****
 * 
 * To DELETEEEE
 * 
 * 
 */ 

// static 	int ft_countwords(char *str, char c)
// {
// 	int		words;
// 	int		isword;
// 	char	*s;

// 	s = str;
// 	words = 0;
// 	isword = 0;
// 	while( *s != '\0')
// 	{
// 		if ( *s == c)
// 		{
// 			isword = 0;			
// 		}
// 		else if (isword = 0)
// 		{
// 			isword = 1;
// 			words++;
// 		}
// 		s++;
// 	}
// 	return (words);
// }

// char **ft_split(char const *s, char c)
// {
// 	char const	*s1;
// 	char 	*result;
// 	int 	words;
// 	int 	len;

	
// 	words = ft_countwords(s, c);




// 	s1 = s;
// 	len = ft_strlen(s);
// 	result = malloc( len);
// 	if (!result)
// 		return (NULL);
// 	i = 0;



	
// 	while (*s1)
// 	{
// 		if (*s1 == c)
// 			s1++;
// 		else
// 		{
// 			while ( *s1 != c && *s1 != '\0')
// 			{
// 				result[i] = *s1;
// 				s1++;
// 				i++;
// 			}
// 			result[i] = '\n';
// 		}
// 	}
	
// 	return (result);
// }
