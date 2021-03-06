#include <iostream>
#include <vector>
using namespace std;

void nextMove(int n, int r, int c, vector <string> grid){
    //your logic here
    pair<int,int> m; //declare pair for bot position
    pair<int,int> p; //declare pair for princess position
    m.first = r, m.second = c; //store bot's initial position
    //get princess initial position
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(grid[i][j] != '-' && grid[i][j] != 'm'){
                p.first = i;
                p.second = j;
            }
        }
    }
    
    if(m.second > p.second){
        if(m.first == p.first)
            cout<<"LEFT"<<endl;
        else{cout<<"LEFT"<<endl;}
    }
    else if(m.second < p.second){
        if(m.first == p.first)
            cout<<"RIGHT"<<endl;
        else{cout<<"RIGHT"<<endl;}
    }
    else if(m.first > p.first){
        if(m.second == p.second)
            cout<<"UP"<<endl;
        else{cout<<"UP"<<endl;}
    }
    else if(m.first < p.first){
        if(m.second == p.second)
            cout<<"DOWN"<<endl;
        else{cout<<"DOWN"<<endl;}
    }
}

int main(void) {

    int n, r, c;
    vector <string> grid;

    cin >> n;
    cin >> r;
    cin >> c;

    for(int i=0; i<n; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    nextMove(n, r, c, grid);
    return 0;
}
