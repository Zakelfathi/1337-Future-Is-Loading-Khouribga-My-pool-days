/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <zel-fath@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 03:54:29 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/20 00:32:11 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

int	ft_is_alpha_num(char c)
{
	int	i;

	i = 0;
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		i = 1;
	}
	else if (c <= '9' && c >= '0')
	{
		i = 1;
	}
	return (i);
}

char	*ft_strcapitalize(char *str)
{
	int	rep;
	int	i;

	ft_strlowcase(str);
	rep = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
		{
			rep = 0;
		}
		if (rep && (str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] = str[i] - 32;
			rep = 0;
		}
		if (!ft_is_alpha_num(str[i]))
		{
			rep = 1;
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
    int i=0;
    char t[]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("%s ", ft_strcapitalize(t));

}
*/
