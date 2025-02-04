#include <stdio.h>

int main() {
    char name[20];
    char Hobby[20];
    int age;
    scanf("%s",name);
    scanf("%d",&age);
    scanf("%s",Hobby);

    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Hobby: %S\n",Hobby);
    return 0;
}