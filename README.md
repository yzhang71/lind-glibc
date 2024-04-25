# lind-glibc
```
../../../clang+llvm-16.0.4-x86_64-linux-gnu-ubuntu-22.04/bin/clang-16 -Wno-implicit-function-declaration \                            
--target=wasm32-unknown-wasi \
--sysroot /home/dennis/Documents/Just-One-Turtle/wasi-libc/sysroot \
-c crt1.c \        
-o sysroot/lib/wasm32-wasi/crt1.o

../../../clang+llvm-16.0.4-x86_64-linux-gnu-ubuntu-22.04/bin/clang-16 -Wno-implicit-function-declaration \
--target=wasm32-unknown-wasi \
--sysroot /home/dennis/Documents/Just-One-Turtle/wasi-libc/sysroot \
-c libc_replace.c \
-fPIC \ 
-o sysroot/lib/wasm32-wasi/libc.o

../../../clang+llvm-16.0.4-x86_64-linux-gnu-ubuntu-22.04/bin/llvm-ar rcs sysroot/lib/wasm32-wasi/libc.a sysroot/lib/wasm32-wasi/libc.o

../../../clang+llvm-16.0.4-x86_64-linux-gnu-ubuntu-22.04/bin/clang-16 \
--target=wasm32-unknown-wasi \
--sysroot /home/dennis/Documents/Just-One-Turtle/lind-glibc/replace-sysroot/replace/sysroot \
-o replace_syscall.wasm \
replace_syscall.c

wasmer run replace_syscall.wasm
```
