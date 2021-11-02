//Use of Sizeof

#include <stdio.h>
#include <conio.h>

 int main()
 { 
   int Num = 0;
   char ch = 'Q';
   
   printf("\n Size for integer Variable Num in this Environment = %d.",sizeof(Num));
   printf("\n Size for character Variable ch in this Environment = %d.",sizeof(ch));
    
   printf("\n ================***================");
   
   printf("\n Size for integer in this Environment = %d.",sizeof(int));
   printf("\n Size for character in this Environment = %d.",sizeof(char));
   printf("\n Size for short in this Environment = %d.",sizeof(short int));
   printf("\n Size for float in this Environment = %d.",sizeof(float));
   printf("\n Size for double in this Environment = %d.",sizeof(double));
  
  getch ();
  return 0;
 }