/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <zel-fath@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:37:49 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/19 03:34:23 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 'Z') && (str[i] >= 'A'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	char T[]="Afak";
	if (ft_str_is_uppercase(T) == 1)
		write(1,"U", 1);
	else
		write(1, "N", 1);
}
*/
