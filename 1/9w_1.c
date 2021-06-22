#include <stdio.h>

double sum();

int main()
{
    // result는 sum 함수에서 반환된 값을 저장할 변수, a 배열은 입력받은 값을 저장할 변수
    double a[5], result; 
    printf("실수 5개를 입력하세요: ");
    
    for(int i = 0 ; i < 5 ; i++) // 실수 5개 입력
    scanf("%lf", &a[i]); 
    
    result = sum(a); // result 값에 배열 a 보내기

    printf("%lf\n", result); // result 출력

}

double sum(double val[]) // sum 함수는 배열에 있는 모든 수를 더하는 값
{
    double sum; // sum 변수는 배열의 합을 저장할 값

    for(int i = 0 ; i < 5 ; i++) // 5번 실행
    sum += val[i];

    return sum; // sum 값 반환
}