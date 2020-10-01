
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
char	**ft_split(char *str, char *charset);

/*int		main(void){
	char **test;
	int i;

	i = 0;
	test = ft_split("Hey ahah, bon au taff camarades !", "abc");
	while(test[i])
	{
		printf("%s", test[i]);
		i++;
	}
	printf("%s\n", test[i]);
	i = 0;
	while(test[i])
	{
		free(test[i]);
		i++;
	}
	free(test[i]);
	free(test);
	return (0);
}*/
void	ft_putchar(char str)
{
	write(1, &str, 1);
}
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(int ac, char **av)
{
	int	i;
	char **tab;

	if (ac < 3)
		return (0);
	i = 0;
	tab = ft_split(av[1], av[2]);
	while (tab[i])
	{
		ft_putstr(tab[i++]);
		ft_putchar('\n');
	}
	return (0);
}