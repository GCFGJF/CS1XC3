#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};
    int index = 4;
    
    // Out of bounds array access
    printf("%d\n", arr[index]); 
    
    // Incrementing a Boolean variable
    _Bool flag = 1;
    flag++;
    
    // Matching if and else if conditions
    int x = 1;
    if (x == 1) {
        printf("x is 1\n");
    } else if (x == 1) {
        printf("x is still 1\n");
    }
    
    // Zero division
    int y = 0;
    int z = 1/y;
    
    return 0;
}
