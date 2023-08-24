//xander maniaci
//reading file data character by character to display on screen
#include<iostream>
#include<fstream>
using namespace std;

int main(){
   // variables needed
   string fileName, aWord;
   char letter;
   int numChars = 0, numUppercase = 0, numPeriods = 0, wordcounter = 0;
   ifstream inFile; // an incoming file stream variable
   cout<<" Enter another filename or type quit to exit: ";
   cin>>fileName;
    do{

        // call open function to locate and access a file using  a file name.
        //inFile.open(fileName); only use this for compliers that use c++11
        inFile.open(fileName.c_str());// for run time input for file name prior to c++11
        // bonds a valid file to the incoming stream to the incoming stream variable
        //file not found validation routine
        while(!inFile){
                inFile.clear();//clears the failstate of the incoming file stream.
                inFile.ignore(200, '\n');// clears buffer of the failstate of the incoming file stream
                cout<<"File note found. Enter the correct filename: ";
                cin>>fileName;
                inFile.open(fileName.c_str());


        }
        //loop to read file data character by character


        cout<<"***********************"<<endl;
        while(inFile){// is there more data to read
        inFile.get(letter);//read the next character
        cout<<letter;
        }
        cout<<endl;
        inFile.close();// to close file before opening a new one.

        // reopen inFile stream AND USE ANOTHER LOOP TO READ FILE DATA WORD BY WORD
        inFile.open(fileName.c_str());
        inFile >> aWord;// read the first word - priming read
        while (inFile){
                wordcounter++;
            inFile >> aWord;

        }
        cout<<"***********************"<<endl;
        cout<<fileName <<" has "<< wordcounter <<" words."<<endl;
        inFile.close();
        wordcounter = 0;// reset count variable

        cout<<" Enter another filename or type quit to exit: ";
        cin>>fileName;
    }while(fileName != "quit");
    cout<<"Now exiting the program........"<<endl;

    return 0;
}
