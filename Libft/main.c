/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:35:09 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/22 19:35:21 by amorcill         ###   ########.fr       */
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