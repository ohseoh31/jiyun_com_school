/*
 예제3-2 예제3-1에서 이루어지는 결과를 함수를 이용하여 포인터 배열에 저장된 값을 5씩 증가되는 함수를 생성
 이때 증가 시키는 형식은 함수와 포인터를 이용해야함
*/ 

#include <stdio.h>

int main(){

    int num1[4] = { 10, 1, 9, 8};
    int * num1Pointer;
    
    num1Pointer = &num1;
    
    array_sum(num1Pointer); 
    num1Pointer = &num1;

    for (int i =0 ; i < 4 ; i ++){
        printf("num1[%d] = %d\n",i, *num1Pointer++);
    }

    return 0;
}

void array_sum(int *arr){
    
    for (int i = 0; i < 4; i ++){
        *arr +=5;
        if (i == 3){
            break;
        }
        *arr++;
    }
}