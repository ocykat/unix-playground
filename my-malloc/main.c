#include <stdio.h>

struct MemBlock {
    int size = 0;
    MemBlock* prev = NULL;
    MemBlock* next = NULL;
};

struct DynamicMemory {
    MemBlock* head = NULL;
    int total_size = 0;
};

struct DynamicMemory mem;

struct MemBlock* find_first_empty_block(int size) {
    MemBlock* block = mem.head;

    while (block != NULL) {
        if (block.size >= size) {
            return block;
        }
    }

    return NULL;
}

void* my_malloc(int size) {
    if (find_first_empty_block(size) == NULL) {
        sbrk(); // increase heap size
    }
    else {

    }
}

void my_free(void* ptr) {

}

int main() {
    return 0;
}
