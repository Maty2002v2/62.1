#include <iostream>
#include <iostream>
#include <fstream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	ifstream file;
 	ofstream fileOut; 
 	
 	int liczba;
 	int min = 0;
 	int max = 0;
 	bool first = true;
 	
 	file.open("c:\liczby1.txt");
 	fileOut.open("wyjscie.txt");
 	
 	 if (file.good()) 
	 {
 	 	while(!file.eof())
	     {
	               file>>liczba;
	               
	               if (first) {
	               	min = liczba;
	               	first = false;
	               	continue;
				   }
				   
				   if (liczba < min) 
				   {
				   	min = liczba;
				   }
				   
				   if (liczba > max) {
				   	max = liczba;
				   }
				   
	     }
		 fileOut<<"min: "<<oct<<min<<endl;
		 fileOut<<"max: "<<max<<endl;
		 cout<<hex;
		 file.close();
		 fileOut.close();
	 }
     
	return 0;
}
