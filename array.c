#include <stdio.h>

#define SIZE 10

int main(int argc, char const *argv[]){
    int digitArr[10];

    for (int i = 0; i < SIZE; i++){
        digitArr[i] = i*100;
    }

    for (int i = 0; i < SIZE; i++){
        //printf("digits[" + i + "] = " + digitArr[i]);
        printf("digitArr[%d] = %d \n", i, digitArr[i]);
    }

    int c = 5;
    if(c <= '0'){
        printf("less than %d \n", c-'0');
    }else if(c > '0' && c <= '5'){
        printf("between 0 and 5 \n");
    }else{
        printf("greater than 5 \n");
    }

    return 0;
}
