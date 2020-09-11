/*
 예제3 포인터 배열에 저장된 값을 5씩 증가 시켜라! 이대 사용하는 방법은 포인터를 이용해야함

 1. 해당 실습은 num1 배열의 크기만큼 더해줄때 반복문 for, while 문을 사용한다.
 2. 포문에서는 포인터 변수의 주소값을 증가 또는 변경하여 값을 바꾸어 준다.
 3. 변경된 포인터 변수의 주소값을 다시 num1으로 변경한다.
 4. 출력의 경우 값을 입력 할때와 마찬가지로 주소값을 변경해서 출력한다.
*/ 

#include <stdio.h>

int main(){

    int num1[4] = { 10, 1, 9, 8};
    int * num1Pointer;

    num1Pointer = &num1;
    
    for (int i = 0; i < 4; i ++){
        *num1Pointer +=5;
        if (i == 3){
            break;
        }
        *num1Pointer++;
    }
    num1Pointer = &num1;

    for (int i =0 ; i < 4 ; i ++){
        printf("num1[%d] = %d\n",i, *num1Pointer++);
    }

    return 0;
}