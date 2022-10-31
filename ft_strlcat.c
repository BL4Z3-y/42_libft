/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:09:40 by yes-slim          #+#    #+#             */
/*   Updated: 2022/10/31 23:59:09 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	len;

	j = 0;
	len = ft_strlen(dest);
	i = ft_strlen(dest);
	if (ft_strlen(dest) >= size)
		return (ft_strlen(src) + size);
	k = ft_strlen(src) + ft_strlen(dest);
	while (src[j] != '\0' && j < size - len - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (k);
}
