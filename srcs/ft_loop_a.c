/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loop_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammad <ahammad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:21:57 by ahammad           #+#    #+#             */
/*   Updated: 2021/10/13 00:30:17 by ahammad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	ptr_assign(int *variable, int valeur)
{
	*variable = valeur;
	return (*variable);
}

int	**ft_mllc(int ***mapz, int a)
{
	*mapz = ((int **)malloc(sizeof(int *) * a));
	return (*mapz);
}

int	*ft_mllc_2(int **mapz, int a)
{
	*mapz = (int *)malloc(sizeof(int) * a);
	return (*mapz);
}

int	new_func(int fd, t_map *map, char **line)
{
	int		ret;

	while (ptr_assign(&ret, get_next_line(fd, line)) == 1)
	{
		if (**line == '\0')
			break ;
		if (check_line(*line, map) == -1)
			return (-1);
		map->height++;
	}
	if (ret == 1)
		free(*line);
	return (0);
}

int	what_buff(char buff)
{
	if (!ft_isdigit(buff))
		if ((buff < 'a' || buff > 'f'))
			if ((buff < 'A' || buff > 'F'))
				if (buff != ' ' && buff != '-' && buff != '+')
					if (buff != 'x' && buff != 'X')
						return (1);
	return (0);
}
