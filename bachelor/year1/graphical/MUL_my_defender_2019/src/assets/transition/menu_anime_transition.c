/*
** EPITECH PROJECT, 2020
** anime_transi1
** File description:
** defender
*/

#include "prototypes.h"
#include "defender.h"
#include <stdlib.h>

void anime_transition1(menu_t *menu)
{
    menu->menu_transition->rect.left -= 1200;
    if (menu->menu_transition->rect.left < 0) {
        menu->menu_transition->rect.left = 2400;
        menu->menu_transition->rect.top -= 675;
    }
    if (menu->menu_transition->rect.top <= 0 &&
        menu->menu_transition->rect.left < 0) {
        menu->menu_transition->rect.width = 0;
        menu->menu_transition->rect.height = 0;
    }
}

void anime_second_part_transition2(menu_t *menu)
{
    if (menu->transition2_value == 0)
        menu->menu_transition2->rect.left -= 1200;
    if ((menu->menu_transition2->rect.left < 0) &&
    (menu->transition2_value != 1)) {
        menu->menu_transition2->rect.left = 4800;
        menu->menu_transition2->rect.top -= 675;
    }
    if ((menu->menu_transition2->rect.top == 0 &&
    menu->menu_transition2->rect.left == 0)) {
        menu->end_transi2 = 1;
        menu->start_event_game = 1;
        menu->menu_transition2->rect.top = 0;
        menu->menu_transition2->rect.left = 0;
        menu->transition2_value = 1;
    }
}

void anime_transition2(menu_t *menu)
{
    anime_second_part_transition2(menu);
    if (menu->transition2_value == 1)
        menu->menu_transition2->rect.left += 1200;
    if ((menu->menu_transition2->rect.left >= 4800)
    && (menu->transition2_value == 1)) {
        menu->menu_transition2->rect.left = 0;
        menu->menu_transition2->rect.top += 675;
    }
    if ((menu->menu_transition2->rect.left >= 1) &&
    (menu->menu_transition2->rect.top >= 1) &&
        (menu->transition2_value == 1)) {
        menu->background_value = 1;
    }
    if ((menu->menu_transition2->rect.top >= 3375)
        && (menu->end_transi2 == 1))
        menu->start_selection = 1;
}

void anime_menu_title_effect(menu_t *menu)
{
    menu->menu_title_effect->rect.left += 450;
    if (menu->menu_title_effect->rect.left >= 3240) {
        menu->menu_title_effect->rect.left = 0;
        menu->menu_title_effect->rect.top += 450;
    }
    if (menu->menu_title_effect->rect.top >= 900) {
        menu->menu_title_effect->rect.left = 0;
        menu->menu_title_effect->rect.top = 0;
    }
    return;
}

void anime_smoke(menu_t *menu)
{
    menu->menu_smoke->rect.left += 1200;
    if (menu->menu_smoke->rect.left >= 8400) {
        menu->menu_smoke->rect.left = 0;
        menu->menu_smoke->rect.top += 675;
    }
    if (menu->menu_smoke->rect.top >= 5400) {
        menu->menu_smoke->rect.left = 0;
        menu->menu_smoke->rect.top = 0;
    }
    return;
}
