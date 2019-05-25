#include <iostream>
#include <conio.h>
#include <iomanip>

 using namespace std;

 
int
main () 
{
  
char text[]  {  'e', 'm', 'a', 'g', '/0'};
  
 
 
 
char reverse[5];
  
 
reverse[0] = text[5];
  
reverse[1] = text[4];
  
reverse[2] = text[3];
  
reverse[3] = text[2];
  
reverse[4] = text[1];
  
reverse[5] = text[0];
  
 
 
cout << reverse << endl;
  
cout << " The size of the array is: " << sizeof (reverse) << endl;
  
 
return 0;

 
}
