/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include	"my.h"

menu_t	*menu(void)
{
    menu_t	*m = malloc(sizeof(menu_t));

    m->texture = sfTexture_createFromFile("eee.png", NULL);
    m->sprite = sfSprite_create();
    sfSprite_setTexture(m->sprite, m->texture, sfTrue);
    m->options_texture = sfTexture_createFromFile("options.png", NULL);
    m->options_sprite = sfSprite_create();
    sfSprite_setTexture(m->options_sprite, m->options_texture, sfTrue);
    m->life_texture = sfTexture_createFromFile("lifes.png", NULL);
    m->life_sprite = sfSprite_create();
    sfSprite_setTexture(m->life_sprite, m->life_texture, sfTrue);
    m->cursor_texture = sfTexture_createFromFile("dragon.png", NULL);
    m->cursor_sprite = sfSprite_create();
    sfSprite_setTexture(m->cursor_sprite, m->cursor_texture, sfTrue);
    return (m);
}

my_runner_t	*all_game(void)
{
    my_runner_t	*f = malloc(sizeof(my_runner_t));

    f->action =  0;
    f->m = menu();
    f->w = backgrounds();
    f->r = rect(f);
    f->x = run();
    f->t = sound_type();
    f->s = second_sound(f);
    return (f);
}
