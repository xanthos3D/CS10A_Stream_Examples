//5.1 Collatz's hypothesis
//xander maniaci
#include<iostream>
using namespace std;

int main(){
int input = 0, steps = 0;
    cout<<"Enter a non negative number greater than 0: ";
    cin>>input;
    while(!cin || input <=0){
        cin.clear();// clears the fail state of the cin stream
        cin.ignore(200, '\n');// clears keyboard buffer for any extra characters
            //prompts user for another input
        cout<<"Invalid value input"<<endl;
        cout<<"Enter a non negative number greater than 0: ";
        cin>>input;
    }
    while(input != 1){
        if(input% 2 == 0){
        input /= 2;
        cout<< input<<endl;
        steps++;

        }else{
        input = 3 * input + 1;
        cout<< input<<endl;
        steps++;
        }

    }
cout<<input<<endl;
cout<<"steps = "<< steps<<endl;
return 0;
}
