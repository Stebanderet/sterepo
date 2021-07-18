/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_solving.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbandere <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 11:08:22 by sbandere          #+#    #+#             */
/*   Updated: 2021/07/18 11:18:31 by sbandere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_safe_row(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 5)
	{
		if ((s[i] == s[i + 2]) || (s[i] == s[i + 4]))
			return (0);
		if ((s[i + 2] == s[i + 4]) || (s[i + 2] == s[i + 6]))
			return (0);
		if ((s[i + 4] == s[i + 6]) || (s[i] == s[i + 6]))
			return (0);
		j++;
		i = i + 8;
	}
	return (1);
}

int	check_safe_col(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < 5)
	{
		if ((s[i] == s[i + 8]) || (s[i] == s[i + 16]))
			return (0);
		if ((s[i + 8] == s[i + 16]) || (s[i + 8] == s[i + 24]))
			return (0);
		if ((s[i + 16] == s[i + 24]) || (s[i] == s[i + 24]))
			return (0);
		j++;
		i = i + 2;
	}
	return (1);
}
