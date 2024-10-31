#include <stdio.h>

struct array_list
{
    size_t capacity;
    size_t len;
    char *data[];
};

struct array_list *array_list_new()
{

    int size = 10;

    struct array_list *ptr = (struct array_list *)malloc(2 * sizeof(size_t) + size * sizeof(char *));
    if (ptr == NULL)
    {
        return NULL;
    }

    // make struct
    // only init cap and len, data left untouched
    ptr->capacity = size;
    ptr->len = 0;
    return ptr;
}

struct array_list* array_list_add_to_end(struct array_list *list, char *c)
{

    if (list->len == list->capacity)
    {                                                                                                                          // full
        struct array_list *ptr2 = (struct array_list *)realloc(list, 2 * sizeof(size_t) + 2 * list->capacity * sizeof(char *)); // find new memory space
        if (ptr2 == NULL)
        {
            return NULL; // Handle memory allocation failure
        }
        // no need to copy info
        list = ptr2;
        list->capacity = list->capacity * 2; // increase capacity of struct
    }
    // add char to data
    char *str = c;
    list->data[list->len] = strdup(c);
    list->len++;

    return list;
}

/*int main()
{
    struct array_list *list = array_list_new();

    list = array_list_add_to_end(list, "abcde");
    list = array_list_add_to_end(list, "xyz");
    list = array_list_add_to_end(list, "List");
    list = array_list_add_to_end(list, "abcde");
    list = array_list_add_to_end(list, "xyz");
    list = array_list_add_to_end(list, "List");
    list = array_list_add_to_end(list, "abcde");
    list = array_list_add_to_end(list, "xyz");
    list = array_list_add_to_end(list, "List");
    list = array_list_add_to_end(list, "abcde");
    list = array_list_add_to_end(list, "xyz");
    list = array_list_add_to_end(list, "List");

    for (size_t i = 0; i < list->len; i++)
    {
        printf("%s\n", list->data[i]);
    }
    

    return 0;
}*/
