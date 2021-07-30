#include <stdio.h>

void	ft_put_char(char a)
{
	write(1, &a, 1);
}

void	ft_write_int(int b, int c)
{
	ft_put_char((b / 10) + 48);
	ft_put_char((b % 10) + 48);
	ft_put_char(' ');
	ft_put_char((c / 10) + 48);
	ft_put_char((c % 10) + 48);
	if (b != 98 || c != 99)
	{
		ft_put_char(',');
		ft_put_char(' ');
	}
}

void	ft_print_comb2(void)
{
	int	d;
	int	e;

	d = 0;
	while (d <= 99)
	{
		e = d + 1;
		while (e <= 99)
		{
			ft_write_int(d, e);
			e++;
		}
		d++;
	}
}
