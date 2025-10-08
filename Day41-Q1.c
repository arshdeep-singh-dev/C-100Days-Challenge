#include <stdio.h>

int custom_strlen(const char *str) {
    int count = 0;
    
    while (str[count] != '\0') {
        count++;
    }
    
    return count;
}

int main() {
    const char *my_string = "Hello, world!";
    int length1 = custom_strlen(my_string);
    printf("String: \"%s\"\n", my_string);
    printf("Character Count (Manual): %d\n\n", length1);

    const char *empty_string = "";
    int length2 = custom_strlen(empty_string);
    printf("String: \"%s\"\n", empty_string);
    printf("Character Count (Manual): %d\n\n", length2);
    
    const char *spaced_string = "C programming is fun";
    int length3 = custom_strlen(spaced_string);
    printf("String: \"%s\"\n", spaced_string);
    printf("Character Count (Manual): %d\n\n", length3);

    return 0;
}
