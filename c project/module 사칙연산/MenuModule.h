int MainMenu(){
	int n;
	
	printf("\t### ��Ģ���� ###\n");
	printf("\t1. ������ ��Ģ����\n");
	printf("\t2. �Ǽ��� ��Ģ����\n");
	printf("\t3. ����\n");
	printf("\n\t�޴��� �����ϼ��� : ");
	scanf("%d",&n);
	
	return n;
}

int IntMenu(){
	int im;
	
	printf("\t@@ ������ ���� @@\n");
	printf("\t1. ����\n\t2.����\n\t3.����\n\t4.������\n\t5.�ڷ�\n");
	printf("\n\t�޴��� �����ϼ��� : ");
	scanf("%d",&im);
	
	return im;
}

int IntInputData(){
	int n;
	printf("\t���� �Է� : ");
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
