#include <stdio.h>

int main(){

    int num1 = 3;
    int * num1Pointer;
    /*
       num1Pointer 변수에 num1 변수의 주소값을 가르키도록 한다.
    */    
    num1Pointer = &num1;
    printf("num1Pointer 변수가 가리키는 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1);
    
    *num1Pointer +=5;
    printf("num1Pointer 변수가 가리키는 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1);

    //포인터 변수가 가르키는 변수의 값 증가    
    (*num1Pointer)++;
    printf("num1Pointer 변수가 가리키는 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1);
    
    *num1Pointer ++;
    //포인터 변수의 주소값 증가 -- 출력시 쓰레기값이 출력됨을 확인 이유는 num1Pointer가 가르키는 주소의 값은 초기화가 되지 않음 이걸 응용하는 방법 -> 포인터 배열 사용
    printf("num1Pointer 변수가 가리키는 값 : %d\n", *num1Pointer);
    printf("num1 변수에 저장된 값 : %d\n", num1);
    
    return 0;
}