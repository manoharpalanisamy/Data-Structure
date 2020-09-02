#include <stdio.h> 
  
int main() { 
    // loop initialization expression 
    int i = 1; 
   
    // infinite while loop 
    while (1) { 
        if (i > 10) 
            break; 
   
        printf("%d ", i); 
        i++; 
    } 
   
    return 0; 
} 