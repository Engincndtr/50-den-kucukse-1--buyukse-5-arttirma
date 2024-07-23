#include<stdio.h>

int main(){

 
    int j=1;
    while( j<=100)
{
	printf("%4i",j);
	if (j%20==0)
    printf("\n");
	if(j<50)
	
	j=j+1;
	else
	j=j+5;
 
}
return 0;
}
