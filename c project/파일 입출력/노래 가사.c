#include <stdio.h>
#include <stdlib.h>

int main(){
	char song[1000];
	
	printf("좋아하는 시나 노래 가사 입력 : ");
	scanf("%s",&song);
	
	FILE *fp=fopen("Song.txt","w");
	
	fprintf(fp,"%s",song);
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("\n가사가 저장되었습니다.");
	
	fclose(fp);
}
