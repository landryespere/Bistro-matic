/*
** my_str_islower.c for my_str_islower in /home/thomas.couacault/CPool_Day06
**
** Made by Thomas Couacault
** Login   <thomas.couacault@epitech.net>
**
** Started on  Thu Oct  6 12:40:54 2016 Thomas Couacault
** Last update Tue Oct 11 15:20:10 2016 Thomas Couacault
*/

int	my_str_islower(char *str)
{
  int	i;
  int	is_lower;

  i = 0;
  if (str[0] != '\0')
    {
      while (str[i] != '\0')
	{
	  if (str[i] >= 'a' && str[i] <= 'z')
	    {
	      is_lower = 1;
	    }
	  else
	    {
	      is_lower = 0;
	    }
	  i++;
	}
      return (is_lower);
    }
  else
    return (1);
}
