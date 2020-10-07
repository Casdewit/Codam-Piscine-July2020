/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/21 09:50:49 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/22 14:39:40 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char str1[] = "hallo";
	char str2[] = "hallO";
	int res = ft_strcmp(str1, str2);
	printf("%d", res);
	printf("\n");
	char str3[] = "hallo";
	char str4[] = "hallO";
	int res2 = strcmp(str3, str4);
	printf("%d", res2);
}