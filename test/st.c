#include <stdio.h>
#define name 30

struct apple
{
    int battery;
    int ram;
    int storage;
} info;

int main()
{  
    
    printf("%d | %d\n", info.battery);
}