#include <stdio.h>
#include <string.h>

 
#define MAX_SIZE 100

 
void reverseStringPtr(const char *source, char *destination) {
     
    int length = strlen(source);

    
    const char *source_ptr = source + length - 1;

     
    char *dest_ptr = destination;

     
    for (int i = 0; i < length; i++) {
        
        *dest_ptr = *source_ptr;

        
        source_ptr--;

        
        dest_ptr++;
    }

    
    *dest_ptr = '\0';
}

int main() {
   
    char inputString[MAX_SIZE];
    char reverseString[MAX_SIZE];

     
    
    printf(" nhap mot chuoi : ", MAX_SIZE - 1);

     
    if (fgets(inputString, MAX_SIZE, stdin) == NULL) {
        printf("Loi khi oc chuoi.\n");
        return 1;
    }

     
    size_t len = strlen(inputString);
    if (len > 0 && inputString[len - 1] == '\n') {
        inputString[len - 1] = '\0';
        len--;  
    }
    
   
    if (len == 0) {
        printf("Chuoi khong hop le.\n");
        return 1;
    }

     
    reverseStringPtr(inputString, reverseString);

     
    printf("\nket qua \n");
    printf("Chuoi Goc (inputString):    \"%s\"\n", inputString);
    printf("Chuoi Ðao Nguoc (reverseString): \"%s\"\n", reverseString);

    return 0;
}

