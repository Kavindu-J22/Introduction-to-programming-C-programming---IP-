# include <stdio.h>
int main(void)
{
int n[5] = { 1 };
int i;
printf("%s%13s\n", "Element","Value");
//output contents of array n in a tabular format
for( i = 0; i < 5; ++i)
printf("%7d %13d\n", i , n[ i ]); 
}
