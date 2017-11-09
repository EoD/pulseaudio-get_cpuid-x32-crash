#include <cstdint>

static void get_cpuid(uint32_t op,
                      uint32_t *a, uint32_t *b, uint32_t *c, uint32_t *d) {
    __asm__ __volatile__ (
        "  push %%rbx          \n\t"
        "  cpuid               \n\t"
        "  mov %%ebx, %%esi    \n\t"
        "  pop %%rbx           \n\t"

        : "=a" (*a), "=S" (*b), "=c" (*c), "=d" (*d)
        : "0" (op)
    );
}

int main() {
	//uint32_t eax = 0;
	uint32_t ebx = 0;
	uint32_t ecx = 4;
	uint32_t edx = 0;
	uint32_t level = 4156269074;

	get_cpuid(0x00000000, &level, &ebx, &ecx, &edx);

	return 0;
}
