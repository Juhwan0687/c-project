#include <stdio.h>

int sum_k(int a[4]){
	int i,sum=0;
	
	for(i=0;i<4;i++){
		sum+=a[i];
	}
	
	return sum;
}

int sum_c(int a[4]){
	int i,sum=0;
	
	for(i=0;i<4;i++){
		sum+=a[i];
	}
	
	return sum;
}

int main(){
	int korea[4]={15,17,27,32};
	int china[4]={27,16,19,11};
	
	printf("´ëÇÑ¹Î±¹ ÃÑÁ¡ : %d / Áß±¹ ÃÑÁ¡ : %d",sum_k(korea),sum_c(china));
}
