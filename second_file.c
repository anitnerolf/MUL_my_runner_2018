/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include "my.h"

sfRenderWindow	*create_window(unsigned int x, unsigned int y)
{
    sfRenderWindow	*window;
    sfVideoMode	video_mode;

    video_mode.width = x;
    video_mode.height = y;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My Runner", \
    sfClose, NULL);
    return (window);
}

void	usage_h(void)
{
    my_putstr("Finite runner created with CSFML.\n\n");
    my_putstr("USAGE\n  ./my_runner map.txt\n\n\n\n");
    my_putstr("OPTIONS\n");
    my_putstr("  -i\t\tlaunch the game in infinity mode.\n");
    my_putstr("  -h\t\tprint the usage and quit.\n\n");
    my_putstr("USER INTERACTIONS\n");
    my_putstr("  SPACE_KEY\tjump.\n");
}

sfVector2f	position_sprite(int x, int y)
{
    sfVector2f	pos;

    pos.x = x;
    pos.y = y;
    return (pos);
}

get_rect_t	*rect(my_runner_t *f)
{
    f->r = malloc(sizeof(get_rect_t));
    f->r->clock1 = sfClock_create();
    f->r->clock2 = sfClock_create();
    f->r->clock3 = sfClock_create();
    f->r->rect1.top = 0;
    f->r->rect1.left = 0;
    f->r->rect1.height = 900;
    f->r->rect1.width = 1990;
    f->r->rect2.top = 0;
    f->r->rect2.left = 0;
    f->r->rect2.height = 900;
    f->r->rect2.width = 1990;
    f->r->rect3.top = 0;
    f->r->rect3.left = 0;
    f->r->rect3.height = 900;
    f->r->rect3.width = 1990;
    sfSprite_setTextureRect(f->w->sprite, f->r->rect1);
    sfSprite_setTextureRect(f->w->second_sprite, f->r->rect2);
    sfSprite_setTextureRect(f->w->third_sprite, f->r->rect3);
    return (f->r);
}

run_t	*run(void)
{
    run_t	*x = malloc(sizeof(run_t));

    x->rect.top = 0;
    x->rect.left = 0;
    x->rect.height = 189;
    x->rect.width = 160;
    x->clock = sfClock_create();
    x->runner1 = sfTexture_createFromFile("ninja.png", NULL);
    x->runner = sfSprite_create();
    sfSprite_setTexture(x->runner, x->runner1, sfTrue);
    sfSprite_setPosition(x->runner, position_sprite(5, 705));
    sfSprite_setTextureRect(x->runner, x->rect);
    return (x);
}
