/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 18:02:40 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/23 12:55:32 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *ch);

void	test_strlen(void)
{
	size_t	len;

	printf("\n[Test strlen ...]\n");
	len = ft_strnlen("This is the best school ever");
	printf("[Test ft_memset] ft_strlen: %zu\n", len);
	len = strlen("This is the best school ever");
	printf("[Test memset]       strlen: %zu\n", len);
}
