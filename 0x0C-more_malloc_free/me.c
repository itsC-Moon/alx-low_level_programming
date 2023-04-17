#include <stdio.h>
void print_arry(int *tab,int n)
{
		for(int i = 0;i<n;++i)
			printf("%d",tab[i]);
}
void print_comb(int n)
{
	int tab[n];
	for(int i = 0;i<n;++i)
		tab[i] = i;
	
	



}
int main(void)
{
	print_comb(3);
	return (0);
}
