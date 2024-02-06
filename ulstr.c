#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_tolower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		c += ' ';
	return (c);
}

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c -= ' ';
	return (c);
}

void	ft_ulstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			ft_tolower(str[i]);
		else if ((str[i] >= 'a') && (str[i] <= 'z'))
			ft_toupper(str[i]);
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_ulstr(argv[1]);
	ft_putchar('\n');
	return (0);
}

