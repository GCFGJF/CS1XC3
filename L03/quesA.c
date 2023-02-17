#include <stdio.h>


int power(int num,int exponent);


int main(void){
    
    int answer = 0;
    int offset = 0;
    for(int i=2; i<85;){
        for(int j=2; j<= (168/i);){
            if ((i * j == 168) && ((i + j) % 2 == 0) && (i <= j)){
                answer = power(((i + j)/2),2) - 268;
                printf("%d   %d  The x is %d \n",i,j,answer);

            }
            j += 2;
        
        }
        i += 2;
    }
    return 0;
}


int power(int num,int exponent){
    if (exponent == 0){
        return 1;
    } 
    int result = 1;
    while(exponent > 0){
        result = result * num;
        exponent--;
    }
    return result;
}