#include <iostream>
using namespace std;

int main(){
    int a;
    
    cout<<"성적 점수를 입력하고 enter>";
    cin>>a;
    
    if(a>60){
        cout<<"시험 합격!";
    }
    else{
        cout<<"시험 불합격!";
    }
}