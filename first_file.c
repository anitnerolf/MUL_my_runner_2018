/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include "my.h"

void	animation(run_t *x)
{
    x->time = sfClock_getElapsedTime(x->clock);
    x->seconds = x->time.microseconds / 1000000.0;
    if (x->seconds > 0.07) {
        if (x->rect.left == 1440) {
            x->rect.left = 0;
        } else
            x->rect.left = x->rect.left + 160;
        sfSprite_setTextureRect(x->runner, x->rect);
        sfClock_restart(x->clock);
    }
}

events_t	*backgrounds(void)
{
    events_t	*w = malloc(sizeof(events_t));

    w->texture = sfTexture_createFromFile("yess.png", NULL);
    w->second_texture = sfTexture_createFromFile("idyte.png", NULL);
    w->third_texture = sfTexture_createFromFile("bea.png", NULL);
    w->sprite = sfSprite_create();
    w->second_sprite = sfSprite_create();
    w->third_sprite = sfSprite_create();
    sfSprite_setPosition(w->second_sprite, position_sprite(0, 300));
    sfSprite_setPosition(w->third_sprite, position_sprite(0, 370));
    sfSprite_setTexture(w->sprite, w->texture, sfTrue);
    sfSprite_setTexture(w->second_sprite, w->second_texture, sfTrue);
    sfSprite_setTexture(w->third_sprite, w->third_texture, sfTrue);
    return (w);
}

void	click(sfMouseButtonEvent mouse, my_runner_t *f, sfRenderWindow *w)
{
    if (f->action == 0) {
        if (mouse.x >= 382 && mouse.x <= 814 && \
    mouse.y >= 66 && mouse.y <= 204)
            f->action = 1;
        if (mouse.x >= 382 && mouse.x <= 814 && \
    mouse.y >= 285 && mouse.y <= 423)
            sfRenderWindow_close(w);
        if (mouse.x >= 382 && mouse.x <= 814 && \
    mouse.y >= 510 && mouse.y <= 648)
            f->action = 2;
    }
}

void	sound_pause(sfMouseButtonEvent mouse, my_runner_t *f)
{
    if (f->action == 0) {
        if (mouse.x >= 540 && mouse.x <= 660 && \
    mouse.y >= 716 && mouse.y <= 827) {
            if (sfSound_getStatus(f->t->sound) == sfPaused) {
                sfSound_play(f->t->sound);
            } else
                sfSound_pause(f->t->sound);
        }
    }
}
