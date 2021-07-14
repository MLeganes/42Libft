/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 20:59:04 by x250              #+#    #+#             */
/*   Updated: 2021/07/15 00:01:12 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
	unsigned char uc;

	if (c == 0)				// protection??????
		return;
	uc = (unsigned char)c;  //Is this unsigned????
	write(fd, &uc, 1);
}