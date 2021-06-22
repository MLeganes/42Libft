/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 11:35:47 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/22 11:35:50 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    //int aux_n =0;
    // pointer.*s pinter = address
    //

    size_t size;
    size = 0;

    while (size <= n)
    {
        printf("This is ft_memset c: %d \n", c);
        //*s = c;
        s++;
        size++;
    }
    return s;
}

