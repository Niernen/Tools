/*
** basic.h for PROJECT_NAME in /home/grange_c/MyDoc/script/tools/template/src/basic
** 
** Made by benjamin grange
** Login   <grange_c@epitech.net>
** 
** Started on  Sat Jan  2 02:13:06 2016 benjamin grange
** Last update Sat Jan  2 02:37:42 2016 benjamin grange
*/

#ifndef BASIC_H_
# define BASIC_H_

# include <unistd.h>

int		my_putchar(char, int);
int		my_strlen(char *);
int		my_putstr(char *, int);
int		my_put_tri_str(char *, char *, char *, int);
int		my_put_tri_nb_str(char *, int, char *, int);
int		my_gn(char *);
unsigned int	my_gnu(char *);
int		my_putnbr(int, int);
int		my_uputnbr(unsigned int, int);
int		my_strcmp(const char *, const char *);
char		*my_strcat(char *dest, char *src);

#endif /* !BASIC_H_ */
