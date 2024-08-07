#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double first(double x,double y);
double second(double x,double y);
double third(double x,double y);
double fourth(double x,double y);

int main(){
	double x1,y1;
	
	printf("실수를 입력하고 enter>");
	scanf("%lf",&x1);
	printf("실수를 입력하고 enter>");
	scanf("%lf",&y1);
	
	printf("식 1 : %lf\n식 2 : %lf\n식 3 : %lf\n식 4 : %lf",first(x1,y1),second(x1,y1),third(x1,y1),fourth(x1,y1));
}

double first(double x,double y){
	return pow(x,2)+pow(y,2);
}

double second(double x,double y){
	return pow(x+y,2);
}

double third(double x,double y){
	return pow(fabs(x)+fabs(y),2);
}

double fourth(double x,double y){
	return sqrt(pow(x,2)+pow(y,2));
}
