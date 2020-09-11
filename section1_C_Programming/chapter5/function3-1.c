/*
 예제3 함수를 이용한 사칙연산 구현

 1. add, sub, div, mul 함수를 구현합니다.
 2. while문을 이용해서 계산을 할 두 변수를 입력 받습니다.
 3. 계산을 할 연산자를 입력 받습니다. (해당 문자는 숫자로 입력 받습니다.)
 4. 연산된 결과를 출력해줍니다.
 5. 시스템을 종료 할지 물어봅니다 이때 y/n이라는 문자열중 하나를 입력받습니다.
 6. y라는 문자를 입력하면 프로그램이 종료되고, n이라는 문자를 입력 받으면 프로그램이 계속 동작합니다.
*/ 

#include <stdio.h>

int add(int a, int b){

    return a+b;
}

int sub(int a, int b){
	return a-b;
}

int div(float a, float b){
    return a/b;
}

int mul(int a, int b){
	return a*b;
}

int main(){

    int a, b, sum;
    int operator;
    char exit;
    printf("계산기 프로그램을 시작합니다.\n");
    while(1){
        
        operator = 0;
        printf("첫번째 수를 입력해 주세요 : ");
        scanf(" %d",&a);
        printf("두번째 수를 입력해 주세요 : ");
        scanf(" %d",&b);
        printf("연산자를 입력해 주세요[(1,+), (2,-), (3,*), (4,/) : ");
        scanf(" %d",&operator);
        
        switch (operator){
            case 1:
                printf("add : %d\n", add(a,b));
                break;
            case 2:
                printf("sub : %d\n", sub(a,b));
                break;
            case 3:
                printf("mul : %d\n", mul(a,b));
                break;
            case 4:
                printf("div : %d\n", div(a,b));
                break; 
        }
        printf("종료 하시겠습니까?(y/n) : ");
        scanf(" %c",&exit);
        if (exit == 'y'){
            printf("계산기 프로그램을 종료 합니다.\n");
            break;
        }

    }
    return 0;
}

