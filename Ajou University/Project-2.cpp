#include <iostream>
using namespace std;

int main(){
	int cnt=1;
	char c;
	
	for(cnt=1;cnt<=cnt;cnt++){
		cout<<"<"<<cnt<<"ȸ ����>\n";	
		for(int i=9;i>=1;i--){
			for(int j=9;j>=1;j--){
				cout<<j<<" * "<<i<<" = "<<j*i<<" ";
			}
			cout<<"\n";
		}
		
		start:
		
		cout<<"���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N) : ";
		cin>>c;
		
		if(c!='Y'&&c!='N'&&c!='y'&&c!='n'){
			cout<<"�Է��� �� �ִ� ���ĺ��� �ƴմϴ�. (Y/N)\n";
			goto start;
		}
		else if(c=='Y'||c=='y'){
			continue;
		}
		else{
			return 0;
		}
	}
}
