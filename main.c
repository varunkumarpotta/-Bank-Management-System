#include <stdio.h>
#include <conio.h>
#include <string.h>

void signup();
void login();
void mainmenu();
void deposite();
void withdraw();
void accountdetails();
void transferamount();
void loan();
void checkbalance();
void exit();

int totalamount=1000;
int transfer;
int z;
int accnum;
char name[15];
char password[15];
char gmail[15];
char dob[8];
char username[15];
char pwd[15];

void main()
{
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\t\t         BANK MANAGEMENT SYSTEM");
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n\t\tWelcome to bank management system");
    printf("\n\t\tPress any key to create new account....");
    getch();
    signup();
}

void signup()
{


    printf("\nEnter your name : ");
    scanf("%s",&name);
    printf("Create a password : ");
    scanf("%s",&password);
    printf("Enter your gmail : ");
    scanf("%s",&gmail);
    printf("Enter you date of birth :");
    scanf("%s",&dob);

    printf("\n\t\tAccount created successfully");
    printf("\n\t\tPress any key to login...");
    getch();
    login();

}

void login()
{

    printf("\nEnter User name : ");
    scanf("%s",&username);

    if(strcmp(username,name)!=0)
    {
        printf("\n!!!!Invalid Username..please try again!!!!");
        printf("\nPress any key to login again...");
        getch();
        login();
    }


    printf("Enter password : ");
    scanf("%s",&pwd);

    if(strcmp(pwd,password)!=0)
    {
        printf("\n!!!!Invalid Password..please try again!!!!");
        printf("\nPress any key to login again...");
        getch();
        login();
    }

    printf("\n\t\tPress any key to go to main menu...");
    getch();
    mainmenu();
}

void mainmenu()
{
    int ch;
    printf("\n1.Deposite");
    printf("\n2.Withdraw");
    printf("\n3.Transfer amount");
    printf("\n4.Apply for Loan");
    printf("\n5.Check balance");
    printf("\n6.Account details");
    printf("\n7.Exit\n");

    scanf("%s",&ch);
    int x=ch;

    switch(x)
    {
        case '1':
            deposite();
            break;
        case '2':
            withdraw();
            break;
        case '3':
            transferamount();
            break;
        case '4':
            loan();
            break;
        case '5':
            checkbalance();
            break;
        case '6':
            accountdetails();
            break;
        case '7':
            exit();
            break;
        default :
            printf("please select valid choice");
            printf("press any key to go to login page...");
            getch();
            mainmenu();

    }
}

void deposite()
{
    int deposit;
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\t\t         BANK MANAGEMENT SYSTEM");
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n***********");
    printf("\nDEPOSITE");
    printf("\n***********");
    printf("\n\nEnter the amount you want to deposit :");
    scanf("%d",&deposit);
    totalamount+=deposit;
    printf("\nAmount deposited in your account successfully");
    printf("\n\t\tEnter any key to go to main menu...");
    getch();
    mainmenu();

}

void withdraw()
{
    int withdraw;
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\t\t         BANK MANAGEMENT SYSTEM");
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n*******************");
    printf("\n     WITHDRAW");
    printf("\n*******************");
    printf("\n\nEnter the amount you want to withdraw :");
    scanf("%d",&withdraw);
    totalamount-=withdraw;
    printf("\n\t\tEnter any key to go to main menu...");
    getch();
    mainmenu();
}

void transferamount()
{
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\t\t         BANK MANAGEMENT SYSTEM");
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n************************");
    printf("\n    TRANSFER AMOUNT");
    printf("\n************************");
    printf("\nEnter the account number to transfer for : ");
    scanf("%d",&accnum);
    printf("\n\nEnter how much amount to transfer");
    scanf("%d",&transfer);
    totalamount-=transfer;
    printf("\nAmount transfered successfully");
    printf("\n\t\tEnter any key to go to main menu...");
    getch();
    mainmenu();
}

void loan()
{
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\t\t         BANK MANAGEMENT SYSTEM");
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n*******************");
    printf("\n      LOAN");
    printf("\n*******************");
    printf("\n\nPress '1' to apply for Education loan");
    printf("\nPress '2' to apply for Personal loan");
    printf("\nPress '3' to apply for agricultural loan");

    scanf("%d",&z);
    if(z==1)
    {
        printf("\nEducation loan applied successfully");
    }
    else if(z==2)
    {
        printf("\nPersonal load applied successfully");
    }
    else if(z==3)
    {
        printf("\nAgricultural loan applied successfully");
    }
    else
    {
        printf("\nPlease select a valid choice");
    }

    printf("\n\t\tPress any key to go to main menu...");
    getch();
    mainmenu();
}

void checkbalance()
{
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\t\t         BANK MANAGEMENT SYSTEM");
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n*******************");
    printf("\n   BALANCE CHECK");
    printf("\n*******************");
    printf("\n\nYour balance is : %d",totalamount);
    printf("\n\t\tPress any key to go to main menu...");
    getch();
    mainmenu();
}

void accountdetails()
{
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\t\t         BANK MANAGEMENT SYSTEM");
    printf("\n\t\t*=*=*=*=*=**=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*");
    printf("\n\n**********************");
    printf("\n   ACCOUNT DETAILS");
    printf("\n**********************");
    printf("\n\nName : %s",name);
    printf("\nGmail : %s",gmail);
    printf("\nDate of birth : %s",dob);
    printf("\nAccount balance : %s",totalamount);
    printf("\n\t\tEnter any key to go to main menu...");
    getch();
    mainmenu();
}

void exit()
{
    printf("\n\t\tTHANK YOU");
    printf("\n\t\tLogged out successfully....");
}


