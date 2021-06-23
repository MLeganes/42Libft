/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:36:03 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/23 12:50:23 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	test_memset(void)
{
	char	s[50];
	
	printf("\n[test memset ...]\n");
	strcpy(s, "Hello school 42Heilbronn");
	ft_memset(s, '*', 5);
	printf("[Test ft_memset] ft_memset: %s\n", s);
	strcpy(s, "Hello schol42Heilbronn");
	memset(s, '.', 5);
	printf("[Test memset]       memset: %s\n", s);
}
