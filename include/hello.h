/*
example include file
*/

void myPrintHelloMake(void);

#define dbg(fmt, ...) \
        do { if (1) fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, \
                                __LINE__, __func__, ##__VA_ARGS__); } while (0)
