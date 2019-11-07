#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, grade[5], sum=0;
	int *ptr = grade;
	
	for(i=0; i<5; i++)
	{
		printf("grade[%d] = ", i);
		scanf("%d", &grade[i]);
	}
	for(i=0; i<5; i++)
	{
		sum = sum + *(ptr+i);
	}
	
	for(i=0; i<5; i++)
		printf("grade[%d] = %d\n", i, *(ptr+i)); 
	
	printf("average is %d\n", sum/5);


	return 0;
}

