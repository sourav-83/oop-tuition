#include <stdio.h>
#include <string.h>

struct personal_info {
    
    char name[50];
    int age;
    float weight;
   

};

void print_details(struct personal_info p)
{
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

}



int main()
{
    struct personal_info Persons[100];
    for (int i=0; i<100; i++)
    {
    strcpy(Persons[i].name, "Prithy");
    Persons[i].age = 21;
    Persons[i].weight = 55;

    }
    
    print_details(Persons[0]);


}