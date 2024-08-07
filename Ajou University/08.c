#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    for(int i=0;i<10;i++){
        double a=rand();
        
        printf("%lf\n",a*0.0000000001);
    }
}