/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:49:13 by igurses           #+#    #+#             */
/*   Updated: 2024/10/26 16:32:23 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*dst;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	if (dest < src)
		return (ft_memcpy(dest, src, len));
	dst = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (len--)
		dst[len] = s[len];
	return (dest);
}
