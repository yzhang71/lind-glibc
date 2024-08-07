#include <stdlib.h>

void __wasm_call_dtors() {
    
}

void __wasi_proc_exit(unsigned int exit_code) {
    
}

#include <features.h>

// #include "libc.h"

// #define START "_start"

// #include "crt_arch.h"

void __wasi_init_tp();
void __libc_setup_tls();

// int main();
// void _init();
// void _fini();
// void _rtld_fini();
// int __libc_start_main(int (*)(), int, char **,
// 	void (*)(), void(*)(), void(*)(), void(*)());

void _start(void)
{
	// int argc = p[0];
	// char **argv = (void *)(p+1);
    // int argc;
    // char **argv;
    __libc_setup_tls();
    // __libc_start_main(main, argc, argv, _init, _fini, 0, 0);
    __wasi_init_tp();
    main();
}

