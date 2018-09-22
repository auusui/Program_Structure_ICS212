/*************************************************************
// //  NAME:        Paulina Panek
// //
// //  HOMEWORK:    3b
// //
// //  CLASS:       ICS 212
// //
// //  INSTRUCTOR:  Ravi Narayan
// //
// //  DATE:        September 22nd, 2018
// //
// //  FILE:        main.c
// //
// //  DESCRIPTION:
// //   
// // 
// //
***********************************************************/

#include <stdio.h>
#include <string.h>
#include "record.h"

int debug;

int  main(int argc, char *argv[])
{

int result, choice, running, accountno;
char keyword[5], name[25], address[80];
struct record * start;

start = NULL;
running = 1;

    if (argc > 1)
    {
        strcpy(keyword, "debug");
        result = strcmp(argv[1], keyword);
        
        if ((argc < 3) && (result == 0))
        {
             debug = 1;
        }

        else 
            {
                printf("Wrong program call.\n");
            }   
    }
    else
    {
         debug = 0;
    }


    printf("Choose what you would like to do:\n");
    printf("Option 1: Add a New Record\n");
    printf("Option 2: Print Record by Account Number\n");
    printf("Option 3: Print All  Records\n");
    printf("Option 4: Delete Record by Account Number\n");
    printf("Option 5: Quit Program\n");

    scanf("%d", &choice);


    switch (choice)
    {
        case 1:
            printf("You chose Option 1\n");    
            
            printf("Please enter the account number of the new record:\n");
            scanf("%d", &accountno);
           
            printf("Please enter the name of the new record:\n");
            fgets(name, 25, stdin);

            printf("Please enter the address of the new record:\n");
            getaddress(address, accountno);           

            addRecord(&start, accountno, name, address); 
            break;

        case 2:
            printf("You chose Option 2\n"); 
            break;
        case 3:
            printf("You chose Option 3\n"); 
            break;
        case 4:
            printf("You chose Option 4\n");
            break;

            printf("Please enter the account number to be deleted:\n");
            
            scanf("%d", &accountno);


        case 5:
            printf("You chose Option 5\n"); 
            printf("Exiting program.\n");
            running = 0;
            break;
        default:
            printf("Invalid choice.\n");   
            break;
    }



return(0);
}

void getaddress (char address[], int alreadyThere)
{
    printf("Please enter your address:\n");

}