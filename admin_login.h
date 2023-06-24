 struct admin_login{
       char ID[20],
       password[20]};

 void browseThetre()
{
    struct play_list{
        char thetre_type[20],
         date[20],
         time[20],
         price[5],
         id[5]};
    int ticket;
    int  xcount=0;

    FILE *play_list;
    play_list = fopen("play_list.txt","a");
    struct play_list x;

    printf("Enter Thetre id to buy ticket: ");
    scanf("%d",&ticket);
    if(ticket == 1001)
        {
            system("cls");
            printf("Performance  : Musical Theatre.\n");
            printf("Date         : 27.06.2023\n");
            printf("Time         : 12.00 p.m\n");
            printf("Ticket Price : 500 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

        }
    else if(ticket == 1002)
    {
        system("cls");
            printf("Performance  : Melodrama.\n");
            printf("Date         : 27.06.2023\n");
            printf("Time         : 6.00 p.m\n");
            printf("Ticket Price : 600 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }
    else if(ticket == 1003)
    {
        system("cls");
            printf("Performance  : Immersive.\n");
            printf("Date         : 28.06.2023\n");
            printf("Time         : 12.00 p.m\n");
            printf("Ticket Price : 500 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            printf("\n");
            seat_booking();
            pay_menu();


            xcount++;

    }
    else if(ticket == 1004)
    {
        system("cls");
            printf("Performance  : Comedy.\n");
            printf("Date         : 28.06.2023\n");
            printf("Time         : 6.00 p.m\n");
            printf("Ticket Price : 600 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }

    else if(ticket == 1005)
    {
        system("cls");
            printf("Performance  : Autobiographical.\n");
            printf("Date         : 30.06.2023\n");
            printf("Time         : 12.00 p.m\n");
            printf("Ticket Price : 600 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }

    else if(ticket == 1006)
    {
        system("cls");
            printf("Performance  : Farce.\n");
            printf("Date         : 30.06.2023\n");
            printf("Time         : 6.00 p.m\n");
            printf("Ticket Price : 700 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }

    else if(ticket == 1007)
    {
        system("cls");
            printf("Performance  : Tragedy.\n");
            printf("Date         : 01.07.2023\n");
            printf("Time         : 12.00 p.m\n");
            printf("Ticket Price : 500 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }

    else if(ticket == 1008)
    {
        system("cls");
            printf("Performance  : Solo.\n");
            printf("Date         : 01.07.2023\n");
            printf("Time         : 6.00 p.m\n");
            printf("Ticket Price : 500 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }

    else if(ticket == 1009)
    {
        system("cls");
            printf("Performance  : Historic.\n");
            printf("Date         : 02.07.2023\n");
            printf("Time         : 12.00 p.m\n");
            printf("Ticket Price : 500 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }

    else if(ticket == 1010)
    {
        system("cls");
            printf("Performance  : Epic.\n");
            printf("Date         : 03.07.2023\n");
            printf("Time         : 12.00 p.m\n");
            printf("Ticket Price : 500 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }


    else if(ticket == 1011)
    {
        system("cls");
            printf("Performance  : Ballet.\n");
            printf("Date         : 03.07.2023\n");
            printf("Time         : 6.00 p.m\n");
            printf("Ticket Price : 500 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }


    else if(ticket == 1012)
    {
        system("cls");
            printf("Performance  : Opera.\n");
            printf("Date         : 04.07.2023\n");
            printf("Time         : 6.00 p.m\n");
            printf("Ticket Price : 500 tk\n");

            system("cls");
            printf("Now...\n");
            printf("Please book your seat...\n");
            seat_booking();
            pay_menu();


            xcount++;

    }
}

 void admin_registration(void){

    FILE *admin_login;
    admin_login = fopen("admin_login.txt","a");
    struct admin_login x;

    printf("Enter your ID : ");
    scanf("%s",x.ID);
    printf("Enter Password : ");
    scanf("%s",x.password);

    fwrite(&x,sizeof(x),1,admin_login);

    fclose(admin_login);

    printf("Now,your ID is your UserID\n");
    printf("Now login with UserID and Password");

    system("CLS");
    }

    void admin_login(void){
        char ID[20],
        password[20];

    FILE *admin_login;
    admin_login = fopen("admin_login.txt","r");
    printf("UserID : ");
    scanf("%s",&ID);
    printf("Password : ");
    scanf("%s",&password);

    struct admin_login x;

    fread(&x,sizeof(x),1,admin_login);

    if(strcmp(ID,x.ID) == 0 && strcmp(password,x.password)==0)
        {
            printf("Login Successful \n");
        }else
        {
        printf("Incorrect UserID and Password...\n");
        printf("Try Again\n");
        }
    fclose(admin_login);
    system("cls");
    }

    void input_list(void){

        struct play_list{
        char thetre_type[20],
         date[20],
         time[20],
         price[5],
         id[5]};


    FILE *play_list;
    play_list = fopen("play_list.txt","a");
    struct play_list x;

    int number_of_Thetre;
    printf("Input the number of play you want to input : ");
    scanf("%d",&number_of_Thetre);

    for(int i = 1 ; i<= number_of_Thetre ; i++)
    {
        printf("List %d: \n",i);
        printf("Enter Thetre ID : ");
        scanf("%s",x.id);
        fflush(stdin);
        printf("\nEnter Thetre Name : ");
        scanf("%s",x.thetre_type);
        fflush(stdin);
        printf("\nEnter Date       : ");
        scanf("%s",x.date);
        fflush(stdin);
        printf("\nEnter Time       : ");
        scanf("%s",x.time);
        fflush(stdin);
        printf("\nEnter Ticket Price : ");
        scanf("%s",x.price);
        printf("\n");
        fflush(stdin);

    fwrite(&x,sizeof(x),1,play_list);

    }
    fclose(play_list);

    system("CLS");
    }


void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void pay_menu(void){
    system("cls");
   printf("Payment Options:\n");

    int option,
        bkash_number,
        nagad_number,
        transaction_id;
    menu:
    printf("1. Visa.\n");
    printf("2. Paypal.\n");
    printf("3. Nagad.\n");
    printf("4. Bkash.\n");
    printf("5. Return to main menu.\n");
    printf("Input your payment option: \n");
    scanf("%d",&option);
    system("cls");

    switch(option){
    case 1:
        printf("Sorry, Visa Payment is not available right now...\n");
        printf("Sorry for this inconvenience...\n");
        printf("Try to make payment using Nagad or Bkash\n");
    goto menu;

    case 2:
        printf("Sorry, Paypal Payment is not available right now...\n");
        printf("Sorry for this inconvenience...\n");
        printf("Try to make payment using Nagad or Bkash\n");
    goto menu;

    case 3:
        printf("Input your Nagad Number : ");
        scanf("%d",&nagad_number);
        system("cls");
        printf("Input your payment Transaction ID : ");
        scanf("%d",&transaction_id);
        system("cls");

    case 4:
        printf("Input your Bkash Number : ");
        scanf("%d",&bkash_number);
        system("cls");
        printf("Input your payment Transaction ID : ");
        scanf("%d",&transaction_id);
        system("cls");

    case 5:
        return 0;
    }
}

void play_list(void){

    struct play_list{
        char thetre_type[20],
         date[20],
         time[20],
         price[5],
         id[5]};

   int i=0,j;
    system("cls");

    gotoxy(1,1);
    printf("*************************** ARTS LIST *************************");
    gotoxy(2,3);

    printf("  ID       THETRE TYPE        DATE          TIME         PRICE  \n");
    printf("----------------------------------------------------------------");
    gotoxy(1,4);
    j=6;

     FILE *play_list;
     play_list = fopen("play_list.txt","r");
    rewind(play_list);
    struct play_list x;

    while(fread(&x,sizeof(x),1,play_list)==1)
    {
        gotoxy(3,j);
        printf("%s",x.id);
        gotoxy(13,j);
        printf("%s",x.thetre_type);
        gotoxy(32,j);
        printf("%s",x.date);
        gotoxy(46,j);
        printf("%s",x.time);
        gotoxy(59,j);
        printf("%s",x.price);

        //printf("\n\n");
        j++;
    }
    fclose(play_list);
    gotoxy(1,j+1);

}

void admin_login_menu(void){
    int admin_option;
    printf("If you are forgot password or a new employee than choose registration.\n");
    printf("1. Registration.\n");
    printf("2. Login.\n");
    printf("Choose option: ");
    scanf("%d",&admin_option);
    system("cls");

    switch(admin_option){
    case 1:
        admin_registration();
        admin_login();
        input_list();

    case 2:
        admin_login();
        input_list();
    }
}
