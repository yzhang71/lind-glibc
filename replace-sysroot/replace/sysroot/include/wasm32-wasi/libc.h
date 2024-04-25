#ifndef LIBC_H
#define LIBC_H

unsigned long strlen(const char *str);

void __wasm_call_dtors(void);

void __wasi_proc_exit(unsigned int exit_code);

void _start(void);

#endif // LIBC_H
