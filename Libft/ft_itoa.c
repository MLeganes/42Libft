/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 16:59:02 by amorcill          #+#    #+#             */
/*   Updated: 2021/07/14 01:42:07 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_itoa(int n)
// {
// 	char	*ret;
// 	int		res;
// 	char	resto;
// 	long	nll;

// 	if (n == -2147483648)
// 		return (ft_strdup("-2147483648"));
// 	nll = (long)n;
// 	if (n == 0 || n > 2147483647 || n < -2147483647)
// 		return (ft_strdup("0"));
// 	ret = (char *)malloc(12);
// 	ft_bzero(ret, 12);
// 	res = n;
// 	if (n < 0)
// 		res = n * (-1);
// 	ret = ret + 11;
// 	while (res != 0)
// 	{
// 		resto = (res % 10) + '0';
// 		*ret = resto;
// 		ret--;
// 		res = res / 10;
// 	}
// 	ret++;
// 	if (n < 0)
// 	{
// 		ret--;
// 		*ret = '-';
// 	}
// 	return (ret);
	
// }
