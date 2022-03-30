/*
** EPITECH PROJECT, 2021
** charput.c
** File description:
** Char view
*/

void my_putchar(char c)
{
    write(1, &c,  1);
}

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

void my_putstrerr(char const *str)
{
    write(2, str, my_strlen(str));
}

int my_strlen(char const *str)
{
    int count = 0;
    for (count = 0; str[count] != '\0'; count++);
    return (count);
}
