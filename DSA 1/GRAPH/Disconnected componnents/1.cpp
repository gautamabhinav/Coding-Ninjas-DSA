// connected components

#include <bits/stdc++.h>
using namespace std;


void printDFS(int **edges ,int n , int sv , bool* visited) {
    cout << sv << endl;
    visited[sv] = true;
    for(int i =0;i<n;i++) {
        if(i == sv) {
            continue;
        }
        if(edges[sv][i] == 1) {
            if(visited[i]) {
                continue;
            }
            printDFS(edges,n,i , visited);
        }
    }
}

void printBFS(int **edges , int n , int sv) {
    queue<int> pendingVertices;
    bool * visited = new bool[n];
    for(int i = 0 ; i <  n ;i++ ) {
        visited[i] = false;
    }
    pendingVertices.push(sv);
    visited[sv] = true;
    while(!pendingVertices.empty()) {
        int currentVertex = pendingVertices.front();
        pendingVertices.pop();
        cout << currentVertex << endl;
        for(int i =0 ;i <n ;i++) {
            if(i == currentVertex) {
                continue;
            }
            if(edges[currentVertex][i] == 1 && !visited[i]) {
                visited[i] = true;
            }
        }
    }
    delete[] visited;
}

void BFS(int ** edges , int n) {
    bool * visited = new bool[n];
    for(int i = 0 ; i  < n ; i ++) {
        visited[i] = false;
    }
    for(int i = 0 ; i < n ; i++) {
        if(!visited[i]){
            printBFS(edges,n,i,visited);
        }
    }
    delete [] visited;
}

void DFS(int** edges , int n) {
    bool * visited = new bool[n];
    for(int i = 0 ; i  < n ; i ++) {
        visited[i] = false;
    }
    for(int i = 0 ; i < n ; i++) {
        if(!visited[i]){
            printDFS(edges,n,i,visited);
        }
    }
    delete [] visited;
}



int main() {
    int n,e;
    cin >> n >> e;
    int ** edges = new int*[n];
    for(int i = 0;i < n;i++) {
        edges[i] = new int[n];
        for(int j = 0; j< n ;j++) {
            edges[i][j] = 0;
        }
    }
    for(int i = 0 ; i < e ; i++) {
        int f,s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }


    cout << "DFS" << endl;
    DFS(edges , n);

    cout << "BFS" << endl;
    BFS(edges , n);

    // Delete all the memory
    for(int i = 0;i < n ;i ++) {
        delete[]  edges[i] ;
    }
    delete[] edges;
}