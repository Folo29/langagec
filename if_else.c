#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putwords(char **words)
{
	int i;

	i = 0;
	while (words[i])
	{
		ft_putstr(words[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;

	return i;
}

int main(int argc, char **argv)
{
	int i;
	int len;

	i = 1;
	while (argv[i])
	{
		len = ft_strlen(argv[i]);
		if (len > 5)
		{
			ft_putstr(argv[i]);
		}
		else if (len > 3)
		{
			ft_putchar(argv[i][0]);
		}
		else
		{
			ft_putstr("trop petit");
		}
		ft_putchar('\n');
		i++;
	}
	return 0;
}
