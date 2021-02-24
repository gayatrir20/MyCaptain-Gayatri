#include <stdio.h>

int main()
{
    int choice=0; //Choosing
    printf("Enter your choice from 1 to 5: ");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1:
        printf("Food item: Pasta\n");
        printf("Price: Rs 215");
        break;
        case 2:
        printf("Food item: Sandwich\n");
        printf("Price: Rs 128");
        break;
        case 3:
        printf("Food item: Pizza \n");
        printf("Price: Rs 239");
        break;
        case 4:
        printf("Food item: French fries \n");
        printf("Price: Rs 90 ");
        break;
        case 5:
        printf("Food item: Burger \n");
        printf("Price: Rs 208 ");
        break;
        default:
        printf("Incase you enter a number not present in the list, I cant display the menu for it.");
    }
    
    return 0;
}
