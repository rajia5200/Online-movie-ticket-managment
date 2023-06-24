
struct login{
  char first_name[20],
       last_name[20],
       username[20],
       password[20]};


void registration(void)
{
    FILE *login;
    login = fopen("login.txt","a");
    struct login x;

    printf("Enter First Name : ");
    scanf("%s",x.first_name);
    printf("Enter Last Name : ");
    scanf("%s",x.last_name);
    printf("Enter Username : ");
    scanf("%s",x.username);
    printf("Enter Password : ");
    scanf("%s",x.password);

    fwrite(&x,sizeof(x),1,login);

    fclose(login);

    printf("Now,your username is your UserID\n");
    printf("Now login with UserID and Password");


    system("CLS");
}

void login(void)
{
     char username[20],
        password[20];

    FILE *login;
    login =  fopen("login.txt","r");
    printf("UserID : ");
    scanf("%s",&username);
    printf("Password : ");
    scanf("%s",&password);

    struct login x;

    fread(&x,sizeof(x),1,login);

    if(strcmp(username,x.username) == 0 && strcmp(password,x.password)==0)
        {
            printf("Login Successful \n");
        }else
        {
        printf("Incorrect UserID and Password...\n");
        printf("Try Again\n");
        }

    fclose(login);

}

