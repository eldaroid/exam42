/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_words.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 15:28:45 by fgracefo          #+#    #+#             */
/*   Updated: 2020/01/23 15:28:47 by fgracefo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_words(char *str)
{
	int		flag;
	int		i;
	int		counter;
	
	flag = 0;
	i = 0;
	counter = 1;
	while (str[i] && (str[i] == ' ' || str[i] == '\t'))
		i++;
	while (str[i])
	{
		if (str[i] == ' ')
			flag = 1;
		if (str[i] != ' ' && flag == 1)
		{
			counter++;
			flag =0;
		}
		i++;
	}
	return (counter);
}