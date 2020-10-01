#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_ultimate_range(int **range, int min, int max);
char	*ft_strjoin(int size, char **strs, char *sep);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
char	**ft_split(char *str, char *charset);

int		main(void){
//---Ex00--------------------
	char *dst;
	char src[100000] = "Matthieu";
	dst = ft_strdup(src);
	printf("%s", dst);
	free(dst);
//---Ex01--------------------
	int min = -10;
	int max = -20;
	int i = 0;
	int *table;
	table = ft_range(min, max);
	printf("%p\n", table);
	while (i < max - min)
		printf("%d, ", table[i++]);
//---Ex02--------------------
	int min2 = 2000;
	int max2 = 200;
	int i2 = 0;
	int *range;
	printf("%d\n", ft_ultimate_range(&range, min2, max2));
	printf("%p\n", range);
	while (i2 < max2 - min2)
		printf("%d, ", range[i2++]);
//---Ex03--------------------
	char *strs[] = {"I", "am", "Matthieu,", "and", "it's", "nice", "to", "meet", "you."};
	char *sep = " ";
	printf("%s", ft_strjoin(9, strs, sep));
//---Ex04--------------------
	char *test;
	test = ft_convert_base(" 	--+--ec249sfd", "AB", "MATHT");
	printf("%s\n", test);
	free (test);
//---Ex05--------------------
	char **test2;
	int i3;

	i3 = 0;
	test2 = ft_split("Hey ahah, bon au taff camarades !", "abc");
	while(test2[i3])
	{
		printf("%s\n", test2[i3]);
		i++;
	}
	printf("%s\n", test2[i3]);
	i3 = 0;
	while(test2[i3])
	{
		free(test2[i3]);
		i3++;
	}
	free(test2[i3]);
	free(test2);
	return (0);
}

