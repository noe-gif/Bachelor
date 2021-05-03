/*
** EPITECH PROJECT, 2020
** match
** File description:
** cpe
*/

#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdlib.h>

#define STICK 124
#define STAR 42
#define SPACE 32

typedef struct match_s
{
    size_t bufsize;
    size_t bufsize2;
    size_t characters;
    size_t characters2;
    char *buf;
    char *buf2;
    int lines;
    int remaining_lines;
    char **tab;
    int max_sticks;
    int y;
    int i;
    int last_stick;
    int rand_line;
    int rand_matches;
    int remaining_stick;
}match_t;

/*
** map_functions
*/

int count_remaining_line(match_t *match);
int error_matches_line(match_t *match, char *input);
int count_lines_remaining(match_t *match);
int count__stick(match_t *match, int line);
int count_last_stick(match_t *match);

void loop_content(void);
void create_tab(match_t *match);
void fill_bords(match_t *match, int j,
    int i, int cols);
void fill_sticks(match_t *match, int count,
    int j, int i);
void fill_tab(match_t *match);
void remove_matches(int lines, int matches,
    match_t *match);
int game_loop(match_t *match, char **av);
void print_updated_board_game(char *input,
    char *input2, match_t *match);

/*
** cerror_functions
*/

int error_main(int ac, char **av);
int error_stick(char *input, match_t *match);
int error_match(char *input2, match_t *match, char *buf);
void helper(void);

/*
** ia_functions
*/

void ia_turn(match_t *match, char **av);
void ia_message_turn(match_t *match, char **av);
void first_ia_loop(match_t *match, int cols);
void set_rand_value(match_t *match, int matches);

/*
** print_functions
*/

void loop_content(void);
void print_last_player_line(void);
void print_last_line(void);
void print_ia_last_line(void);
void print_ia_msg(match_t *match);

/*
** game_functions
*/

void content_loop_condition(match_t *match);
int first_getline(match_t *match, char *buf2, size_t bufsize2);
void second_initializing(match_t *match);
void initializing(match_t *match);
void error_condition(match_t *match, char *buf2, char *buf);
int second_getline(char *buf, size_t bufsize, match_t *match);
int function_calling(char *buf2, size_t bufsize2, match_t *match,
    char *buf);

/*
** end_game_functions
*/

void ia__turn(match_t *match, char **av);
int message_lost_player(int remaining_stick);
int message_lost_ia(int remaining_stick);
void hard_ia_conditions(int remain, match_t *match, int new_matches,
    int new_line);
void match_game_input(match_t *match, char *buf, char *buf2,
    int remaining_stick);
void call_ia_turn(match_t *match, char **av);
void ia_msg(int line, int matches);

#endif /* MY_H_ */
