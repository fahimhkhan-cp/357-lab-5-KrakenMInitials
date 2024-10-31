#include <stdio.h>

struct array_list
{
    size_t capacity;
    size_t len;
    char *data[];
};

struct array_list *array_list_new();
struct array_list* array_list_add_to_end(struct array_list *list, char *c);
