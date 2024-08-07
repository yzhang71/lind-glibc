#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
    const char *str = "Hello from Coulson's WASM!\n";

    size_t str_len = strlen(str) + 1;

    char *buf = malloc(str_len);

    if (buf == NULL) {
        return -1;
    }

    strcpy(buf, str);

    write(1, buf, str_len - 1);

    free(buf);

    return 0;
}
