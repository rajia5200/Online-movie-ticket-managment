
#include <windows.h>

void print_image(FILE *fptr)
{
    char read_string[150];

    while(fgets(read_string,sizeof(read_string),fptr) != NULL)
        printf("%s",read_string);
}

void introduction(void)
{
    ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);

    char *filename = "image.txt";
    FILE *fptr = NULL;

    if((fptr = fopen(filename,"r")) == NULL)
    {
        fprintf(stderr,"error opening %s\n",filename);
        return 1;
    }

    print_image(fptr);

    fclose(fptr);


    sleep(5);
    system("cls");

   printf("****************************************\n");
printf("*                                      *\n");
printf("*   WELCOME TO ONLINE MOVIE TICKET     *\n");
printf("*              SYSTEM                  *\n");
printf("****************************************\n");

    sleep(5);
    system("cls");
}
