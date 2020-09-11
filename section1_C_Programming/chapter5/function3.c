/*
 예제3 함수를 이용한 사칙연산 구현
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
    a = 5;
    b = 10;
    
    printf("add : %d\n", add(a,b));
    printf("sub : %d\n", sub(a,b));
    printf("mul : %d\n", mul(a,b));
    printf("div : %d\n", div(a,b));    
    return 0;
}

