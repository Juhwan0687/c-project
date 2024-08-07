#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int array[12]={16,41,102,176,228,269,288,295,256,197,115,42};

int main(){
    int sum=0;
    
    for(int i=0;i<12;i++){
        sum+=array[i];
    }
    
    cout<<sum/12*0.1;
}