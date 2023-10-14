#include <stdio.h>
#include <string.h>

struct Person{
	char name[10];
	int age;
	double height;
};

int main(){
	struct Person list[5]={{"김유신",15,178.3},{"김춘추",13,173.3},{"사다함",17,183.2},{"원효",19,168.9},{"장보고",13,187.3}};
	
	int x,y,z,na;
	
	for(x=0;x<=4;x++){
		printf("%s : %d세, %lfcm\n",list[x].name,list[x].age,list[x].height);
	}
	
	struct Person frist[5];
	
	for(y=0;y<=4;y++){
		printf("%d번째 친구 : ",y+1);
		scanf("%s %d %lf",&na,&frist[y].age,&frist[y].height);
		strcpy(frist[y].name,na);
	}
	
	for(z=0;z<=4;z++){
		printf("%s : %d세, %lfcm\n",frist[z].name,frist[z].age,frist[z].height);
	}
}
