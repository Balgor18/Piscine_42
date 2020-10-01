#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);


int		main(void)
{	
	char *dst;
	char src[100000] = "123 ? Florian et Bruno vont se faire un BK";
	dst = ft_strdup(src);
	printf("%s", dst);
	free(dst);	
	return (0);
}