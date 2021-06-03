#include <stdio.h>
#include <unistd.h>

void main()
{
    char *shell[2];

    shell[0] = "/bin/sh";
    shell[1] = NULL;

    execve(shell[9], shell, NULL);
}