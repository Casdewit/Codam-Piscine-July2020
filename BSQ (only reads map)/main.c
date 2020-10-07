/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 14:08:08 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/29 16:42:53 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	squarefinder(char *map)
{
	int i;

	i = 0;
	while (map[i] != '\0')
	{
		if (map[i] == 'o')
			map[i] = map[i] + 9;
		i++;
	}
}

void	array_maker(char *filename, char *map)
{
	int		fd;
	char	buf;
	int		i;

	i = 1;
	map[0] = 2;
	fd = open(filename, O_RDWR);
	while (read(fd, &buf, 1))
	{
		map[i] = buf;
		i++;
	}
	map[i] = '\0';
	write(1, map, i);
	close(fd);
}

int		main(int argc, char **argv)
{
	char	*example_file;
	char	*memory;

	if (argc < 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (argv == 0)
		ft_putstr("Error\n");
	example_file = "example_file";
	memory = (char *)malloc(ft_strlen(example_file));
	array_maker(example_file, memory);
	free(memory);
}
