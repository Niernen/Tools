/*
** basic_3.c for PROJECT_NAME in /home/grange_c/MyDoc/script/tools/template/src/basic
** 
** Made by benjamin grange
** Login   <grange_c@epitech.net>
** 
** Started on  Sat Jan  2 02:08:05 2016 benjamin grange
** Last update Sat Jan  2 02:08:22 2016 benjamin grange
*/

#include "basic.h"

int	my_strcmp(const char *a, const char *b)
{
  while (1)
    {
      if (!*a && !*b)
        return (0);
      if (*a != *b)
	return (1);
      a = a + 1;
      b = b + 1;
    }
  return (0);
}

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = my_strlen(dest);
  j = 0;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i = i + 1;
      j = j + 1;
    }
  return (dest);
}
