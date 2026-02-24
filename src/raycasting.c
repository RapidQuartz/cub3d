/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akjoerse <akjoerse@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:32:52 by daflynn           #+#    #+#             */
/*   Updated: 2026/02/24 21:04:02 by akjoerse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"
#include "./includes/cube3d.h"
#include "./includes/guy.h"

void draw_background(void *mlx, void *win)
{
	t_guy	;
	int	hex;

	
	hex = guy.guy_facing_dir;
    
    int x, y;
	if (guy_facing_dir() == "N")
		mlx_pixel_put(mlx, win, x, y, 0xFF0000); // red background
	if (guy_facing_dir() == "E")
		mlx_pixel_put(mlx, win, x, y, 0x00FF00); // green background
	if (guy_facing_dir() == "S")
		mlx_pixel_put(mlx, win, x, y, 0xFFFF00); // blue background
	if (guy_facing_dir() == "W")
		mlx_pixel_put(mlx, win, x, y, 0x0000FF); // yellow background
    for (y = 0; y < 100; y++)
    {
        for (x = 0; x < 200; x++)
        {
            mlx_pixel_put(mlx, win, x, y, 0x00FF00); // green background
        }
    }
}
