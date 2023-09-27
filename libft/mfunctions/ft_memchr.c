/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 15:40:30 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 13:26:23 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	int				i;
	int				len;

	str = (unsigned char *)s;
	chr = (unsigned char)c;
	i = 0;
	while (i != n)
	{
		if (str[i] == chr)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}
