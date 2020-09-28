#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int		main(void){

	char *strs[] = {"I", "am", "Matthieu,", "and", "it's", "nice", "to", "meet", "you."};
	char *sep = "123";
	printf("%s", ft_strjoin(9, strs, sep));
return (0);
}
