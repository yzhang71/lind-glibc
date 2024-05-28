#include <unistd.h> // for write
#include <string.h> // for stpcpy

int main() {
    char str[] = "Hello from Coulson's WASM!\n";
    char *buf = str;
    char str2[] ="--------------------------\n";
    char *buf2 = str2;
    stpcpy(buf2, buf);
    write(buf2, 28);



    return 0;
}