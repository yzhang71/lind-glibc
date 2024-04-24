#ifndef STRLEN_H
#define STRLEN_H

int strlen(const char *str);

void __wasm_call_dtors(void);

void __wasi_proc_exit(unsigned int exit_code);

void _start(void);

#endif // STRLEN_H
