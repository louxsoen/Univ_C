#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

void make_Tree(); // make_Tree라는 함수가 있음을 컴파일러에게 알립니다.

int main() // 메인함수
{
    int h; // 트리의 높이를 결정할 변수 h
    printf("트리를 만듭니다. 트리의 높이를 적어주세요. (정수) ");
    scanf("%d", &h);

    make_Tree(h); // make_Tree 함수에 h를 넣고 출력합니다.

    return 0; // 정상 종료
}

void make_Tree(int h) // 나무를 출력하는 예쁜 함수
{   
    for(int i = 0 ; i < h ; i++) // 세로 높이는 h로 제한
    {
        for(int k = 0 ; k < ((h-1) - i) ; k++) // 입력받은 h값에 -1한 값에 i를 뺀 값이 K보다 큰 값일 경우 공백으로 정렬
        {
            printf(" ");
        }
        for(int j = 0 ; j< ((i * 2) + 1 ) ; j++) // i의 *2한 값에 + 1를 한 값이 j보다 클 경우 트리를 그립니다.
        {
            printf("~");
        }
        printf("\n"); // 줄바꿈
    }

    printf("세로 %d칸의 트리를 만듭니다. (예술 점수 : 100점)\n", h);
}