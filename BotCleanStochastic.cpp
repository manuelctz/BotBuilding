#include<iostream>
#include<vector>
using namespace std;

void nextMove(int posr, int posc, vector <string> board) {
    int bot[2];
    bot[0] = posr;
    bot[1] = posc;
    int cell[2];
        
    for(int i=0; i<5; ++i){
        for(int j=0; j<5; ++j){
            if(board[i][j] == 'd'){
                cell[0] = i;
                cell[1] = j;
            }
        }
    }
    
    if(cell[1] < bot[1]){
        cout<<"LEFT"<<endl;
    }
    else if(cell[1] > bot[1]){
        cout<<"RIGHT"<<endl;
    }
    else if(cell[0] < bot[0]){
        cout<<"UP"<<endl;
    }
    else if(cell[0] > bot[0]){
        cout<<"DOWN"<<endl;
    }
    else{
        cout<<"CLEAN"<<endl;
    }
}

int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;
        cin >> s;
        board.push_back(s);
    }
    nextMove(pos[0], pos[1], board);
    return 0;
}
