#include <stdio.h>                                      
#include <conio.h>
#include <conio.h>
#include <string.h>
static int totalcost;
int i, cost[14], quan[14];
char name[20], item[14][50] = {"Cheese pizza", "Mushroom pizza", "Paneer pizza", "Veg chawmine", "Spicy chowmine", "Manchurian", "Burger", "Fried rice", "Plane Dosa", "Masala dosa", "Idli", "chocolate shake", "kitkat shake", "Oreo shake"};

void placeOrder(){            //  To Place order
    int a;
    printf("Select your order\n 1. Pizza \n 2. Chineese\n 3. South Indian \n 4. Shakes \n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("you ordered for Pizza\n");
        break;
    case 2:
        printf("you ordered for Chineese\n");
        break;
    case 3:
        printf("you ordered for South Indian\n");
        break;
    case 4:
        printf("you ordered for Shakes\n");
        break;
    default:
        printf("choose a correct option\n");
    }
    if (a == 1)
    {
        int b = 0;
        printf("Select your Category \n 1. cheeze pizza of Rs. 99 \n 2. mashroom pizza of Rs. 110\n 3. Paneer pizza of Rs. 120\n");
        scanf("%d", &b);
        cost[0] = 99;
        cost[1] = 110;
        cost[2] = 120;
        switch (b)
        {
        case 1:
            printf("you ordered for cheeze pizza for Rs.99\n");
            quan[0]++;
            totalcost += 99;
            break;
        case 2:
            printf("you ordered for mushroom pizza for Rs.110\n");
            quan[1]++;
            totalcost += 110;
            break;
        case 3:
            printf("you ordered for Paneer pizza for Rs.120\n");
            quan[2]++;
            totalcost += 120;
            break;
        default:
            printf("choose a correct option\n");
        }
    }
    if (a == 2)
    {
        int b = 0;
        printf("Select your Category \n 1. Mixveg chawmine of Rs. 45 \n 2. Spicy chawmine of Rs. 60\n 3. Manchurian of Rs. 80\n 4. Burger of Rs.40\n 5. Fried rice of Rs. 50\n");
        scanf("%d", &b);
        cost[3] = 45;
        cost[4] = 60;
        cost[5] = 80;
        cost[6] = 40;
        cost[7] = 50;
        switch (b)
        {
        case 1:
            printf("you ordered for Mixveg chawmine of Rs. 45\n");
            quan[3]++;
            totalcost += 45;
            break;
        case 2:
            printf("you ordered for Spicy chawmine of Rs. 60\n");
            quan[4]++;
            totalcost += 60;
            break;
        case 3:
            printf("you ordered for manchurian of Rs. 80\n");
            quan[5]++;
            totalcost += 80;
            break;
        case 4:
            printf("you ordered for burger of Rs. 40\n");
            quan[6]++;
            totalcost += 40;
            break;
        case 5:
            printf("you ordered for fried rice of Rs. 50\n");
            quan[7]++;
            totalcost += 50;
            break;
        default:
            printf("choose a correct option\n");
        }
    }
     if (a == 3)
    {
        int b = 0;
        printf("Select your Category \n 1. Plane Dosa of Rs. 40 \n 2. Masala dosa of Rs. 60\n 3. Idli of Rs. 45\n");
        scanf("%d", &b);
        cost[8] = 40;
        cost[9] = 60;
        cost[10] = 45;
        switch (b)
        {
        case 1:
            printf("you ordered for Plane Dosa for Rs.40\n");
            quan[8]++;
            totalcost += 40;
            break;
        case 2:
            printf("you ordered for Masala dosa for Rs.60\n");
            quan[9]++;
            totalcost += 60;
            break;
        case 3:
            printf("you ordered for Idli for Rs.45\n");
            quan[10]++;
            totalcost += 45;
            break;
        default:
            printf("choose a correct option\n");
        }
    }
     if (a == 4)
    {
        int b = 0;
        printf("Select your Category \n 1. Chocolate Shake of Rs. 90 \n 2. Kitkat Shake of Rs. 100\n 3. Oreo shake of Rs. 110\n");
        scanf("%d", &b);
        cost[11] = 90;
        cost[12] = 100;
        cost[13] = 110;
        switch (b)
        {
        case 1:
            printf("you ordered for Chocolate Shake for Rs.90\n");
            quan[11]++;
            totalcost += 90;
            break;
        case 2:
            printf("you ordered for Kitkat Shake for Rs.100\n");
            quan[12]++;
            totalcost += 100;
            break;
        case 3:
            printf("you ordered for Oreo shake for Rs.110\n");
            quan[13]++;
            totalcost += 110;
            break;
        default:
            printf("choose a correct option\n");
        }
    }
}    
void printItem()                 //  To Print items
{
    printf("+=====+======================+============+===========+\n");
    printf("| ID  |        Item name     |  Quantity  |   Amount  |\n");
    printf("+=====+======================+============+===========+\n");
    for (int i = 0; i < 14; i++)
    {
        if (quan[i] != 0)
        {
            printf("|  %-3d|  %-20s|    %-8d|  Rs.%-6d|\n", i + 1, item[i], quan[i], cost[i] * quan[i]);
            printf("+-----+----------------------+------------+-----------+\n");
        }
    }
}
void deleteItem()                // To Delete items
{
    int c;
    printf("Enter the id of item u want to delete:\n");
    fflush(stdin);
    scanf("%d", &c);
    c--;
    if (c < 0 || c > 14 || quan[c] <= 0)
    {
        printf("Invalid Id\n");
    }
    else
    {
        printf("\nDELETED ITEM__ \n Id :- %d\t\tItems :-%s \t\tcost:- %d\n\n", c + 1, item[c], cost[c]);
        totalcost = (totalcost - cost[c]);
        quan[c]--;
    }
}
void totalammount()             // total ammount to pay
{
    printf("\ntotal ammount to pay is %d\n", totalcost);
    printf("Thanku %s for choosing us..Please visit us again\n\n", name);
}

            //    <<===MAIN PROGRAM===>>
void main()
{
    quan[i] = 0;
    char entry;
    printf("Hello, Enter your name\n >> \n");
    gets(name);
    printf("\nWelcome %s , Place your order\n\n ", name);

    placeOrder();
    printItem();
    while (1)
    {
        printf("\n If you want more food press 'y', delete food press 'd' or press enter to get your total bill\n");
        fflush(stdin);
        scanf("%c", &entry);
        if (entry == 'y' || entry == 'Y')
        {
            placeOrder();
            printItem();
        }
        else if (entry == 'd' || entry == 'D')
        {
            deleteItem();
            printItem();
        }
        else 
            goto bill;
    }

    bill:
    {
        printf("\n Your final bill is :\n");
        printItem();
        totalammount();
    }
}