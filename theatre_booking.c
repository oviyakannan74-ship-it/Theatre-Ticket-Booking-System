#include <stdio.h>
#include <stdlib.h>

int seat[10][10] = {0};
int row, col, choice, a = 1, n;
char ans;

void ViewSeat()
{
    printf("\n    ");
    for(int j = 1; j <= 10; j++)
    {
        printf("C%d\t", j);
    }
    printf("\n");

    for(int i = 0; i < 10; i++)
    {
        printf("R%d   ", i + 1);
        for(int j = 0; j < 10; j++)
        {
            printf("%d\t", seat[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("============================== Screen is Here ==============================\n");
    printf("\n\n");
}

void BookSeat()
{
    printf("\n");
    printf("How many seats do you want to book: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter row number (1-10): ");
        scanf("%d", &row);
        printf("Enter column number (1-10): ");
        scanf("%d", &col);

        if(row < 1 || row > 10 || col < 1 || col > 10)
        {
            printf("Invalid seat position! Please choose rows and columns between 1 and 10.\n\n");
            i--;
            continue;
        }

        if(row == 1)
        {
            printf("This Row is Reserved for Disabled Persons\n");
            printf("Are you a disabled person (y/n): ");
            scanf(" %c", &ans);
            if(ans == 'n' || ans == 'N')
            {
                printf("Please book a seat starting from the 2nd Row onwards.\n\n");
                i--;
                continue;
            }
        }

        int r_idx = row - 1;
        int c_idx = col - 1;

        if(seat[r_idx][c_idx] == 0)
        {
            seat[r_idx][c_idx] = 1;
            printf("Seat Booked Successfully\n");
        }
        else
        {
            printf("The Seat is Already Booked.\n");
            i--;
        }
        printf("\n");
    }
}

void CancelBooking()
{
    printf("\n");
    printf("How many seats do you want to cancel: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter row number (1-10): ");
        scanf("%d", &row);
        printf("Enter column number (1-10): ");
        scanf("%d", &col);

        if(row < 1 || row > 10 || col < 1 || col > 10)
        {
            printf("Invalid seat position! Please choose rows and columns between 1 and 10.\n\n");
            i--;
            continue;
        }

        int r_idx = row - 1;
        int c_idx = col - 1;

        if(seat[r_idx][c_idx] == 1)
        {
            seat[r_idx][c_idx] = 0;
            printf("Seat Cancelled Successfully\n");
        }
        else
        {
            printf("The Seat is not Booked.\n");
            i--;
        }
        printf("\n");
    }
}

void Greetings()
{
    printf("\n");
    printf("Thank You, Visit Again!!\n");
    printf("\n");
}

void ErrorMsg()
{
    printf("\n");
    printf("Invalid Selection, Please select a Valid Choice\n");
    printf("\n");
}

int main()
{
    while(a == 1)
    {
        printf("----- Ticket Booking System -----\n");
        printf("======= MENU =======\n");
        printf("1. View Seating\n");
        printf("2. Book Seat\n");
        printf("3. Cancel Booking\n");
        printf("4. Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
        case 1:
            ViewSeat();
            break;

        case 2:
            BookSeat();
            break;

        case 3:
            CancelBooking();
            break;

        case 4:
            Greetings();
            a = 2;
            break;

        default:
            ErrorMsg();
            break;
        }
    }
    return 0;
}
