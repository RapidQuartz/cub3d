/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daflynn <daflynn@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:18:41 by daflynn           #+#    #+#             */
/*   Updated: 2026/02/24 18:33:22 by daflynn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "mlx.h"
#include <stdlib.h>

void draw_background(void *mlx, void *win); // forward declaration

int main(void)
{
    void *mlx;
    void *win;

    mlx = mlx_init();
    if (!mlx)
        return (1);
    win = mlx_new_window(mlx, 200, 100, "Hello Cub3D");
    if (!win)
        return (1);

    draw_background(mlx, win); // draw a solid background

    mlx_loop(mlx); // keeps window open
    return (0);
}
