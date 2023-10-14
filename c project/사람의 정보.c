#include <stdio.h>
#include <string.h>

struct Address{
	char name[10];
	char phon[20];
	char home[50];
};

int main(){
	struct Address man1;
	
	strcpy(man1.name,"김주환");
	strcpy(man1.phon,"01012345678");
	strcpy(man1.home,"망포동");
	
	printf("Man1의 이름(%s) / 전화번호(%s) / 주소(%s)\n",man1.name,man1.phon,man1.home);
	
	struct Address man2;
	
	strcpy(man2.name,"OO이");
	strcpy(man2.phon,"01034567890");
	strcpy(man2.home,"수원시");
	
	printf("Man2의 이름(%s) / 전화번호(%s) / 주소(%s)\n",man2.name,man2.phon,man2.home);
	
	struct Address man3;
	
	puts("Man3의 정보 입력 : ");
	scanf("%s / %s / %s",&man3.name,&man3.phon,&man3.home);
	
	printf("Man3의 이름(%s) / 전화번호(%s) / 주소(%s)\n",man3.name,man3.phon,man3.home); 
}
