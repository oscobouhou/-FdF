/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oboutarf <oboutarf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 05:12:24 by oboutarf          #+#    #+#             */
/*   Updated: 2022/11/22 17:28:30 by oboutarf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	print_grid_data(r_data *grid)
{
	int		y = 0;
	int		x = 0;

	while (y <= grid->y_max)
	{
		x = 0;
		if (y + 1 == grid->y_max)
			break ;
		while (x < grid->x_max && y <= grid->y_max)
		{
			if (x + 1 == grid->x_max)
				break ;
			printf("[%d][%d] = %d\n", y, x, grid->grid_data[y][x]);
			x++;
		}
		printf("\n\n");
		y++;
	}
}