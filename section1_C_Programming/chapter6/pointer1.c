/*
 포인터 기본 개념 설명
*/

#include <stdio.h>

int main(){

    int num1 = 3;
    int * num1Pointer;
    /*
       num1Pointer 변수에 num1 변수의 주소값을 가르키도록 한다.
    */    
    num1Pointer = &num1;
    
    printf("\nnum1Pointer 변수가 가르키고 있는 주소 내부의 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1);
    printf("num1Pointer 의 주소 : %p\n", num1Pointer);
    printf("num1Pointer 의 주소 : %p\n\n", &num1);

    return 0;
}