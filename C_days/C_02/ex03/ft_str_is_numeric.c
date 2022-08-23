/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <zel-fath@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 17:32:32 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/19 03:33:21 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= '9') && (str[i] >= '0'))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char t[]="1455";

	printf("%d", ft_str_is_numeric(t));
}
*/
