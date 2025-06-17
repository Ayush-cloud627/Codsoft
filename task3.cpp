#include<iostream>
using namespace std;

char b[9] = {'1','2','3','4','5','6','7','8','9'};
char p = 'X';
int m;

void showBoard(){
    cout<<b[0]<<" | "<<b[1]<<" | "<<b[2]<<endl;
    cout<<"---------"<<endl;
    cout<<b[3]<<" | "<<b[4]<<" | "<<b[5]<<endl;
    cout<<"---------"<<endl;
    cout<<b[6]<<" | "<<b[7]<<" | "<<b[8]<<endl;
    cout<<endl;
}
void move(){
    cout<<"Player "<<p<<" , enter move : ";
    cin>>m;
    cout<<endl;
    if(b[m-1] != 'X' && b[m-1] != 'O'){
        b[m-1] = p;
    }else{
        cout<<"Invalid move! Try again"<<endl;
        move();
    }
}

bool win(){
    return (b[0] == b[1] && b[1] == b[2]) || (b[3] == b[4] && b[4] == b[5]) || (b[6] == b[7] && b[7] == b[8]) ||
           (b[0] == b[3] && b[3] == b[6]) || (b[1] == b[4] && b[4] == b[7]) || (b[2] == b[5] && b[5] == b[8]) ||
           (b[0] == b[4] && b[4] == b[8]) || (b[2] == b[4] && b[4] == b[6]);
}

bool draw(){
    for(int i=0 ; i<9 ; i++){
        if(b[i] != 'X' && b[i] != 'O'){
            return false;
        }
    }
    return true;
}

void switchPlayer(){
    p = (p == 'X') ? 'O' : 'X';
}

int main(){
    cout<<"--Tic-Tac-Toe Game--"<<endl;
    cout<<endl;
    while(true){
        showBoard();
        move();
        if(win()){
            showBoard();
            cout<<"Congratulations! Player "<<p<<" wins"<<endl;
            break;
        }
        if(draw()){
            showBoard();
            cout<<"It's a draw!"<<endl;
            break;
        }
        switchPlayer();
    }
    return 0;
}
