
#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_search_and_replace(char *str, char search, char replace)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == search)
			ft_putchar(replace);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][1] == '\0' && argv[3][1] == '\0')
			ft_search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	ft_putchar('\n');
	return (0);
}
