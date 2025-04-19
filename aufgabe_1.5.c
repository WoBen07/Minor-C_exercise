#include <stdio.h>
#include <math.h>

/// @brief 
/// @param  
/// @return 
int main(void)
{   
        int a, b, c;
        a = -9;
        b = 42;
        c = 11;
        if (a > b)
        {
            if (a > c)
            {
                printf("%i", a);
            }
            
        } else if (b > c) {
            printf("%i", b);
        } else {
            printf("%i", c);
        }
        return 0;
}