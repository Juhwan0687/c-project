#include <iostream>
using namespace std;

int main(){
    int a;
    
    cout<<"세 자리 10진 정수 입력 후 enter>";
    cin>>a;
    
    cout<<"  1의 자리수 "<<a%10<<"\n 10의 자리수 "<<a%100/10<<"\n100의 자리수 "<<a/100;
}