void _start() {
    char *hello = "Hello, World!\n";
    asm(
        "mov $13, %%edx\n\t"
        "mov %0, %%ecx\n\t"
        "mov $1, %%ebx\n\t"
        "mov $4, %%eax\n\t"
        "int $0x80"
        :
        : "r" (hello)
        : "edx", "ecx", "ebx"
    );
    asm(
        "mov $0, %ebx\n\t"
        "mov $1, %eax\n\t"
        "int $0x80"
    );
}