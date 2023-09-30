#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *toString(void* input)
{
    size_t size = *(size_t*)(input - sizeof(size_t));

    char *output = calloc(size + 1, 1);

    memcpy(output, input, size);

    return output;
}

int64_t toInt64(int32_t value)
{
    return value;
}
