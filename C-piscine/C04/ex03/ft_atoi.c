/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/22 14:58:56 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/23 15:18:18 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		skipspace_mincount(char *str, int *res)
{
	int x;
	int mincount;

	x = 0;
	while ((str[x] == ' ') || (str[x] == '\f') || (str[x] == '\r') ||
	(str[x] == '\n') || (str[x] == '\t') || (str[x] == '\v'))
	{
		x++;
	}
	mincount = 0;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			mincount++;
		x++;
	}
	while ((str[x] >= '0') && (str[x] <= '9'))
	{
		*res = *res * 10 + (str[x] - '0');
		x++;
	}
	return (mincount);
}

int		ft_atoi(char *str)
{
	int	res;

	res = 0;
	if (skipspace_mincount(str, &res) % 2 != 0)
		res = res * -1;
	return (res);
}
