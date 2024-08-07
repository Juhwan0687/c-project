#include <iostream>
using namespace std;

int main(){
    char season;
    
    cout<<"계절을 선택할 알파벳 입력 : ";
    cin>>season;
    
    if(season=='A'||season=='a'){
        cout<<"계절 : 봄\n수행 : 꽃을 가꾼다.";
    }
    else if(season=='S'||season=='s'){
        cout<<"계절 : 여름\n수행 : 수영을 한다.";
    }
    else if(season=='D'||season=='d'){
        cout<<"계절 : 가을\n수행 : 추수를 한다.";
    }
    else if(season=='F'||season=='f'){
        cout<<"계절 : 여름\n수행 : 스키를 탄다.";
    }
    else{
        cout<<"허용되지 않는 알파벳입니다.\n알파벳 대소 문자 구별 없이 A, S, D, F만 허용합니다.\n프로그램을 다시 시작하세요.";
    }
}