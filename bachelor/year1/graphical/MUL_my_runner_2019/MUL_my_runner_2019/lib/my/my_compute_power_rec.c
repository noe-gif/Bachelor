/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** power
*/

int my_compute_power_rec(int nb, int size)
{
    int result;

    if (nb == 0)
        return (1);
    if (nb < 0){
        return (0);
    }
    if (nb <= 12){

        if (nb != 0){
            result = nb * my_compute_power_rec(nb - 1, size);
        return (result);
        }
    }
    return (0);

}
