/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:30:01 by pnona             #+#    #+#             */
/*   Updated: 2022/05/22 18:30:03 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	init_game(char *file, t_game *carta)
{
	carta->e_count = 0;
	carta->c_count = 0;
	carta->p_count = 0;
	carta->v_count = 0;
	carta->coll = 0;
	carta->step = 0;
	carta->sprite.anim = 8;
	carta->move_vr = 0;
	carta->vrag = NULL;
	carta->mlx = mlx_init();
	read_map(file, carta);
}

int	main(int argc, char **argv)
{
	t_game	carta;

	if (argc == 2)
	{
		init_game(argv[1], &carta);
		push_image_from_file(&carta);
		push_image_vrag(&carta);
		carta.win = mlx_new_window(carta.mlx, (carta.map.x - 1) * SPRITE,
				carta.map.y * SPRITE, "so_long");
		paint(&carta);
		move(&carta);
		mlx_loop_hook(carta.mlx, paint, &carta);
		mlx_loop(carta.mlx);
		free(carta.map.arr);
		game_over(NULL);
	}
	else
		game_over("Don't work!\n");
}
