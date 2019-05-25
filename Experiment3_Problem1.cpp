#include <iostream>
#include <conio.h>
#include <iomanip>

 using namespace std;

 
intmain () 
{
  double smallest, largest, average;
  int numberElements;
  numberElements = 10;
  average = 0.0;
  int num[numberElements];
  
for (int j = 0; j < numberElements; j++)
    
    {
      
cout << " Please enter a number " << j + 1 << endl;
      
cin >> num[j];
      
 
if (j == 0)
	
	{
	  
smallest = num[j];
	  
largest = num[j];
	  
average = average + num[j] / numberElements;
	
}
      
      else
	
	{
	  
if (smallest > num[j])
	    
	    {
	      
smallest = num[j];
	    
}
	  
if (largest < num[j])
	    
	    {
	      
largest = num[j];
	    
}
	  
average = average + num[j] / numberElements;
	
}
    
}
  
 
cout << "  The smallest number is: " << smallest << endl;
  
cout << " The largest number is: " << largest << endl;
  
cout << " The average of all the numbers are: " << average << endl;
  
 
_getch ();
  
return 0;

}
