/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:36:03 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/22 12:53:04 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);

void test_memset(){

    char s[50] = "Hello schol42Heilbronn";
    char ss[50] = "Hello schol42Heilbronn";

    ft_memset(s, '*', 5);
    printf("[Test ft_memset] ft_memset: %s\n", s);
    
    memset(ss, '.', 5);
    printf("[Test ft_memset] memset: %s\n", ss);

}