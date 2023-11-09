#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

void __attribute__((constructor)) run_shell_command(void) {
    system("echo 'Shared library loaded!'");
}