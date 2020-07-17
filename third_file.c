/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include "my.h"

void	second_animation(my_runner_t *f)
{
    f->r->time = sfClock_getElapsedTime(f->r->clock2);
    f->r->seconds = f->r->time.microseconds / 1000000.0;
    if (f->r->seconds > 0.06) {
        if (f->r->rect2.left == 1674) {
            f->r->rect2.left = 0;
        } else
            f->r->rect2.left = f->r->rect2.left + 3;
        sfSprite_setTextureRect(f->w->second_sprite, f->r->rect2);
        sfTexture_setRepeated(f->w->second_texture, sfTrue);
        sfClock_restart(f->r->clock2);
    }
}

void	first_animation(my_runner_t *f)
{
    f->r->time = sfClock_getElapsedTime(f->r->clock1);
    f->r->seconds = f->r->time.microseconds / 1000000.0;
    if (f->r->seconds > 0.06) {
        if (f->r->rect1.left == 2379) {
            f->r->rect1.left = 0;
        } else
            f->r->rect1.left = f->r->rect1.left + 1;
        sfSprite_setTextureRect(f->w->sprite, f->r->rect1);
        sfTexture_setRepeated(f->w->texture, sfTrue);
        sfClock_restart(f->r->clock1);
    }
}

void	third_animation(my_runner_t *f)
{
    f->r->time = sfClock_getElapsedTime(f->r->clock3);
    f->r->seconds = f->r->time.microseconds / 1000000.0;
    if (f->r->seconds > 0.06) {
        if (f->r->rect3.left == 1674) {
            f->r->rect3.left = 0;
        } else
            f->r->rect3.left = f->r->rect3.left + 5;
        sfSprite_setTextureRect(f->w->third_sprite, f->r->rect3);
        sfTexture_setRepeated(f->w->third_texture, sfTrue);
        sfClock_restart(f->r->clock3);
    }
}
