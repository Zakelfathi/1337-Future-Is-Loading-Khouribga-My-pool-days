/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <zel-fath@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 04:05:11 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/18 23:03:31 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && (i < n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char str1[] = "13443";
	char str2[] = "13446";
	int nbr = 5;
	printf("%d \n", ft_strncmp(str1, str2, nbr));
}*/
