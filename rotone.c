#include <unistd.h> // For write

void	ft_putchar(char *c)
{
	write(1, &c, 1);
}

void	ft_rot_one(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Y')
			|| (str[i] >= 'a') && (str[i] <= 'y'))
			str[i] += 1;
		else if (str[i] == 'Z' || str[i] == 'z')
			str[i] -= 25;
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rot_one(argv[1]);
	return (0);
}
