/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 14:56:02 by x250              #+#    #+#             */
/*   Updated: 2021/07/08 09:42:31 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);
	else
	{
		pointer = malloc((nmemb * size));
		if ( pointer == NULL)
			return (NULL);
		ft_bzero(pointer, (nmemb * size));
	}
	return (pointer);
}
