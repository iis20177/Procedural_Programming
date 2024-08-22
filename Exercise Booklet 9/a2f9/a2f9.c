#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genlib.h"

#define M 100

typedef struct{
    char name[30];
    int apousies;
}studentT;

void readInput(FILE*infile, studentT students[], int *pApousies, int *pStudents);
void WriteOutput(FILE* outfile, int size, studentT students[], int total);

int main(){
    char infilename[30];
    char outfilename[30];
    FILE*infile;
    FILE*outfile;

    printf("Dwse onoma arxeiou eisodou:");
    gets(infilename);
    infile = fopen(infilename,"r");

    if(infile==NULL){
        printf("Cannot open input file %s\n", infilename);
        exit(1);
    }


    printf("Dwse onoma arxeiou eksodou:");
    gets(outfilename);
    outfile = fopen(outfilename,"w");

    studentT students[M];
    int numberOfStudents, numberOfApousies;
    readInput(infile, students, &numberOfApousies, &numberOfStudents);

    WriteOutput(outfile, numberOfApousies, students, numberOfStudents);

    fclose(infile);
    fclose(outfile);

    return 0;
}

void readInput(FILE*infile, studentT students[], int *pApousies, int *pStudents){
    int nscan, apousies, line;
    char name[30], comments[68], termch;

    *pApousies = 0;
    *pStudents = 0;

    while(TRUE){
        nscan = fscanf(infile, "%30[^,], %d, %68[^\n]%c", name, &apousies, comments, &termch);

        if (nscan==EOF)
            break;

        line++;
        if (nscan!=4 || termch!='\n'){
            printf("Error in line %d. Program termination\n", line);
            exit(1);
        }

        if (apousies>100){
            strcpy(students[*pApousies].name, name);
            students[*pApousies].apousies = apousies;
            (*pApousies)++;
        }
        (*pStudents)++;
    }

}

void WriteOutput(FILE* outfile, int size, studentT students[], int total){
    int i;

    fprintf(outfile, "%-30s%-9s\n", "ONOMATEPWNYMO", "APOYSIES");
    for (i=0; i<39; i++)
        fputc('-', outfile);
    fputc('\n', outfile);

    for (i=0; i<size; i++){
        fprintf(outfile, "%-30s%9d\n", students[i].name, students[i].apousies);
    }

    for (i=0; i<39; i++)
        fputc('-', outfile);
    fputc('\n', outfile);


    fprintf(outfile,"%-30s%9d\n", "SYNOLO MATHITWN", total);
    fprintf(outfile,"%-30s%9d\n", "SYNOLO APONTWN", size);
}
