#include<iostream>
using namespace std;
int main ()
{
    int n=5;
    //line to print the upper triangle
    for(int line = 1; line <=n;  line++ ) {

        int no_of_space = (n-line );
        for(int k =0 ; k< no_of_space ; k++)
        {
            cout<<" ";  
        }
        int no_of_chars = 2*line - 1  ;
        for(int j=0 ; j < no_of_chars; j++){
    
        cout<<(char)('A' + j);
        }
        cout<<"\n"; 
    
    }
     
      
}   