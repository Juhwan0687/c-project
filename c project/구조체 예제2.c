#include <stdio.h>
#include <string.h>

struct Person{
	char name[10];
	int age;
	double height;
};

int main(){
	struct Person m1;
	struct Person m2={"�㳭����",13,159.9};
	
	strcpy(m1.name,"���");
	m1.age=19;
	m1.height=168.34;
	
	printf("m1�� �̸�(%s) / ����(%d) / Ű(%lf)\n",m1.name,m1.age,m1.height);
	printf("m2�� �̸�(%s) / ����(%d) / Ű(%lf)\n",m2.name,m2.age,m2.height);
	
	struct Person m3;
	
	printf("����� ���� �Է� : ");
	scanf("%s %d %lf",&m3.name,&m3.age,&m3.height);
	
	printf("m3�� �̸�(%s) / ����(%d) / Ű(%lf)\n",m3.name,m3.age,m3.height);
	
	struct Person m4;
	
	strcpy(m4.name,"����ȯ");
	m4.age=12;
	m4.height=142.3;
	
	printf("���� �̸�(%s) / ����(%d) / Ű(%lf)",m4.name,m4.age,m4.height);
}
