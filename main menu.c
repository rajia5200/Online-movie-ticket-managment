
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "login.h"
#include "seat_map.h"
#include "splash_screen.h"
#include "admin_login.h"
#include <string.h>

struct play_list{
        char thetre_type[20],
         date[20],
         time[20],
         price[5],
         id[5]};

int main()
{
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

            case 2:
                registration();
                login();

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
                break;
            case 2:
                admin_registration();
                admin_login();
                input_list();
                printf("Data Stored Successfully...");
                system("cls");

            case 3:
                return 0;
        }

    }
    return 0;

}
