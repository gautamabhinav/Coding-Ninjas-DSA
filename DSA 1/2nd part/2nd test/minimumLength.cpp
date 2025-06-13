// this is test string

// is


void minLength (char ch[] , char output[]){

    int len = strlen(ch);
    int i=0, j=0 ;

    int min_length = len , current_start_index = 0;

    while(j <= len){

        if(ch[j] != ' ' && j <len){
            j++;
        }
        else{
            int current_index = j-i;

            if(current_index < min_length){
                min_length = current_index;
                current_start_index = i;
            }
        }
        j++;
        i=j;
    }

    for(int i=0 ; i< min_length ;i++){
        output[i] = ch[current_start_index++];
    }
}























#include <bits/stdc++.h>
using namespace std;

int main(){
    ch[10000] , output[10000];
    cin.getLine(ch, 10000);

    minLength(ch,output);
    cout<< output <<endl;
}



#include <bits/stdc++.h>
using namespace std;

int main(){
    char ch[10000] , output[10000];
    cin.getLine(ch,10000);

    minLength(ch,output);
    cout<< output <<endl;
}