#include <iostream>
#include<question3.h>
using namespace std;

int roll_die() {    
    int value = 1+ rand()%6;    
    return value;           
}

int main()
{
    string input;   
    srand(time(0));     
    
    while(1) {  
        cout<<"Please enter Y to roll the die, then type anyother button to stop the program.: ";
        cin>>input;   
        if(input=="Y") {    
            cout<<"Result = "<<roll_die()<<"\n";    
        }
        else {
            exit(0);   
        }
    }
    return 0;
}