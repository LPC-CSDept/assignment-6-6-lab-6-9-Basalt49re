//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )
void maxmin(int n1, int n2, int n3, int &max, int &min){
   if (n1>n2 && n1>n3) 
   {
      max = n1;
   } else if (n2>n3) 
   {
      max = n2;
   } else 
   {
      max = n3;
   }

    int small = n1;
    if (n2 < min)
     min=n2;
    if(n3 < min)
     min=n3;
}