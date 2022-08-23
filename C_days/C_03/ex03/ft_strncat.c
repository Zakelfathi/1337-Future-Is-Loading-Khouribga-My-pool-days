/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-fath <zel-fath@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 04:07:02 by zel-fath          #+#    #+#             */
/*   Updated: 2022/06/18 23:00:59 by zel-fath         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*int main(void)
{
  char dest[50] = "Hello, ";
  char src[50] = " cbfjhjbvn dfhtfg bfyfdgd";
  char dest1[50] = "Hello, ";
  char src2[50] = " hfghfgdf hdfghd grgdf";

  ft_strncat(dest, src, 12);
  printf("%s \n", dest);

  strncat(dest1, src2, 12);
  printf("%s \n", dest1);
}*/
