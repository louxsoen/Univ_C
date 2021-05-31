#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
    unsigned char a; // 글자를 입력받을 a라는 변수를 캐릭터형으로 선언한다.

    printf(">> Input the character: ");
    scanf("%c", &a); // 문자열로 입력 받는다.

    /* 
    아스키코드에서는 소문자 코드가 대문자 코드보다 32만큼 크다
    소문자를 입력 받았을 땐 32를 빼면 대문자가 되고 대문자에서 32를 더하면
    소문자로 된다.
    */
    

    if(a >= 'A' && a <=  'Z') // 대문자가 입력될 경우 소문자로 바꿔준다.
    {
        a+=32; // 아스키코드에서는 소문자 코드가 대문자 코드보다 32만큼 크다.
        goto print; // print로 goto한다.
    }
    else if(a >= 'a' && a <= 'z') // 소문자가 입력될 경우 변환없이 바로 goto해준다.
    {
        goto print;  
    }
    else
    {
        goto error;
    }
    
    // c (99)), p (112), j (106), l(108)
    
    // 출력하는 곳
    print:
        switch (a)
        {
        case 99: // c를 입력받은 경우
            printf("C language.");
            break;
        
        case 112: // p를 입력받은 경우
            printf("Python.");
            break;

        case 106: // j를 입력 받은 경우 
            printf("JAVA.");
            break;
            
        case 108: // l을 입력 받은 경우
            printf("LISP.");
            break;

        default: // 그 밖에 다른 값을 입력받을 경우
            goto error; // 에러로 goto한다.
            break;
        }

        printf("\n"); // 띄어쓰기를 통합하였다.
        return 0; // 정상적 코드 종료

    error:
        printf("Input error!\n"); // 지정하지 않은 키가 입력되면 오류 표시를 해준다.
        return 1;   
}