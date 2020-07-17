/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#ifndef MY_H_
#define MY_H_

#include "my.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>

typedef	struct	my_runner
{
    int	action;
    struct	events	*w;
    struct	menu	*m;
    struct	sound	*t;
    struct	sound2	*s;
    struct	run	*x;
    struct	get_rect	*r;
}	my_runner_t;

typedef	struct	menu
{
    sfSprite	*options_sprite;
    sfTexture	*options_texture;
    sfSprite	*life_sprite;
    sfTexture	*life_texture;
    sfSprite	*sprite;
    sfTexture	*texture;
    sfSprite	*cursor_sprite;
    sfTexture	*cursor_texture;
    sfVector2f	position;
}	menu_t;

typedef	struct	events
{
    sfSprite	*sprite;
    sfSprite	*second_sprite;
    sfSprite	*third_sprite;
    sfTexture	*texture;
    sfTexture	*second_texture;
    sfTexture	*third_texture;
}	events_t;

typedef	struct	sound
{
    sfSound	*sound;
    sfSoundBuffer	*soundbuffer;
}	sound_t;

typedef	struct	sound2
{
    sfSound	*sound2;
    sfSoundBuffer	*soundbuffer2;
}	sound2_t;

typedef	struct	run
{
    sfSprite	*runner;
    sfTexture	*runner1;
    sfClock	*clock;
    float	seconds;
    sfTime	time;
    sfIntRect	rect;
}	run_t;

typedef	struct	run_enemy
{
    sfSprite	*enemy;
    sfTexture	*enemy1;
    sfClock	*clock_enemy;
    float	seconds_enemy;
    sfTime	time_enemy;
    sfIntRect	rect_enemy;
}	run_enemy_t;

typedef	struct	get_rect
{
    sfIntRect	rect1;
    sfIntRect	rect2;
    sfIntRect	rect3;
    sfClock	*clock3;
    sfClock	*clock1;
    sfClock	*clock2;
    sfTime	time;
    float	seconds;
}	get_rect_t;

void	check_loop(sfRenderWindow *window, my_runner_t *f);
void	fifth_condition(my_runner_t *f, sfVector2f position, sfEvent event);
void	fourth_condition(sfRenderWindow *window, sfEvent event);
void	third_condition(my_runner_t *f, sfEvent event);
void	second_condition(my_runner_t *f);
void	first_condition(my_runner_t *f, sfRenderWindow *w, sfEvent event);
void	mouse_position(menu_t *m, sfMouseMoveEvent mo, sfRenderWindow *w);
menu_t	*menu(void);
void	destroy_all(sfRenderWindow *window, my_runner_t *f);
void	check_this(my_runner_t *f);
events_t	*backgrounds(void);
void	animation(run_t *x);
void	second_animation(my_runner_t *f);
void	third_animation(my_runner_t *f);
void	first_animation(my_runner_t *f);
sound2_t	*second_sound(my_runner_t *f);
sound_t	*sound_type(void);
sfVector2f	position_sprite(int x, int y);
void	event_type(my_runner_t *f, sfRenderWindow *window, sfEvent event);
sfRenderWindow	*create_window(unsigned int x, unsigned int y);
void	my_runner(sfRenderWindow *window);
int	main(int ac, char **av);
void	my_putchar(char c);
get_rect_t	*rect(my_runner_t *f);
int	my_putstr(const char *str);
void	usage_h(void);
run_t	*run(void);
void	sound_mute(sfMouseButtonEvent mouse, my_runner_t *f);
void	sound_pause(sfMouseButtonEvent mouse, my_runner_t *f);
void	click(sfMouseButtonEvent mouse, my_runner_t *f, sfRenderWindow *w);
void	nothing(my_runner_t *f, sfMouseButtonEvent mouse);
void	draw_sprites(sfRenderWindow *window, my_runner_t *f);
my_runner_t	*all_game(void);

#endif /* MY_H_ */
