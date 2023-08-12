#include <stdio.h>

int main(){
	int n;
	printf("Write result : ");
	scanf("%d",&n);
	switch(n/10){
		case 10:
			printf("Very good!");
			break;
		case 9:
			printf("Very good!");
			break;
		case 8:
			printf("Good!");
			break;
		case 7:
			printf("Fighting!");
			break;
		default:
			printf("Cheer up! You can do it!");
			break;
	}
}
