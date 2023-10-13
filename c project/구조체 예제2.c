#include <stdio.h>
#include <string.h>

struct Person{
	char name[10];
	int age;
	double height;
};

int main(){
	struct Person m1;
	struct Person m2={"허난설헌",13,159.9};
	
	strcpy(m1.name,"허균");
	m1.age=19;
	m1.height=168.34;
	
	printf("m1의 이름(%s) / 나이(%d) / 키(%lf)\n",m1.name,m1.age,m1.height);
	printf("m2의 이름(%s) / 나이(%d) / 키(%lf)\n",m2.name,m2.age,m2.height);
	
	struct Person m3;
	
	printf("사람의 정보 입력 : ");
	scanf("%s %d %lf",&m3.name,&m3.age,&m3.height);
	
	printf("m3의 이름(%s) / 나이(%d) / 키(%lf)\n",m3.name,m3.age,m3.height);
	
	struct Person m4;
	
	strcpy(m4.name,"김주환");
	m4.age=12;
	m4.height=142.3;
	
	printf("나의 이름(%s) / 나이(%d) / 키(%lf)",m4.name,m4.age,m4.height);
}
