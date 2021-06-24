/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: x250 <x250@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 12:18:31 by amorcill          #+#    #+#             */
/*   Updated: 2021/06/24 16:25:31 by x250             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>

void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *ch);
size_t  ft_strlcpy(char *dst, const char *src, size_t size);
size_t  strlcat(char *dst, const char *src, size_t size);
     
#endif