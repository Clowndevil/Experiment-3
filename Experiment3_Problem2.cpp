#include <iostream>
#include <conio.h>
#include <iomanip>

 
using namespace std;

 
int
main () 
{
  
int provinceA[7], provinceB[7], provinceC[7];
  
 
for (int j = 0; j < 7; j++)
    
    {
      
cout << " Province A, Day " << j + 1 << endl;
      
cin >> provinceA[j];
  
} 
 
for (int j = 0; j < 7; j++)
    
    {
      
cout << " Province B, Day " << j + 1 << endl;
      
cin >> provinceB[j];
  
} 
 
for (int j = 0; j < 7; j++)
    
    {
      
cout << "Province C, Day " << j + 1 << endl;
      
cin >> provinceC[j];
  
} 
 
for (int j = 0; j < 7; j++)
    
for (int i = 0; i < 7; i++)
      
      {
	
cout << "Province A, Day " << i + 1 << endl;
	
cout << provinceA[j] << endl;
  
} 
 
for (int j = 0; j < 7; j++)
    
for (int i = 0; i < 7; i++)
      
      {
	
cout << "Province B, Day " << i + 1 << endl;
	
cout << provinceB[j] << endl;
  
} 
 
for (int j = 0; j < 7; j++)
    
for (int i = 0; i < 7; i++)
      
      {
	
cout << "Province C, Day " << i + 1 << endl;
	
cout << provinceC[j] << endl;
      
} 
 
return 0;

}
