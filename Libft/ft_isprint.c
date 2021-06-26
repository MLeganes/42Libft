/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 14:33:46 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/26 14:47:18 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

int	ft_isprint(int c)
{
	int	ret;

	ret = 0;
	if (c > 31 && c < 127)
		ret = 1;
	return (ret);
}