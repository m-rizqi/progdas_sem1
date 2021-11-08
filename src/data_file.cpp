#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>

int main()
{
    FILE *infile, *outfile;
    infile = fopen("src//data.txt","r");
    outfile = fopen("src//result.txt","w");
    double miles, kms;
    if (infile==NULL)
    {
        printf("sorry not found");
        exit(0);
    }
    int input_status = fscanf(infile,"%lf",&miles);
    while (input_status != EOF)
    {
        /* code */
        kms = 1.9 * miles;
        printf("%f",kms);
        fprintf(outfile, "That equals %.2f kilometers.\n", kms);
        input_status = fscanf(infile, "%lf", &miles);
    }
    fclose(infile);
    fclose(outfile);

    return 0;
}
