/*
** basic_2.c for PROJECT_NAME in /home/grange_c/MyDoc/script/tools/template/src/basic
** 
** Made by benjamin grange
** Login   <grange_c@epitech.net>
** 
** Started on  Sat Jan  2 02:05:26 2016 benjamin grange
** Last update Sat Jan  2 02:18:35 2016 benjamin grange
*/

#include "basic.h"

int	my_gn(char *str)
{
  int	i;
  int	neg;

  i = 0;
  neg = 1;
  while (*str)
    {
      if (*str == '-')
	neg = neg * (-1);
      else if (*str >= '0' && *str <= '9')
	i = i * 10 + *str - 48;
      else
	return (i * neg);
      str = str + 1;
    }
  return (i * neg);
}

unsigned int	my_gnu(char *str)
{
  unsigned int	i;

  i = 0;
  while (*str >= '0' && *str <= '9')
    {
      i = i * 10 + *str - 48;
      str = str + 1;
    }
  return (i);
}

int	my_putnbr(int nb, int out)
{
  int	old;

  old = 0;
  if (nb < 0)
    {
      if (nb == (-2147483648))
	{
	  my_putstr("-2147483648", out);
	  return (1);
	}
      nb = nb * (-1);
      my_putchar('-', out);
    }
  if (nb >= 10)
    old += my_putnbr(nb / 10, out);
  old += my_putchar(48 + (nb % 10), out);
  return (old);
}

int	my_uputnbr(unsigned int nb, int out)
{
  int	old;

  old = 0;
  if (nb >= 10)
    old += my_uputnbr(nb / 10, out);
  old += my_putchar(48 + (nb % 10), out);
  return (old);
}
