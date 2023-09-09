#include <stdio.h>

int main(){
	char ascii[3];
	int arr[3],result;
	printf("ASCII code ют╥б : ");
	scanf("%c %c %c",&ascii[0],&ascii[1],&ascii[2]);

	arr[0]=ascii[0]-49+1;
	arr[1]=ascii[1]-49+1;
	arr[2]=ascii[2]-49+1;
	
	result=arr[0]*100+arr[1]*10+arr[2];
	printf("%d",result);
}
