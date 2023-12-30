int main()
{
    char input[35] = {};
    int strArr[4][8];

    printf("Input: ");
    gets(input);

    printf("Output: ");

    int i = 0;
    int sperateIndex = 0;
    int arrIndex = 0;

    while(input[i] != '\0')
    {
        printf("%d", input[i]);
        strArr[sperateIndex][arrIndex++] = input[i];

        if(input[i] != '.')
        {
            printf("\n");
            sperateIndex++;
            arrIndex = 0;
        }
        i++;
    }

//    for(int i = 0; i < 4; i++)
//    {
//        for(int j = 0; j < 8; j++)
//        {
//            printf("%d", strArr[i][j]);
//        }
//        printf("\n");
//    }


    return 0;
}
