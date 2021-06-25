/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:35:09 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/25 10:59:23 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <string.h>
//# include <bsd/string.h>

#include "libft.h"

void	test_memset(void);
void	test_strlen(void);
 
int	main(void)
{
	printf("\nStart Main...\n");
	test_memset();
	test_strlen();
	
	// test strlcpy
	char dst[50];
	size_t len;
		
	printf("\n[test FT_strlcpy ...]\n");
	len = ft_strlcpy(dst, "Hello school 42Heilbronn", 15);
	printf("[Test ft_strlcpy] : %s   len: %zu \"", dst, len);
	
	// printf("\n[test strlcpy ...]\n");
	// len = strlcpy(dst, "Hello school 42Heilbronn", 15);
	// printf("[Test strlcpy] : %s   LEN: %zu \"", dst, len);

	char src[50];
	
	strcpy(src, "La ostia puta me tiene hasta los cojones esta");	
	len = ft_strlcpy(dst, src, 5);
	printf("\n[Test ft_strlcpy] 5 \nDestino: %s \nSource: %s \n", dst, src);
	return (0);
} 
