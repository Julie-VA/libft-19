/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:33:14 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/05 11:47:53 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*scpy;

	scpy = (char *)s;
	i = 0;
	while (scpy[i] && i < n)
	{
		if (scpy[i] == c)
			return (scpy + i);
		i++;
	}
	return (NULL);
}