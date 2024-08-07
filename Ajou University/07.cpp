#include <iostream>
using namespace std;

int main(){
    for(int i=10;i<=20;i+=2){
        cout<<"삼각형의 높이 : 10, 밑변 : "<<i<<".00, 면적 : "<<i*5<<".00\n";
        cout<<"사각형의 높이 : 10, 밑변 : "<<i<<".00, 면적 : "<<i*10<<".00\n";
    }
}