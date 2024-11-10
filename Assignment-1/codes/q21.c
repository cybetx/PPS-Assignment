#include <stdio.h>
#include <string.h>

int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int nameSearch(char name[][100], int size, char targetname[])
{
    for (int i = 0; i < size; i++)
    {
        if (strcmp(name[i], targetname) == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    /*Name Search ------>*/

/*-->*/    char name[7][100] = {"nasir", "arhaan", "hassan", "akash", "shubhanshu", "shibu", "sarda"};
    int nameSize = sizeof(name) / sizeof(name[0]);

    char targetname[100];
    printf("Enter the name you want to search in the list: ");
    scanf("%s", targetname);

    int searchIndexName = nameSearch(name, nameSize, targetname);
    if (searchIndexName != -1)
    {
        printf("The name %s found at index %d\n", targetname, searchIndexName);
    }
    else
    {
        printf("The name %s was not found\n", targetname);
    }
    printf("\n");


    /*Number Search*/

/*-->*/
    int arr[] = {1, 5, 56, 53, 2, 4, 5, 6};
    int arrSize = sizeof(arr) / sizeof(int);

    int target;
    printf("Enter the number you want to search in the list: ");
    scanf("%d", &target);

    int searchIndex = LinearSearch(arr, arrSize, target);
    if (searchIndex != -1)
    {
        printf("The number %d found at index %d\n", target, searchIndex);
    }
    else
    {
        printf("The number %d was not found\n", target);
    }

    return 0;
}
