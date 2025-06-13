#include <iostream>
using namespace std;

int length(char input[]){
    int count=0;
    for(int i=0;input[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverseString(char input[]){
    int len=length(input);
    int i=0,j=len-1;
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}

int main(){
/*    char name[100];
    cout<<"Enter your name : ";
    cin>>name;
/*    
    name[4]='x';
    name[3]='d';
    name[1]='\0';
    cout<<"Name  : "<< name <<endl;

*/
/*
    cout<<"length: "<<length(name) << endl;

*/

//cin.getline(string_name,len)
char a[10];
//cin.getline(input,100);

    char input[100];
    //cin>>input;
    cin.getline(input,100);
    //cin.getline(input,100,'o');
    reverseString(input);
    cout<<input<<endl;

    //cin.getline(a,len);
    //char a[10];

    //cin.getline(syting_name,len,delimiter)
    //delimiter value is /n ;

    //cin.getline(input,100,'o');
}




// 1) input -> reverse

// hello world
// dlrow olleh