unsigned long strlen(const char *str) {
    const char *s;
    for (s = str; *s; ++s) {}
    volatile long long i;

    // for (i = 0; i < 3000000000; ++i) {
    //     // Volatile is used to prevent the compiler from optimizing the loop away
    // } 
    return (int)(s - str);
}

typedef int                     int32_t;

int32_t __imported_wasi_snapshot_preview1_lind_write(int32_t arg0, int32_t arg1) __attribute__((
    __import_module__("wasi_snapshot_preview1"),
    __import_name__("lind_write")
));

void __lind_write(int32_t buf, int32_t nbyte) {
    __imported_wasi_snapshot_preview1_lind_write(buf, nbyte);
}

void write(const void *buf, int nbyte) {
    __lind_write((int32_t) buf, (int32_t) nbyte);
}

