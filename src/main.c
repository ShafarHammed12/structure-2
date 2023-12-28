#include <stdio.h>
struct Student {
    char username[10];
    char email[20];
    char password[15];
    int age;
} studentOne, studentTwo;

int main()
{
    printf("Enter details of first student\n");
    printf("Enter student name: ");
    scanf("%s", &studentOne.username);
    printf("%s \n",studentOne.username);

    printf("Enter student email: ");
    scanf("%s", &studentOne.email);
    printf("%s \n",studentOne.email);
    
    printf("Enter password: ");
    scanf("%s", &studentOne.password);
    printf("%s \n",studentOne.password);

    printf("Enter age: ");
    scanf("%d", &studentOne.age);
    printf("%d \n\n",studentOne.age);
    
    printf("Enter details of second student \n");
    printf("Enter Student2 name: ");
    scanf("%s", &studentTwo.username);
    printf("%s \n",studentTwo.username);
    
    printf("Enter Student2 email: ");
    scanf("%s", &studentTwo.email);
    printf("%s \n",studentTwo.email);
    
    printf("Enter Student2 password: ");
    scanf("%s", &studentTwo.password);
    printf("%s \n",studentTwo.password);
    
    printf("Enter Student2 age: ");
    scanf("%d", &studentTwo.age);
    printf("%d \n",studentTwo.age);
    return 0;
}

    //studentTwo
