#include <iostream>
using namespace std;

int main(){
    int num,age;
    char sex;
    
    cout<<"학번을 입력하시오 : ";
    cin>>num;
    cout<<"성별을 입력하시오<남자는 m, 여자는 f> : ";
    cin>>sex;
    cout<<"나이를 입력하시오 : ";
    cin>>age;
    
    int sex2=sex+5;
    char sex3=sex2;
    char age2=age;
    char age3=age+50;
    
    cout<<"\t학\t번\t: "<<num<<"\n\t성\t별<문자> : "<<sex<<",\t성\t별<숫자> : "<<sex2-5<<"\n계산된 성별<문자> : "<<sex3<<", 계산된 성별<숫자> : "<<sex2<<"\n";
    cout<<"\t나\t이<문자> : "<<age2<<",\t나\t이<숫자> : "<<age<<"\n계산된 나이<문자> : "<<age3<<", 계산된 나이<숫자> : "<<age+50;
}