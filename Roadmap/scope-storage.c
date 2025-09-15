/* storage classes in C: auto, static, and extern. Learn how they affect variable scope, lifetime, and visibility across functions and files */
#include <stdio.h>
#include "shared.h"

// auto: Default for local variables; limited to block scope
void greet()
{
    auto int x = 5;
    printf("auto: %d\n", x);
}

// static: Retains value between function calls; useful for persistent state
void count()
{
    static int count = 0;
    count++;
    printf("static: %d\n", count);
}

// extern: Declares variables defined in other files; enables cross-file acces

extern int sharedValue;

int main()
{
    greet();
    count();
    printf("Shared value: %d\n", sharedValue);

    return 0;
}