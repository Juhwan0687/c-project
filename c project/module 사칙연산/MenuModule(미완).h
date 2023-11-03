int MainMenu(){
	int n;
	
	printf("\t### 사칙연산 ###\n");
	printf("\t1. 정수형 사칙연산\n");
	printf("\t2. 실수형 사칙연산\n");
	printf("\t3. 종료\n");
	printf("\n\t메뉴를 선택하세요 : ");
	scanf("%d",&n);
	
	return n;
}

int IntMenu(){
	int im;
	
	printf("\t@@ 정수형 계산기 @@\n");
	printf("\t1. 덧셈\n\t2.뺄셈\n\t3.곱셈\n\t4.나눗셈\n\t5.뒤로\n");
	printf("\n\t메뉴를 선택하세요 : ");
	scanf("%d",&im);
	
	return im;
}

int IntInputData(){
	int n;
	printf("\t정수 입력 : ");
	scanf("%d",&n);
	
	return n;
}

void IntSum(){
	int a=IntInputData();
	int b=IntInputData();
	
	printf("Result : %d\n\n",a+b);
}

void IntSub(){
	int a=IntInputData();
	int b=IntInputData();
	
	printf("Result : %d\n\n",a-b);
}

void IntMul(){
	int a=IntInputData();
	int b=IntInputData();
	
	printf("Result : %d\n\n",a*b);
}

void IntDiv(){
	int a=IntInputData();
	int b=IntInputData();
	
	printf("Result : %d / Remainder : %d\n",a/b,a%b);
	printf("Result(real number) : %lf\n\n",a*1.0/b);
}
