/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 17:56:02 by x250              #+#    #+#             */
/*   Updated: 2021/07/13 09:13:55 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	// char	*ret;
	// int		res;
	// char	resto;
	// long	nll;

	// if (n == -2147483648)
	// 	return (ft_strdup("-2147483648"));
	// nll = (long)n;
	// if (n == 0 || n > 2147483647 || n < -2147483647)
	// 	return (ft_strdup("0"));
	// ret = (char *)malloc(12);
	// ft_bzero(ret, 12);
	// res = n;
	// if (n < 0)
	// 	res = n * (-1);
	// ret = ret + 11;
	// while (res != 0)
	// {
	// 	resto = (res % 10) + '0';
	// 	*ret = resto;
	// 	ret--;
	// 	res = res / 10;
	// }
	// ret++;
	// if (n < 0)
	// {
	// 	ret--;
	// 	*ret = '-';
	// }
	// return (ret);




	
	int		neg;
	char	*str;
	int		length;

	neg = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	length = ft_numberlength(n);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	str = (char *)malloc((sizeof(char) * ft_numberlength(n)) + 1 + neg);
	if (!str)
		return (0);
	ft_complete_string(str, neg, n);
	while (length--)
	{
		str[length + neg] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
}
