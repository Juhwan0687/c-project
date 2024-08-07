#include <stdio.h>

int main(){
    int x=10,y=20,z=10;
    
    printf("x=%d y=%d\n",x,y);
    
    x=y;
    y=z;
    
    printf("x=%d y=%d\n",x,y);
}