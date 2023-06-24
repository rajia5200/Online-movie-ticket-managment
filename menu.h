#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "login.h"
#include "seat_map.h"
#include "splash_screen.h"
#include "admin_login.h"
#include <string.h>

void conclusion(void){
char ch[40] = "Rajia Sultana";
    int i;
    gotoxy(23,7);
    for(i=0;i<strlen(ch);i++)
    {
        Sleep(45);
        printf("%c",ch[i]);
    }
    strcpy(ch,"ID : 2312258042");
    gotoxy(23,8);
    for(i=0;i<strlen(ch);i++)
    {
        Sleep(45);
        printf("%c",ch[i]);
    }
    strcpy(ch,"1st Semester,Department of CSE");
    gotoxy(15,9);
    for(i=0;i<strlen(ch);i++)
    {
        Sleep(45);
        printf("%c",ch[i]);
    }
    strcpy(ch,"North South University");
    gotoxy(19,10);
    for(i=0;i<strlen(ch);i++)
    {
        Sleep(45);
        printf("%c",ch[i]);
    }


    gotoxy(10,13);
    printf("Thank you for using my console application");
    for(i=3;i>=0;i--)
    {
        Sleep(1000);
        gotoxy(16,15);
        printf("Exiting in %d second...........>",i);
    }

    exit(0);
}

struct play_list{
        char thetre_type[20],
         date[20],
         time[20],
         price[5],
         id[5]};

void menu(void){
    introduction();
    int option,
        user_option,
        admin_option;

    printf("************************** Main Menu ************************\n \n");
    printf("-------------------------------------------------------------\n \n");
    printf("Login in as...\n");
    printf("1. User.\n");
    printf("2. Admin.\n");
    printf("3. Exit.\n");
    printf("Enter option: ");
    scanf("%d",&option);
    system("cls");

    switch(option){
    case 1:
        printf("************************** User Portal ************************\n \n");
        printf("---------------------------------------------------------------\n");

        printf("1. Login.\n");
        printf("2. Sign Up.\n");
        printf("3. Go Back.\n");
        printf("Enter Option :  ");
        scanf("%d",&user_option);
        switch(user_option){
            case 1:
                login();
                play_list();
                browseThetre();
                conclusion();

            case 2:
                registration();
                login();
                conclusion();

            case 3:
                return 0;
        }

    case 2:
        printf("************************** Admin Portal ************************\n \n");
        printf("---------------------------------------------------------------\n");

        printf("1. Login.\n");
        printf("2. Sign Up.\n");
        printf("3. Go Back.\n");
        printf("Enter Option :  ");
        scanf("%d",&admin_option);
        switch(admin_option){
            case 1:
                admin_login();
                input_list();
                printf("Data Stored Successfully...");
                system("cls");
                conclusion();

                break;
            case 2:
                admin_registration();
                admin_login();
                input_list();
                printf("Data Stored Successfully...");
                system("cls");
                conclusion();

            case 3:
                return 0;
        }

    }


}

