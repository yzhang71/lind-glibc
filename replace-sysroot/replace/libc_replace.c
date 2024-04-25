unsigned long strlen(const char *str) {
    const char *s;
    for (s = str; *s; ++s) {}
    volatile long long i;

    lindrustinit(0);

    // for (i = 0; i < 3000000000; ++i) {
    //     // Volatile is used to prevent the compiler from optimizing the loop away
    // } 
    return (int)(s - str);
}
