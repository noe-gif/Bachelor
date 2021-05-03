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

void delete_list_baloons (baloon_t **head)
{
    baloon_t *tmp;

    tmp = *head;
    if (*head == NULL)
        return;
    else {
        while (tmp->next != NULL) {
            tmp = tmp->next;
            free(tmp->prev);
        }
        *head = NULL;
        free(tmp);
    }
}

void delete_node_baloons (baloon_t **list, baloon_t *node)
{
    baloon_t *tmp = node;
    baloon_t *head;
    baloon_t *tail;

    if (tmp == NULL)
        return;
    else {
        head = node->prev;
        tail = node->next;
        if (head == NULL)
            *list = tail;
        sfSprite_destroy(tmp->sprite);
        sfTexture_destroy(tmp->texture);
        free(tmp);
        if (head != NULL)
            head->next = tail;
        if (tail != NULL)
            tail->prev = head;
    }
}

void display_baloons(window_t *global, baloon_t *list)
{
    baloon_t *tmp;

    tmp = list;
    while (tmp != NULL) {
        sfRenderWindow_drawSprite(global->window, tmp->sprite, NULL);
        tmp = tmp->next;
    }
}

baloon_t *create_baloons_node(window_t *global)
{
    baloon_t *node;

    node = malloc(sizeof(baloon_t));
    if (node == NULL)
        return NULL;
    node->texture = sfTexture_createFromFile(
    "resources/pictures/monkeys/MONKEY2.png", NULL);
    node->sprite = sfSprite_create();
    node->rect.top = 0;
    node->rect.left = 0;
    node->rect.width = 50;
    node->rect.height = 300;
    node->position.x = sfMouse_getPositionRenderWindow(global->window).x - 20;
    node->position.y = sfMouse_getPositionRenderWindow(global->window).y - 70;
    sfSprite_setTexture(node->sprite, node->texture, sfTrue);
    sfSprite_setTextureRect(node->sprite, node->rect);
    sfSprite_setPosition(node->sprite, node->position);
    node->next = NULL;
    node->prev = NULL;
    return node;
}

void add_baloons_in_list (baloon_t **head, baloon_t *new_elem)
{
    baloon_t *tmp;

    tmp = *head;
    if (*head == NULL)
        *head = new_elem;
    else {
        while (tmp->next != NULL)
            tmp = tmp->next;
        tmp->next = new_elem;
        new_elem->prev = tmp;
    }
}
