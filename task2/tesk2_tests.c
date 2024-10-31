#include "checkit.h"
#include "task2.h"

void test() {
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
    list = array_list_add_to_end(list, "List");
    
    checkit_int(list->len, 13);
    checkit_string(list->data[0], "abcde");
    checkit_string(list->data[1], "xyz");
    checkit_string(list->data[2], "List");
    checkit_string(list->data[3], "abcde");
    checkit_string(list->data[4], "xyz");
    checkit_string(list->data[5], "List");    
    checkit_string(list->data[6], "abcde");
    checkit_string(list->data[7], "xyz");
    checkit_string(list->data[8], "List");
    checkit_string(list->data[9], "abcde");
    checkit_string(list->data[10], "xyz");
    checkit_string(list->data[11], "List");
    checkit_string(list->data[12], "List");


}

int main(void) {
   test();
   return 0;
}
