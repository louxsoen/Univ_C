#include <stdio.h>
#include <string.h>

int main(void)
{
    const char* str_menu[] =
    {
        "끝내기", "새로 만들기", "파일 열기", "파일 저장", "인쇄"
    };

    int sz_menu = sizeof(str_menu) / sizeof(str_menu[0]);
    int menu;
    
    for(;;)
    {
        for(int i = 0 ; i < sz_menu ; i++)          printf("%d. %s\n", i, str_menu[i]);
        printf("메뉴 선택? ");
        scanf("%d", &menu);
        
        if(menu == 0)                               break;
        else if(menu > 0 && 0 < menu < sz_menu)     printf("%s 메뉴를 선택했습니다.\n\n", str_menu[menu]);
        else                                        printf("메뉴를 잘못 선택했습니다.\n\n");
    }
}