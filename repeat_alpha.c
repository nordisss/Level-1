#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat(char c, int pos)
{
	while (pos >= 0)
	{
		ft_putchar(c);
		pos--;
	}
}

void	repeat_alpha(char *str)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
		{
			pos = (str[i] - 'A');
			repeat(str[i], pos);
		}
		else if ((str[i] >= 'A') && (str[i] <= 'z'))
		{
			pos = (str[i] - 'a');
			repeat(str[i], pos);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
