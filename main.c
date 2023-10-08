/*Copyright 2019-2023 Kai D. Gonzalez*/

#include <unistd.h>
#include <malloc.h>

main(void) {
    char* buf = malloc(1024);

    read(STDIN_FILENO, buf, 1024);
    
    write(STDOUT_FILENO, buf, 1024);
}
