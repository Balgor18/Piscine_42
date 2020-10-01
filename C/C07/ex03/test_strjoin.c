char	*ft_strjoin(int size, char **strs, char *sep);

#include <stdio.h>

int main(int argc, char **argv)
{
	argv++;
	argc--;
	char sep[] = "-";
	char *join = ft_strjoin(argc, argv, sep);

	printf("%s\n", join);
	return 0;
}
