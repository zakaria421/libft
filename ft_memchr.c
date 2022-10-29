/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbentale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:53:50 by zbentale          #+#    #+#             */
/*   Updated: 2022/10/29 16:22:08 by zbentale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*k;

	i = 0;
	a = (unsigned char) c;
	k = (unsigned char *) s;
	while (i < n)
	{
		if (k[i] == a)
			return (&k[i]);
		i++;
	}
	return (0);
}
