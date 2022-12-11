# include <stdio.h>
int main(void)
{
FILE *cfPtr;
char ID[10];
char name[ 30];
double avgMarks;
cfPtr = fopen("marks.dat", "r");
if (cfPtr == NULL)
{
printf("File cannot be open");
return -1;
}
fscanf(cfPtr, "%s %s %lf", ID, name, &avgMarks);
printf ("%s %s %lf", ID, name, avgMarks);
fclose(cfPtr);
return 0;
}
