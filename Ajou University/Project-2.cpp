#include <iostream>
using namespace std;

int main(){
	int cnt=1;
	char c;
	
	for(cnt=1;cnt<=cnt;cnt++){
		cout<<"<"<<cnt<<"회 실행>\n";	
		for(int i=9;i>=1;i--){
			for(int j=9;j>=1;j--){
				cout<<j<<" * "<<i<<" = "<<j*i<<" ";
			}
			cout<<"\n";
		}
		
		start:
		
		cout<<"프로그램을 다시 실행하겠습니까? (Y/N) : ";
		cin>>c;
		
		if(c!='Y'&&c!='N'&&c!='y'&&c!='n'){
			cout<<"입력할 수 있는 알파벳이 아닙니다. (Y/N)\n";
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
