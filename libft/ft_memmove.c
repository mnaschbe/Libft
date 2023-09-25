/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaschbe <mnaschbe@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:24:50 by mnaschbe          #+#    #+#             */
/*   Updated: 2023/09/25 12:55:56 by mnaschbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*sc;
	unsigned char	*dst;
	int				i;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (sc > dst)
	{
		while (n > 0)
		{
			dst[n - 1] = sc[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			dst[i] = sc[i];
			i++;
		}
	}
	return (dst);
}
