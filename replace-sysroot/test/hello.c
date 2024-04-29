#include <libc.h>

int main() {
    char str[] = "Hello from Coulson's WASM!";
    char *buf = str;
    write(buf, 27);

    return 0;
}