#include <stdio.h>
#include <stdlib.h>

int main() {
    // 5 GB = 5 * 1024 * 1024 * 1024 bytes
    size_t size = 1L * 1024 * 1024 * 1024;

    void *ptr = malloc(size);

    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Successfully allocated 5 GB of memory.\n");

    // Optionally, use the memory to prevent lazy allocation
    // Set first 100 bytes to avoid OS lazily allocating memory
    for (size_t i = 0; i < 100; ++i) {
        ((char *)ptr)[i] = 0;
    }

    // Free the memory
    free(ptr);

    return 0;
}
