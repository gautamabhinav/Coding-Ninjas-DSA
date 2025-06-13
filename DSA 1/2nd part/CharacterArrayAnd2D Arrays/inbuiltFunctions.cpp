#include <iostream>
using namespace std;
#include <cstring>

void printAllPrefixes(char input[]){
    // i represents end index of my prefix
    for(int i=0;input[i]!='\0';i++){
        //j represents start index of my prefix
        for(int j=0;j<=i;j++){
            cout<<input[j];
        }
        cout<<endl;
    }
}

int main(){
    // char input[100];
    // cin>>input;

    char input1[100]="abcd";
    printAllPrefixes(input1);

/*
    char input2[100]= "xy";

    cout<<"Before coping: ";
    cout<< "Input 1: "<<input1 <<endl;
    cout<< "Input 2: "<<input2 <<endl;

    //strcpy(input1,input2);
    //strcpy(input1,"hello");

    //strncpy(input1,input2,3)
    strncpy(input1,input2,4);

    cout<<"After coping: ";
    cout<< "Input 1: "<<input1 <<endl;
    cout<< "Input 2: "<<input2 <<endl;
*/

    //char input1[100], input2[100];
    //cin>>input1;
    //cin>>input2;

/*
    if(strcmp(input1,input2)==0){
        cout<<"true"<< endl;
    }
    else{
        cout<<"false"<<endl;
    }
*/

    /*
    int len=strlen(input);
    cout<< "Length : "<< len <<endl;
    */
}



//2) compare 2 strings     strcmp(input1, input2)
// 0:  equal       non-zero : non equal

// 1) strlen functions     strlen(string_name);

//3) copy strings           a ->hello 
//strcpy(destination_string,source_string)

//a=abc;
//b=def;

// 4)string n copy
// strncpy(destination_string,source_string,n);
// strncpy(input1,input2,3);