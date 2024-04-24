int strlen(const char *str) {
    const char *s;
    for (s = str; *s; ++s) {}
    volatile long long i;
    for (i = 0; i < 3000000000; ++i) {
        // Volatile is used to prevent the compiler from optimizing the loop away
    } 
    return (int)(s - str);
}

void _start() {
    main();
}

void __wasm_call_dtors() {
    
}

void __wasi_proc_exit(unsigned int exit_code) {
    
}
