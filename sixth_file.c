/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include "my.h"

void	fifth_condition(my_runner_t *f, sfVector2f p, sfEvent event)
{
    sfVector2f	scale;

    scale.x = 0.3;
    scale.y = 0.3;
    if (event.type == sfEvtMouseMoved) {
        sfSprite_setPosition(f->m->cursor_sprite, p);
        sfSprite_setScale(f->m->cursor_sprite, scale);
    }
}

void	fourth_condition(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed || \
    (event.type == sfEvtKeyPressed && \
    event.key.code == sfKeyEscape)) {
        sfRenderWindow_close(window);
    }
}

void	third_condition(my_runner_t *f, sfEvent event)
{
    if (event.type == sfEvtKeyPressed) {
        if (f->action == 2 && event.key.code == sfKeyL) {
            f->action = 0;
        }
    }
}

void	first_condition(my_runner_t *f, sfRenderWindow *w, sfEvent event)
{
    sfMouseButtonEvent	mouse;

    mouse = event.mouseButton;
    if (event.type == sfEvtMouseButtonPressed) {
        click(mouse, f, w);
        sound_pause(mouse, f);
    }
}

void	second_condition(my_runner_t *f)
{
    int	i = 0;

    sfKeyboard_isKeyPressed(sfKeySpace) ? i = 1 : i == 0;
    if (i == 1)
        sfSprite_setPosition(f->x->runner, position_sprite(5, 550));
    else
        sfSprite_setPosition(f->x->runner, position_sprite(5, 705));
}
