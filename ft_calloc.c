/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-aud <rvan-aud@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 15:58:40 by rvan-aud          #+#    #+#             */
/*   Updated: 2021/04/05 16:37:12 by rvan-aud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*tab;
	size_t	i;

	tab = (int *)malloc(count * size);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < count)
	{
		tab[i++] = 0;
	}
	return (tab);
}