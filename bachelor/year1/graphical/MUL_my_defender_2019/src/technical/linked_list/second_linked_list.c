/*
** EPITECH PROJECT, 2019
** list.c
** File description:
** list.c
*/

#include <stdlib.h>
#include "defender.h"
#include "prototypes.h"
#include "my.h"
#include <unistd.h>

monkey_t *create_sorcer_node(window_t *global)
{
    monkey_t *node;

    node = malloc(sizeof(monkey_t));
    if (node == NULL)
        return NULL;
    node->texture = sfTexture_createFromFile(
    "resources/pictures/monkeys/SORCER.png", NULL);
    node->sprite = sfSprite_create();
    node->rect.top = 0;
    node->rect.left = 0;
    node->rect.width = 100;
    node->rect.height = 80;
    node->position.x = sfMouse_getPositionRenderWindow(global->window).x - 20;
    node->position.y = sfMouse_getPositionRenderWindow(global->window).y - 70;
    sfSprite_setTexture(node->sprite, node->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    sfSprite_setPosition(node->sprite, node->position);
    node->next = NULL;
    node->prev = NULL;
    return node;
}

monkey_t *create_sniper_node(window_t *global)
{
    monkey_t *node;

    node = malloc(sizeof(monkey_t));
    if (node == NULL)
        return NULL;
    node->texture = sfTexture_createFromFile(
    "resources/pictures/monkeys/SNIPER.png", NULL);
    node->sprite = sfSprite_create();
    node->rect.top = 0;
    node->rect.left = 0;
    node->rect.width = 100;
    node->rect.height = 300;
    node->position.x = sfMouse_getPositionRenderWindow(global->window).x - 60;
    node->position.y = sfMouse_getPositionRenderWindow(global->window).y - 140;
    sfSprite_setTexture(node->sprite, node->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    sfSprite_setPosition(node->sprite, node->position);
    node->next = NULL;
    node->prev = NULL;
    return node;
}

monkey_t *create_ice_node(window_t *global)
{
    monkey_t *node;

    node = malloc(sizeof(monkey_t));
    if (node == NULL)
        return NULL;
    node->texture = sfTexture_createFromFile(
    "resources/pictures/monkeys/ICE.png", NULL);
    node->sprite = sfSprite_create();
    node->rect.top = 120;
    node->rect.left = 0;
    node->rect.width = 85;
    node->rect.height = 350;
    node->position.x = sfMouse_getPositionRenderWindow(global->window).x - 80;
    node->position.y = sfMouse_getPositionRenderWindow(global->window).y - 100;
    sfSprite_setTexture(node->sprite, node->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    sfSprite_setPosition(node->sprite, node->position);
    node->next = NULL;
    node->prev = NULL;
    return node;
}

monkey_t *create_boat_node(window_t *global)
{
    monkey_t *node;

    node = malloc(sizeof(monkey_t));
    if (node == NULL)
        return NULL;
    node->texture = sfTexture_createFromFile(
    "resources/pictures/monkeys/BOAT1.png", NULL);
    node->sprite = sfSprite_create();
    node->rect.top = 0;
    node->rect.left = 0;
    node->rect.width = 150;
    node->rect.height = 350;
    node->position.x = sfMouse_getPositionRenderWindow(global->window).x - 60;
    node->position.y = sfMouse_getPositionRenderWindow(global->window).y - 140;
    sfSprite_setTexture(node->sprite, node->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    sfSprite_setPosition(node->sprite, node->position);
    node->next = NULL;
    node->prev = NULL;
    return node;
}
