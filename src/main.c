/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akjoerse <akjoerse@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 18:18:41 by daflynn           #+#    #+#             */
/*   Updated: 2026/02/24 20:14:27 by akjoerse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//for next meeting::
//	make struct `struct	s_guy`
//		s_guy contains current local position of guy on map
///	implied:	`struct	s_map`


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
