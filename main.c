//HOw to change value using pointer.
#include <stdio.h>

int main()
{
    int x=40,y=44,*z;
    
    z=&x;
    
    printf(" x = %d  Y = %d  z = %x",x,y,z);
    
    y=*z; *z=50;
    
    printf("\n x = %d  Y = %d  z = %x",x,y,z);
    
    
    
    

    return 0;
}
