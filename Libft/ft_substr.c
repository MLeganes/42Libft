/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 23:43:50 by x250              #+#    #+#             */
/*   Updated: 2021/07/09 20:49:28 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter;

	counter = 0;
	substr = malloc(len + 1);
	if (s == NULL || ft_strlen(s) < start)
	{
		substr[counter] = '\0';
		return (substr);
	}
	if (substr != NULL && s != NULL)
	{
		while (counter < len && s[counter] != '\0')
		{
			substr[counter] = s[start + counter];
			counter++;
		}
		substr[counter] = '\0';
	}
	return (substr);
}
