#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void){

	int min = -2147483648;
	//int min = -2000;
	int max = 2147483647;
	//int max = 200;
	int i2 = 0;
	int *range;
	printf("%d\n", ft_ultimate_range(&range,min, max));
	printf("%p\n", range);
	while (i2 < max - min)
		printf("%d, ", range[i2++]);

return (0);
}