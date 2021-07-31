#include <unistd.h>

void	ft_rev_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	a;

	j = 0;
	i = argc - 1;
	while (0 < i)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			a = argv[i][j];
			write (1, &a, 1);
			j++;
		}
		write (1, "\n", 1);
		i--;
	}
}

int	main(int argc, char **argv)
{
	ft_rev_params(argc, argv);
	return (0);
}
