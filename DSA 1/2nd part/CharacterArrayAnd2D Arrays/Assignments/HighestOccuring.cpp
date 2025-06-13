#include <climits>
char HighestOccuringChar(char str[]){

    int freq[256] = {0};

    for(int i=0;str[i]!= '\0';i++){
        freq[str[i]]++;
    }


    int max= INT_MIN;
    int max_index = INT_MIN;

    for(int i=0;i<256;i++){
        if(freq[i] > max){
            max = freq[i];
            max_index = i;
        }
    }
    return max_index;
}


vector <char> HighestOccuringChar(char str[]){

    int freq[256] = {0};

    vector<char>ans;

    for(int i=0;str[i]!= '\0';i++){
        freq[str[i]]++;
    }


    int max= INT_MIN;
    int max_index = INT_MIN;

    int secMax = INT_MIN;
    int secMaxIndex = INT_MIN;

    for(int i=0;i<256;i++){
        if(freq[i] > max){
            secMax=max;
            max = freq[i];
            secMaxIndex=maxIndex;
            max_index = i;
        }
        else if(freq[i] > secMax){
            secMax=freq[i];
            secMaxIndex=i;
        }
    }
    ans.push_back(maxIndex);
    ans.push_back(secMaxIndex);
    return ans;
}



#include <bits/stdc++.h>
using namespace std;

int main(){
    int size = 1e6;
    char str[size];

    cin>>str;
    cout << HighestOccuringChar(str);
}





// abdefgbabfba

// b

string highestOccuringCharacter(string &str){

    int freq[256] = {0}; 

    for(int i=0; str[i]!='\0' ;i++){
        freq[str[i]]++;
    }

    int max = INT_MIN;
    int max_Index = INT_MIN;

    for(int)
}


#include <bits/stdc++.h>
using namespace std;

int main(){
    int size = 1e6;

    string str;
    cin >> str;

    str = highestOccuringCharacter(str);

    cout << str <<endl;
}




