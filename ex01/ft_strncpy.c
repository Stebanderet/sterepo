/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbandere <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 14:56:27 by sbandere          #+#    #+#             */
/*   Updated: 2021/07/14 16:12:00 by sbandere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while(i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = 0;
	return(dest);

}
int main()
{
	char src[] = "binding of Isaac";
	char dest[20];

	printf("%s\n", ft_strncpy(dest, src, 9));
			return(0);
}
