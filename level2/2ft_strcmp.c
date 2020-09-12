/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2ft_strcmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldaroid <eldaroid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/11 23:12:44 by eldaroid          #+#    #+#             */
/*   Updated: 2020/09/11 23:20:50 by eldaroid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>  // Для printf
// #include < string.h > // Для strcmp
int main (void)
{    
   // Сравниваемые строки
   char str1[1024]="12345";
   char str2[1024]="12345";
  
   // Сравниваем две строки
   if (ft_strcmp (str1, str2)==0)
      puts ("“Строки идентичны”");
   else
      puts ("“Строки отличаются”");

   return 0;
}