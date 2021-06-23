/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:35:09 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/23 22:50:34 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	test_memset(void);
void	test_strlen(void);
size_t	strnlen(const char *ch);

int	main(void)
{
	printf("\nStart Main...\n");
	test_memset();
	test_strlen();
	return (0);
}
