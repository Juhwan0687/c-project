#include <stdio.h>

int main(){
	int n;
	printf("薑熱 殮溘 : ");
	scanf("%d",&n);
	switch(n%2){
		case 1:
			printf("�汝�");
			break;
		case 0:
			printf("礎熱");
			break;
		default:
			printf("濠翱熱");
			break;
	}
}
