#include <stdio.h>
#define name 30

struct apple
{
    char iphone[name];
    int battery;
    int ram;
    int storage;
};

int main()
{
    struct apple i7 = {"iPhone 7", 1960, 2, 32};
    struct apple i8 = {"iPhone 8", 1821, 3, 64};
    struct apple ix = {"iPhone X", 2716, 3, 64};
    printf("%s, %d, %d, %d\n", i7.iphone, i7.battery, i7.ram, i7.storage);
    printf("%s, %d, %d, %d\n", i8.iphone, i8.battery, i8.ram, i8.storage);
    printf("%s, %d, %d, %d\n", ix.iphone, ix.battery, ix.ram, ix.storage);


}