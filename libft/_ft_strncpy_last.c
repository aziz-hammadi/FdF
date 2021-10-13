/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/09 16:45:40 by mnaji             #+#    #+#             */
/*   Updated: 2021/10/12 20:28:04 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy_last(char *dest, char *src, int n)
{
	int		i;
	int		i2;

	i = ft_strlen(src) - n;
	i2 = 0;
	while (src[i] != '\0')
	{
		dest[i2] = src[i];
		i++;
		i2++;
	}
	dest[i] = '\0';
	i++;
	return (dest);
}
