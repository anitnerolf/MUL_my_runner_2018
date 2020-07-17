/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include "my.h"

sound2_t	*second_sound(my_runner_t *f)
{
    sound2_t	*s = malloc(sizeof(events_t));

    s->soundbuffer2 = sfSoundBuffer_createFromFile("run.wav");
    s->sound2 = sfSound_create();
    sfSound_setBuffer(s->sound2, s->soundbuffer2);
    sfSound_play(s->sound2);
    sfSound_setLoop(s->sound2, sfTrue);
    sfSound_setVolume(s->sound2, 8);
    return (s);
}

sound_t	*sound_type(void)
{
    sound_t	*t = malloc(sizeof(events_t));

    t->soundbuffer = sfSoundBuffer_createFromFile("x.wav");
    t->sound = sfSound_create();
    sfSound_setBuffer(t->sound, t->soundbuffer);
    sfSound_play(t->sound);
    sfSound_setLoop(t->sound, sfTrue);
    sfSound_setVolume(t->sound, 10);
    return (t);
}

void	check_this(my_runner_t *f)
{
    first_animation(f);
    second_animation(f);
    third_animation(f);
}

void	destroy_all(sfRenderWindow *window, my_runner_t *f)
{
    sfTexture_destroy(f->w->texture);
    sfSprite_destroy(f->w->sprite);
    sfTexture_destroy(f->w->second_texture);
    sfSprite_destroy(f->w->second_sprite);
    sfTexture_destroy(f->w->third_texture);
    sfSprite_destroy(f->w->third_sprite);
    sfTexture_destroy(f->m->texture);
    sfSprite_destroy(f->m->sprite);
    sfTexture_destroy(f->m->options_texture);
    sfSprite_destroy(f->m->options_sprite);
    sfTexture_destroy(f->m->life_texture);
    sfSprite_destroy(f->m->life_sprite);
    sfTexture_destroy(f->m->cursor_texture);
    sfSprite_destroy(f->m->cursor_sprite);
    sfSound_destroy(f->t->sound);
    sfSoundBuffer_destroy(f->t->soundbuffer);
    sfSound_destroy(f->s->sound2);
    sfSoundBuffer_destroy(f->s->soundbuffer2);
    sfRenderWindow_destroy(window);
}
