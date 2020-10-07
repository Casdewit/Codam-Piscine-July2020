#include <unistd.h>

void	ft_putchar(int counterx, int countery, int x, int y)
{
	if ((counterx == 0 && countery == 0) ||
		(counterx == x - 1 && countery == y - 1 && x > 1 && y > 1))
		write(1, "/", 1);
	else if ((counterx == 0 && countery == y - 1) ||
			(counterx == x - 1 && countery == 0))
		write(1, "\\", 1);
	else if (countery == 0 || countery == y - 1 ||
			counterx == 0 || counterx == x - 1)
		write(1, "*", 1);
	else
		write(1, " ", 1);
}

void	rush(int x, int y)
{
	int counterx;
	int countery;

	countery = 0;
	while (countery < y)
	{
		counterx = 0;
		while (counterx < x)
		{
			ft_putchar(counterx, countery, x, y);
			counterx++;
		}
		write(1, "\n", 1);
		countery++;
	}
}

int		main(void)
{
	rush(5, 5);
	return (0);
}
