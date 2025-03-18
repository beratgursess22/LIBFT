/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igurses <igurses@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 14:31:07 by igurses           #+#    #+#             */
/*   Updated: 2024/10/26 14:55:08 by igurses          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n, int sing)
{
	int	i;

	i = 0;
	if (n == 0)
		i = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	if (sing < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*substr;
	long	nmb;
	int		sing;
	int		lennmbr;

	nmb = n;
	sing = 1;
	if (nmb < 0)
		sing = sing * -1;
	nmb = sing * nmb;
	lennmbr = ft_nbrlen(nmb, sing);
	substr = (char *)malloc(sizeof(char) * lennmbr + 1);
	if (!substr)
		return (NULL);
	substr[lennmbr] = '\0';
	while (--lennmbr >= 0)
	{
		substr[lennmbr] = (nmb % 10) + '0';
		nmb = nmb / 10;
	}
	if (sing < 0)
		substr[0] = '-';
	return (substr);
}
