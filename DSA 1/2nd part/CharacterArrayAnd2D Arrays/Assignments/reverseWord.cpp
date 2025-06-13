#include <bits/stdc++.h>
using namespace std;

void reverse(char input[],int startIndex,int endIndex){
    int i=startIndex;
    int j=endIndex;

    while(i<j){
        std:: swap(input[i],input[j]);
        i++;
        j--;
    }
}

void reverseWord(char input[]){

    int i=0;
    int len=0;
    while(input[i]!='\0'){
        len++;
        i++;
    }

    int start=0,end=len-1;
    while(start<end){
        std:: swap(input[start],input[end]);
        start++;
        end--;
    }

    int startIndex=0;
    for(int i=0;i<len+1;i++){
        if(input[i]==' ' || '\0'){
            
            reverse(input,startIndex,i-1)
            startIndex=i+1;
        }
    }
}


int main(){
    char input[1000];
    cin.getline(input,1000);
    reverseWord(input);
    cout<< input <<endl;
}



void reverse(char input[], int startIndex, int endIndex){
    int i=startIndex;
    int j=endIndex;

    while(i<j){
        swap(input[i], input[j]);
        i++;
        j--;
    }
}




void reverseStringWordWise(char input[]){

    int len=0;
    int i=0;

    while(input[i]!='\0'){
        len++;
        i++;
    }

    int start=0, end=len-1;
    while(start<end){
        swap(input[start],input[end]);
        start++;
        end--;
    }

    int startIndex=0;
    for(int i=0;i<len+1;i++){

        if(input[i]==' ' || input[i]=='\0'){
            reverse(input,startIndex,i-1);
            startIndex=i+1;
        }
    }

}

#include<string.h>
#include<cstring>

void reverse(char input[],int startindex,int endindex){
    int i=startindex;
    int j=endindex;
    while(i<j){
        std::swap(input[i],input[j]);
        i++;
        j--;
    }



    }
void reverseStringWordWise(char input[]) {
    // Write your code here
    
    int len=0;
    int i=0;
    
    while(input[i]!='\0'){
        len++;
        i++;
    }
    
    int start=0, end=len-1;
    while(start<end){
       std:: swap(input[start],input[end]);
        start++;
        end--;
    }
    //
       int startindex=0;

    for(int i=0;i<len+1;i++){
        if(input[i]==' ' || input[i]=='\0'){

            reverse(input,startindex,i-1);
            startindex=i+1;
        }

    }
    
}






#include <bits/stdc++.h>
using namespace std;

int main(){
    char input[1000];
    cin.getLine(input,1000);
    reverseStringWordWise(input);
    cout<<input<<endl;
}