/*
 예제2 입력받은 두수 비교 큰수 반환
*/ 

#include <stdio.h>

int compare(int a, int b){
    if(a>b){
    	return a;
    }
    return b;
}

int main(){

    int a, b, result;
    a = 15;
    b = 10;
    result = compare(a,b);
    printf("두수중 큰수는 : %d\n", result);    
    return 0;
}

