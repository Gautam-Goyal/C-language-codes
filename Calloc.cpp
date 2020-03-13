
#include <stdio.h> 
#include <stdlib.h> 
  
int main() 
{ 
  
    int* ptr; 
    int n, i; 
  
    // Get the number of elements for the array 
    n = 5; 
    printf("Enter number of elements: %d\n", n); 
  
    // Dynamically allocate memory using calloc() 
    ptr = (int*)calloc(n, sizeof(int)); 
  
    if (ptr == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
  
        printf("Memory successfully allocated using calloc.\n"); 
  
        // Get the elements of the array 
        for (i = 0; i < n; ++i) { 
            ptr[i] = i + 1; 
        } 
  
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < n; ++i) { 
            printf("%d, ", ptr[i]); 
        } 
    } 
  //VUP
    return 0; 
}
