/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 15:09:10 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/28 13:35:35 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	int	isdigit;

	isdigit = 0;
	if (c > 47 && c < 58)
		isdigit = 1;
	return (isdigit);
}
