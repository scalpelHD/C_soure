#include <stdio.h>
#include <stdlib.h>
void main()
{
	float z,t,a;
		for ( z = 2.5; z > -2.5; z -= 0.1) 
		{  
        for ( t = -2.4; t < 2.4; t += 0.05)
		 {  
             a = t * t + z * z - 1;  
            putchar(a * a * a - t * t * z * z * z <= 0 ? '*' : ' ');  
        }  
        putchar('\n');  
    } 
}
