/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit_c_l.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 00:53:13 by ahammad           #+#    #+#             */
/*   Updated: 2021/10/13 13:25:16 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_strsplit_c_l(int *leter, int *word, char **tab, int *i, char const *str)
{
	tab[word] = ft_strnew(leter);
	ft_strncpy(tab[word], str + i, leter);
	++word;
	i += leter;
}
