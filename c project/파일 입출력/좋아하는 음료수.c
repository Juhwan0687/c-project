#include <stdio.h>
#include <stdlib.h>

struct Drink{
	char name[1000];
	int capa;
	int cost;
};

int main(){
	struct Drink d1;
	
	printf("�����ϴ� ����� �̸� �Է� : ");
	scanf("%s",&d1.name);
	
	printf("�� ������� �뷮 : ");
	scanf("%d",&d1.capa);
	
	printf("�� ������� ���� : ");
	scanf("%d",&d1.cost);
	
	FILE *fp=fopen("FavoriteDrink.txt","w");
	
	fprintf(fp,"������� �̸� : %s\n������� �뷮 : %d\n������� ���� : %d",d1.name,d1.capa,d1.cost); 
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n���Ͽ� ����Ǿ����ϴ�.");
	
	fclose(fp);
}
