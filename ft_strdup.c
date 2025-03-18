/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:03:28 by igurses           #+#    #+#             */
/*   Updated: 2024/10/26 17:06:45 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*new;

	len = ft_strlen(s1);
	new = (char *)malloc(len + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, len + 1);
	return (new);
}
