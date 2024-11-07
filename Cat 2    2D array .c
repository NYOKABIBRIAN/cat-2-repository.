//a 2D array program 
//Name:nyokabi brian warui
//Reg no :CT101/G/21530/24
#include <stdio.h>
int main() {
	int i=0,j=0;
	
int scores[2][2] = {
{65, 92},
{35, 70}
};
for  (i = 0; i < 2; i++) {
for ( j = 0; j < 2; j++) {
printf("%d ", scores[i][j]);
}
printf("\n");
}
return 0;
}

