#include <stdio.h>

void Ccube();
void Coding();

int main(){
	Ccube();//1
	Ccube();//1
	Ccube();//1
	Coding();//1
	Coding();//2
	Coding();//3
}

void Ccube(){
	int cnt=0;
	
	cnt++;
	printf("%d ��ť��\n",cnt);
}

void Coding(){
	static int cnt=0;
	
	cnt++;
	printf("%d �ڵ�\n",cnt);
}
