/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   raycasting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daflynn <daflynn@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:32:52 by daflynn           #+#    #+#             */
/*   Updated: 2026/02/24 18:32:54 by daflynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mlx.h"

void draw_background(void *mlx, void *win)
{
    int x, y;

    for (y = 0; y < 100; y++)
    {
        for (x = 0; x < 200; x++)
        {
            mlx_pixel_put(mlx, win, x, y, 0x00FF00); // green background
        }
    }
}
