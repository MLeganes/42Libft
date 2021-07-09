/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 20:52:51 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/09 21:14:58 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t len1;
	size_t len2;
	char *strjoin;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strjoin = malloc(len1 + len2 + 1);
	if (strjoin != NULL)
	{
		ft_strlcat(strjoin, s1, len1);
		ft_strlcat(strjoin, s2, len2);
		ft_strlcat(strjoin, "\0", 1);
	}	
	return (strjoin);
}
