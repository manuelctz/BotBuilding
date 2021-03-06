#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
    vector<string> pos_col;
    vector<string> pos_row;
    bool not_find = true;
    
    pair<int,int> p;
    pair<int,int> m;
    
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(grid[i][j] != '-' && grid[i][j] != 'm'){
                p.first = i;
                p.second = j;
            }
        }
    }
    
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            if(grid[i][j] != '-' && grid[i][j] != 'p'){
                m.first = i;
                m.second = j;
            }
        }
    }
    
    while(m!=p){
        if(m.first > p.first){
            m.first = m.first-1;
            cout<<"UP"<<endl;
        }
        else if(m.first < p.first){
            m.first = m.first+1;
            cout<<"DOWN"<<endl;
        }
        if(m.second > p.second){
            m.second = m.second-1;
            cout<<"LEFT"<<endl;
        }
        else if(m.second < p.second){
            m.second = m.second +1;
            cout<<"RIGHT"<<endl;
        }
    }
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
