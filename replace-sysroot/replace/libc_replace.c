unsigned long strlen(const char *str) {
    const char *s;
    for (s = str; *s; ++s) {}
    volatile long long i;

    // for (i = 0; i < 3000000000; ++i) {
    //     // Volatile is used to prevent the compiler from optimizing the loop away
    // } 
    return (int)(s - str);
}

// Since the WebAssembly Interface (WAI) seems only support i32, i64, f32, f64
// according to https://medium.com/wasmer/introducing-webassembly-interfaces-bb3c05bc671
int convertBufToInt(const void *buf) {
    const unsigned char *byteBuf = (const unsigned char *)buf;
    int result = 0;

    // Convert each byte into an int and shift them into right positions
    result |= byteBuf[0] << 24;
    result |= byteBuf[1] << 16;
    result |= byteBuf[2] << 8;
    result |= byteBuf[3];

    return result;
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
    float bufFloat = convertBufToInt(buf);
    __lind_write((int32_t) bufFloat, (int32_t) nbyte);
}

