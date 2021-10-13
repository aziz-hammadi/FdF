/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _ft_strjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:12:41 by mnaji             #+#    #+#             */
/*   Updated: 2021/10/12 20:20:54 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len_join;
	int		i;
	int		i2;

	if (s1 == 0 || s2 == 0)
		return (NULL);
	len_join = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	i2 = 0;
	str = (char *)malloc(sizeof(char) * (len_join + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i2] != '\0')
	{
		str[i] = s2[i2];
		i++;
		i2++;
	}
	str[i] = '\0';
	return (str);
}
