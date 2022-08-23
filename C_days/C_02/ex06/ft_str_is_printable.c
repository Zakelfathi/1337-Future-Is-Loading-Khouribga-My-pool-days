/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <zel-fath@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:39:54 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/19 03:43:22 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] <= 126) && (str[i] >= 32))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	char T[]="Afak";
	if (ft_str_is_printable(T) == 1)
		printf("prinbtable");
	else
		printf("non prinbtable");

}
*/
