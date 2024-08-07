#include <iostream>
using namespace std;

int main(){
    cout<<"1부터 n까지의 합중에서 10000을 넘지 않는 가장 큰 합은?\n";
    
    int n=1,sum;
    
    while(1){
        sum=0;
        
        for(int i=1;i<=n;i++){
            sum+=i;
        }
        
        if(sum>10000){
            cout<<"1부터 "<<n-1<<"까지의 합이 "<<sum-n<<"입니다.";
            
            return 0;
        }
        
        n++;
    }
}