#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_rev_int_tab(int *tab,int size);

int main(void)
{
	int tab[6] = {7, 2 ,3 ,4 , 5, 6};
	int size = 6;
	int i;
	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		ft_putchar((tab[i]) + '0');
		i++;
	}
}
