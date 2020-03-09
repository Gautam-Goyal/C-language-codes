// pointer to an array. 
  
#include <stdio.h> 
  
int main() 
{ 
  
    // Pointer to an array of five numbers 
    int(*a)[5]; 
  
    int b[5] = { 1, 2, 3, 4, 5 }; 
  
    int i = 0; 
  
    // Points to the whole array b 
  
    a = &b; 
  
    for (i = 0; i < 5; i++) 
  
        printf("%d\n", *(*a + i)); /*or we can write *(b + i) or b[i]  for values
                                   and for address we can use (b+1) or &b[i].*/
  
    return 0; 
} 
