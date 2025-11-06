/*
Name:Alex Mwangi
Reg:CT101/G/26432/25
Description:storing data elements
*/

#include <stdio.h>

int main()
{
	int i,j;
	// declare and initialize
	int scores1[2][2] = {{65,92},{84,72}};
   int scores2[2][2] = {{35,70},{59,67}};
   
   printf("scores: \n");
   
	//start,stop,step
	//for scores1
	for (i=0; i<2; i++){
	   for(j=0; j<2; j++){
	
	printf("%d \n",scores1[i][j]);
    	}
    	printf("\n");
	}
	//for scores2
for (i=0; i<2; i++){
for(j=0; j<2; j++){
	printf("%d\n",scores2[i][j]);
}	
printf("\n");
}
	return 0;
}