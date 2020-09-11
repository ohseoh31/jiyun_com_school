/*
 예제3 포인터 배열 설명
*/ 

#include <stdio.h>

int main(){

    int num1[4] = { 10, 1, 9, 8};
    int * num1Pointer;

    num1Pointer = &num1;

    printf("num1Pointer 변수가 가리키는 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1[0]);

    *num1Pointer ++;
    printf("num1Pointer 변수가 가리키는 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1[1]);

    *num1Pointer ++;    printf("num1Pointer 변수가 가리키는 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1[2]);

    *num1Pointer ++;    
    printf("num1Pointer 변수가 가리키는 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1[3]);

    return 0;
}

