#include <libc.h>

int main() {
    char str[] = "Hello from Coulson's WASM!\n";
    char *buf = str;
    write(buf, 28);

    return 0;
}