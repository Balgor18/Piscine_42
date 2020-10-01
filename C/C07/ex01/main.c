#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		*ft_range(int min, int max);
int		main(void){

	int min = -2147483648;
	//int min = -2147483;
	int max = 2147483647;
	//int max = 2147483;
	int i = 0;
	int *table;
	table = ft_range(min, max);
	printf("%p\n", table);
	while (i < max - min)
		printf("%d, ", table[i++]);

return (0);
}