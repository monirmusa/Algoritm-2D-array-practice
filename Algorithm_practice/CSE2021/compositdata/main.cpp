#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int age;
    int money;
} person;

person *a;
person temp;

int n;

void inputPerson()
{
//    for(int i=0; i<n; i++)
//    {
//        scanf("%d %d",&a[i].age, &a[i].money);
//    }

    /************Testing***********/
    a[0].age = 45; a[0].money = 330;
    a[1].age = 35; a[1].money = 30;
    a[2].age = 25; a[2].money = 130;
    a[3].age = 55; a[3].money = 530;
    a[4].age = 50; a[4].money = 400;
    /******************************/
}

void printPerson()
{
    for(int i=0; i<n; i++)
    {
        printf("\n%d %d",a[i].age, a[i].money);
    }
}


void bubble_sort()
{
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            //if(a[i].age > a[j].age)
            if(a[i].money > a[j].money)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
}

int main()
{
    //scanf("%d", &n);
    n = 5;
    a = (person *) malloc (n * sizeof(person));

    inputPerson();
    printPerson();

    bubble_sort();

    printPerson();
    return 0;
}
