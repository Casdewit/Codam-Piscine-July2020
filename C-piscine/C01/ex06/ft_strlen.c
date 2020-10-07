/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pde-wit <pde-wit@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/16 13:31:19 by pde-wit       #+#    #+#                 */
/*   Updated: 2020/07/20 10:32:53 by pde-wit       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}
