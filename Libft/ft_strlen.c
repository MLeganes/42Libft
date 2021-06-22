/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 14:12:32 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/22 19:25:27 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strnlen(const char *ch)
{
	int	count;

	count = 0;
	while (ch[count] != '\0')
	{
		count++;
	}
	return (count);
}
