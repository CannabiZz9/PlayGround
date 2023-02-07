#include <iostream>
#include <string>

 using namespace std;

 
int
main ()
{
  

string N = "Hello World";
int j =0;
string M = "";
  
  
    for(char i = 0; i < 126 ; i++){
        
        if(M != N){
            if(i != N[j]){
                cout << M << i << "\n";
            }
            else{
                cout << M << i;
                M += i;
                i = 0;
                j++;
            }
        }    
        else{
            break;
        }
    }


}
