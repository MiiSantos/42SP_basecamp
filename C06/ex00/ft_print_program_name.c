#include <unistd.h>

void	ft_print_program_name(char **argv)
{
	int		j;
	char	a;

	j = 0;
	while (argv[0][j])
	{	
		a = argv[0][j];
		write (1, &a, 1);
		j++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 0)
		ft_print_program_name(argv);
	return (0);
}
