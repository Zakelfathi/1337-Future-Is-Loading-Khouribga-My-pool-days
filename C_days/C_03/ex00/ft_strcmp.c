/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <zel-fath@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 04:04:24 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/18 23:29:36 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char str1[] = "123";
	char str2[] = "123";
	if (ft_strcmp(str1, str2) == 0)
	{
	printf ("bien egaux !");
	}
	else
	{
		printf ("non egaux !");
	}
}
*/
