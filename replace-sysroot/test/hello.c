#include <libc.h>

int main() {
    char str[] = "Hello from Coulson's WASM!\n";
    char *buf = str;
    char *buf2 = NULL;
    stpcpy(buf2, buf);
    write(buf2, 28);



    return 0;
}