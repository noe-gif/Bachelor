/*
** EPITECH PROJECT, 2020
** main
** File description:
** defender
*/

#include <stdlib.h>
#include "defender.h"
#include "prototypes.h"
#include "my.h"

void usage(void)
{
    my_putstr("Usage: ./my_defender\n\n");
    my_putstr("\t MENU: Start the game by clicking the start"
    " button or Up key.\n");
    my_putstr("\t You can check the parameter if you want to "
    "mute the music or leave by pressing the button "
    "in the parameter button.\n");
    my_putstr("\n\t MAP SELECTION: You can choose your map by"
    "switching with the left or right arrows by clicking on them "
    "or\n\t pressing the left and right keyboard arrows.\n");
    my_putstr("\n\t GAME: You'll discorver simply discorver the few features"
    "avaiable on game. You can't buy towers without enough money.\n");
}

void init_other_values(window_t *global)
{
    global->game_management->monkey_simple_chosen = 0;
    global->game_management->is_turret_placed = 0;
    global->game_management->countdown = 50;
    global->game_management->timer = 0;
    global->game_management->money = 1000;
    global->list = NULL;
}

void init_value_struct(menu_t *menu, window_t *global)
{
    menu->background_value = 0;
    menu->start_event = 0;
    menu->param_event = 0;
    menu->home_event = 0;
    menu->param_event_button = 0;
    menu->transition2_value = 0;
    menu->mute_sound = 0;
    menu->start_selection = 0;
    menu->effect_value = 0;
    menu->end_transi2 = 0;
    global->map_selection_management->hardmap_chosen_event = 0;
    global->map_selection_management->hardmap_icon_event = 0;
    global->map_selection_management->easymap_icon_event = 0;
    global->map_selection_management->start_play_hardmap = 0;
    global->map_selection_management->start_play_easymap = 0;
    init_other_values(global);
}

int main(int ac, char **av)
{
    menu_t *menu = malloc(sizeof(menu_t));
    window_t *global = malloc(sizeof(window_t));

    if ((ac != 1) && (av[1][0] == '-') && (av[1][1] == 'h')) {
        usage();
        return (0);
    }
    if (ac != 1) {
        my_putstr("Usage: ./my_defender (-h for help)\n");
        return (84);
    }
    global->map_selection_management = malloc(sizeof(map_selection_t));
    global->game_management = malloc(sizeof(game_t));
    global->text_management = malloc(sizeof(text_t));
    init_value_struct(menu, global);
    menu_loop(global, menu);
    return (0);
}
