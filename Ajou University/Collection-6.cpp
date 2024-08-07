#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    double height,weight;
    
    cout<<"본인의 키<cm>를 입력하세요 : ";
    cin>>height;
    
    cout<<"본인의 무게<kg>를 입력하세요 : ";
    cin>>weight;
    
    printf("당신의 키는 %.1lfcm <%.1lffeet>입니다.\n",height,height*0.0328084);
    printf("당신의 체중은 %.1lfkg <%.1lflb>입니다.\n",weight,weight*2.20459);
    printf("표준 체중 %.1lf과의 차이는 ",weight);
    if(weight-(height-100)*0.9>0){
        printf("+%.1lfkg입니다.",weight-(height-100)*0.9);
    }
    else if(weight-(height-100)*0.9<0){
        printf("%.1lfkg입니다.",weight-(height-100)*0.9);
    }
    else{
        printf("0kg입니다.");
    }
}