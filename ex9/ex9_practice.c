#include <stdio.h>

int main(int argc, char *argv[]) 
{
    int i = 0, initial_int = 10, name_int = 20;
    char *initial = argv[1];
    char *prefix = argv[2];
    char *firstName = argv[3];
    char *lastName = argv[4];
    printf("%d\n", argc);
    if(argc == 1) {
        printf("Not enough arguments.\n");
    } else if (argc > 5) {
        printf("Too many arguments.\n");
    }else {
        while (i < 25) {
            if(i == initial_int) {
                printf("My name is %s %s.\n", initial, lastName);
            } else if(i == name_int) {
                printf("My name is %s %s.\n", firstName, lastName);
            } else {
                printf("My name is %s %s %s %s.\n", prefix, firstName, initial, lastName);
            }
            ++i;
        }
    }
    return 0;
}
