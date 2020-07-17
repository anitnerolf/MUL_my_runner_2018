/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include "my.h"

void	sixth_condition(my_runner_t *f, sfEvent event)
{
    if (f->action == 1) {
        if (event.type == sfEvtKeyPressed && \
    event.key.code == sfKeyP)
            f->action = 0;
    }
}

void	event_type(my_runner_t *f, sfRenderWindow *window, sfEvent event)
{
    sfVector2f	position;
    sfMouseMoveEvent	move_mouse;

    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    while (sfRenderWindow_pollEvent(window, &event)) {
        move_mouse = event.mouseMove;
        position.x = move_mouse.x - 15;
        position.y = move_mouse.y - 15;
        fourth_condition(window, event);
        third_condition(f, event);
        second_condition(f);
        first_condition(f, window, event);
        fifth_condition(f, position, event);
        sixth_condition(f, event);
    }
}

void	draw_sprites(sfRenderWindow *window, my_runner_t *f)
{
    sfRenderWindow_drawSprite(window, f->w->sprite, NULL);
    sfRenderWindow_drawSprite(window, f->w->second_sprite, NULL);
    sfRenderWindow_drawSprite(window, f->w->third_sprite, NULL);
    sfRenderWindow_drawSprite(window, f->x->runner, NULL);
    sfRenderWindow_drawSprite(window, f->m->life_sprite, NULL);
    sfRenderWindow_drawSprite(window, f->m->cursor_sprite, NULL);
}

void	my_runner(sfRenderWindow *window)
{
    sfEvent	event;
    my_runner_t	*f = malloc(sizeof(my_runner_t));

    f = all_game();
    while (sfRenderWindow_isOpen(window)) {
        event_type(f, window, event);
        check_loop(window, f);
        sfRenderWindow_display(window);
    }
    destroy_all(window, f);
}

void	check_loop(sfRenderWindow *w, my_runner_t *f)
{
    if (f->action == 0) {
        sfRenderWindow_drawSprite(w, f->m->sprite, NULL);
        sfRenderWindow_drawSprite(w, f->m->cursor_sprite, NULL);
    } else if (f->action == 1) {
        sfRenderWindow_clear(w, sfBlack);
        draw_sprites(w, f);
        animation(f->x);
        check_this(f);
    } else {
        sfRenderWindow_clear(w, sfBlack);
        sfRenderWindow_drawSprite(w, f->m->options_sprite, NULL);
        sfRenderWindow_drawSprite(w, f->m->cursor_sprite, NULL);
    }
}
