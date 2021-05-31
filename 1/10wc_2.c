#include <stdio.h>
#define student 4
#define count 3

int main()
{
    int score[student][count]; // 학생마다 점수를 기록하는 변수
    int sum[count] = { 0 }; // 학생 개개인의 점수를 더한 값을 저장하는 변수

    printf("학생 성적 프로그램입니다.\n");
    printf("%d명의 학생 | %d개의 과목\n", student, count); // define으로 인한  정보 출력
    
    for(int i = 0 ; i < student ; i++) // student 값 만큼 입력 받는 함수
    {
        printf("%d번째 학생입니다.\n", i + 1); 
        for(int k = 0 ; k < count ; k++) // 과목 수만큼 입력 받는 함수
        {
            printf("%d번째 성적 입력 : ", k + 1); // 처음 k는 0이니 +1
            scanf("%d", &score[i][k]);
            sum[i] += score[i][k];
        }
        printf("\n");
    }

    for(int i = 0 ; i < student ; i++) // 출력
    {
        printf("%d번째 학생 | ", i + 1);
        for(int k = 0 ; k < count ; k++)
        printf("%d과목 %4d    ", k + 1, score[i][k]);

        printf("평균 %d   합계 %d", sum[i]/student, sum[i]);
    
    printf("\n"); // 형식에 맞춰서 출력하기
    }

    return 0; // 정상 종료
}