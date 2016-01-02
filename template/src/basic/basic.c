/*
** basic.c for PROJECT_NAME in /home/grange_c/MyDoc/script/tools/template/src/basic
** 
** Made by benjamin grange
** Login   <grange_c@epitech.net>
** 
** Started on  Sat Jan  2 02:02:46 2016 benjamin grange
** Last update Sat Jan  2 02:17:24 2016 benjamin grange
*/

#include "basic.h"

int	my_putchar(char c, int out)
{
  write(out, &c, 1);
  return (1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (*(str + i))
    i++;
  return (i);
}

int	my_putstr(char *str, int out)
{
  int	size;

  size = my_strlen(str);
  write(out, str, size);
  return (size);
}

int	my_put_tri_str(char *str1, char *str2, char *str3, int out)
{
  return (my_putstr(str1, out) + my_putstr(str2, out) + my_putstr(str3, out));
}

int	my_put_tri_nb_str(char *a, int nb, char *b, int out)
{
  return (my_putstr(a, out) + my_putnbr(nb, out) + my_putstr(b, out));
}
