/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnona <pnona@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:22:32 by lloko             #+#    #+#             */
/*   Updated: 2022/05/21 19:08:12 by pnona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# define SPRITE 64

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <mlx.h>
# include <stdio.h> /* delete */
# include "../ft_printf/ft_printf.h"
# include "../libft/libft.h"
# include "../gnl/get_next_line.h"

typedef struct s_sprite
{
	void	*wall;
	void	*background;
	void	*exit;
	void	*collect;
	void	*cur;
	void	*vrag_0;
	void	*vrag_1;
	void	*vrag_2;
	void	*vrag_3;
	int		anim;
}				t_sprite;

typedef struct s_map
{
	int		x;
	int		y;
	char	**arr;
}				t_map;

typedef struct s_vrag
{
	int				vrag_x;
	int				vrag_y;
	int				dir;
	struct s_vrag	*next;
}				t_vrag;

typedef struct s_player
{
	int		player_x;
	int		player_y;
	void	*move_pl;
}				t_player;

typedef struct s_game
{
	int			p_count;
	int			e_count;
	int			c_count;
	int			v_count;
	int			coll;
	int			step;
	void		*mlx;
	void		*win;
	int			move_vr;
	t_map		map;
	t_player	player;
	t_vrag		vrag;
	t_sprite	sprite;
}				t_game;

int		map_check(char **map, char *file, t_game *carta);
void	read_map(char *file, t_game *carta);
void	init_game(char *file, t_game *carta);
int		game_over(char *str);
int		move_player(t_game *carta, int y, int x);
void	count_rows(char *file, t_game *carta);
void	push_image_from_file(t_game *carta);
int		paint(t_game *carta);
void	move(t_game *carta);

int		count_vrag(char **map, t_game *carta);
void	push_image_vrag(t_game *carta);
void	touch_vrag(t_game *carta, int y, int x);
void	anim_vrag(t_game *carta);
void	move_enemy(t_game *carta);

#endif
