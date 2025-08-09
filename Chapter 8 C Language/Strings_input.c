#include <stdio.h>

int main(){
    char st[10];

    scanf("%s" , st); // There is no need of &st[0] because the address is already present in the st

    // Scanf automatically adds the null character when the enter key is pressed

    // scanf("%s" , &st[0]);
    // &st[0] is also valid

    printf("%s" , st);

    // %s is the format specifier and it is provided by c language and it make the work easy

    return 0;
}