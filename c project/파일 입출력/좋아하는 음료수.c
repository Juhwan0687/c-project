#include <stdio.h>
#include <stdlib.h>

struct Drink{
	char name[1000];
	int capa;
	int cost;
};

int main(){
	struct Drink d1;
	
	printf("좋아하는 음료수 이름 입력 : ");
	scanf("%s",&d1.name);
	
	printf("그 음료수의 용량 : ");
	scanf("%d",&d1.capa);
	
	printf("그 음료수의 가격 : ");
	scanf("%d",&d1.cost);
	
	FILE *fp=fopen("FavoriteDrink.txt","w");
	
	fprintf(fp,"음료수의 이름 : %s\n음료수의 용량 : %d\n음료수의 가격 : %d",d1.name,d1.capa,d1.cost); 
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n파일에 저장되었습니다.");
	
	fclose(fp);
}
