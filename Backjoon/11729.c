#include <stdio.h>

void hing(int n, int x, int y, int z)
{
    if(n == 1)
    {
        printf("%d %d\n", x, z);        return;
    }

    // 문제가 있는 부분
    hing(n-1, x, z, y); // A과정
    hing(1, x, y, z); // B 과정
    hing(n-1, y, x, z); // C 과정
    // 시작 경유 끝점
    return;
}

int main()
{
    int count = 2, count_s;
    int x = 1, y = 2, z = 3;

    // cunt 도출 과정
    scanf("%d", &count_s);
    for(int i = 1 ; i < count_s ; i++)      count *= 2;         count--;    
    printf("%d\n", count);

    hing(count_s, x, y ,z);
    
    return 0;
}



/*
원이 n개 있을 경우
A과정 : 맨 아래 원을 제외한 나머지 원을 모두 2번 자리로 옮긴다.
B과정 : 맨 아래에 깔려 있는 원을 3번 자리로 옮긴다.
C과정 : A과정을 반복하여 3번 자리로 옮긴다.

2번으로 옮긴 원의 개수 : n-1
3번으로 옮긴 원의 개수 : 1

총 실행 7 (3 + 1 + 3)
A과정           B과정             C과정
1 3            1 3              2 1
1 2                             2 3
3 2                             1 3

1 -> 1
2 -> 3
3 -> 7
4 -> 15

num = 2^횟수 - 1
*/