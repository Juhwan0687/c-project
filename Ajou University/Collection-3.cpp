#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[3];
    
    cout<<"첫번째 정수를 입력하시오 : ";
    cin>>arr[0];
    cout<<"두번째 정수를 입력하시오 : ";
    cin>>arr[1];
    cout<<"세번째 정수를 입력하시오 : ";
    cin>>arr[2];
    
    sort(arr,arr+3);
    
    cout<<"가장 큰수와 작은수의 덧셈 결과는 "<<arr[0]+arr[2]<<"입니다.\n중간 값은 "<<arr[1]<<"입니다.";
}