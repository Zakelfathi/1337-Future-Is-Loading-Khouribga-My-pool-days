/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <zel-fath@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 04:05:59 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/18 23:00:54 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{

	char	str1[100] = "Hello, ";
	char	str2[] = "Pinghhjf";
	char	str3[100] = "Hello, ";
	char	str4[] = "Pinghhjf";

  ft_strcat(str1, str2);
  printf(" %s\n\n", str1);
  strcat(str3, str4);
  printf(" %s \n", str3);
}
*/
