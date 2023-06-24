

int seat_booking(void)
{
    int a[17]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},
        b[7]= {0,'A','B','C','D','E','F'};
    char buffer[1000];

    for(int i=1; i <= 6; i++)
    {
        for (int j=1 ; j <= 7 ; j++)
        {
            printf("|%c%d|\t",b[i],a[j]);
        }
        printf("\t");
        for (int j=9 ; j <= 14 ; j++)
        {
            printf("|%c%d|\t",b[i],a[j]);
        }
        printf("\n\n\n");
    }

    FILE *seat = fopen("seat.txt", "r");
//    char buffer[1000];
    int length = fread(buffer, sizeof(char), 1000, seat);
    fclose(seat);

    for (int i = 0; i < length; i++) {
        buffer[i] = toupper(buffer[i]);
    }
    printf("Previously Booked Seats are : %s", buffer);

    char seat_number[3];

    seat;
    seat = fopen("seat.txt","a");
    int y;

    printf("\nInput Number of Seat you want to book : ");
    scanf("%d",&y);

    printf("Input %d Seat Number from the Seat Plan : ",y);
    for(int i= 0 ; i < y ; i++)
    {
        scanf("%s",seat_number);
        fprintf(seat, "%s\t", seat_number);
    }
    fclose(seat);
}
