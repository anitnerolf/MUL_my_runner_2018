/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** my_runner
*/

#include "my.h"

int	main(int ac, char **av)
{
    sfRenderWindow	*window;

    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'i') {
            window = create_window(1190, 900);
            sfRenderWindow_setFramerateLimit(window, 60);
            my_runner(window);
            return (0);
        } else if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2]) {
            usage_h();
            return (0);
        }
    } else
        return (84);
}
