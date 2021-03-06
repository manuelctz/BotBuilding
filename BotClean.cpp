#include<iostream>
#include<vector>
using namespace std;

void next_move(int posr, int posc, vector <string> board) {
    //add logic here
    if(board[posr][posc] == 'd'){
        cout<<"CLEAN"<<endl;
    }        
    else{
        for(int i=0; i<5; ++i){
            for(int j=0; j<5; ++j){
                if(board[i][j] == 'd'){
                    if(posc>j){
                        cout<<"LEFT"<<endl;
                    }
                    else if(posc<j){
                        cout<<"RIGHT"<<endl;
                    }
                    else{
                        if(posr>i){
                            cout<<"UP"<<endl;
                        }
                        else if(posr<i){
                            cout<<"DOWN"<<endl;
                        }
                        else{
                            cout<<"CLEAN"<<endl;
                        }
                    }
                    return;
                }
            }
        }
    }
}

int main(void) {
    int pos[2];
    vector <string> board;
    cin>>pos[0]>>pos[1];
    for(int i=0;i<5;i++) {
        string s;cin >> s;
        board.push_back(s);
    }
    next_move(pos[0], pos[1], board);
    return 0;
}
