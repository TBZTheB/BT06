// Bai 1 (Sắp hậu)
/*

#include<iostream>
#include<cmath>
using namespace std;
bool check(int board[],int row,int col){
    for (int i=1;i<row;i++) if (board[i]==col || abs(board[i]-col)==abs(i-row)) return false;
    return true;
}
void print_board(int board[],int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<board[i];j++) cout<< "- ";
        cout<< "* ";
        for (int j=board[i]+1;j<=n;j++) cout<< "- ";
        cout<< endl;
    }
    cout<< endl<< endl;
}
void put_queen(int board[],int row,int n){
    if (row==n+1) print_board(board,n);
    else{
        for (int i=1;i<=n;i++){
            if (check(board,row,i)) {board[row]=i;put_queen(board,row+1,n);}
        }
    }
}
int main(){
    int n;
    cin>> n;
    int board[100]={0};
    put_queen(board,1,n);
    return 0;
}
*/


// Bai 2 (Hoán vị độ dài)

/*
#include<iostream>
#include<string>
using namespace std;
char chr[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void solve(int n,int k,string s){
    if (s.length()==k) cout<< s<< endl;
    else{
        for (int i=0;i<n;i++) {
            bool check=true;
            for (int j=0;j<s.length();j++) if (chr[i]==s[j]) check=false;
            if (!check) continue;
            else{
                s=s+chr[i];
                solve(n,k,s);
                s.pop_back();
            }
        }
    }
}
int main(){
    string s;
    int n,k;
    cin>> n>> k;
    solve(n,k,s);
    return 0;
}
*/

// Bai 3 ( Tổ hợp độ dài)


#include<iostream>
#include<string>
using namespace std;
char chr[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
void solve(int n,int k,string s,int index){
    if (s.length()==k) cout<< s<< endl;
    else{
        for (int i=index;i<n;i++) {
                s=s+chr[i];
                solve(n,k,s,i+1);
                s.pop_back();
        }
    }
}
int main(){
    string s;
    int n,k;
    cin>> n>> k;
    solve(n,k,s,0);
    return 0;
}

// Bai 4 (Ma trận Hadamard)

/*
#include<iostream>
#include<cmath>
using namespace std;
void print(char board[][40],int size){
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            cout<< board[i][j];
        }
        cout<< endl;
    }
}
void draw_re(char board[][40],int xStart,int yStart,int n);
void draw(char board[][40],int xStart,int yStart,int n);
int main(){
    int n;
    cin>> n;
    char board[40][40]={0};
    int size=pow(2,n);
    int xStart=0,yStart=0;
    draw(board,xStart,yStart,n);
    print(board,size);
    return 0;
}
void draw_re(char board[][40],int xStart,int yStart,int n){
    if (n==0) (board[xStart][yStart]='o');
    else{
        int xMid=pow(2,n-1),yMid=pow(2,n-1);
        draw_re(board,xStart,yStart,n-1);
        draw_re(board,xStart+xMid,yStart,n-1);
        draw_re(board,xStart,yStart+yMid,n-1);
        draw(board,xStart+xMid,yStart+yMid,n-1);
    }
}
void draw(char board[][40],int xStart,int yStart,int n){
    if (n==0) (board[xStart][yStart]='.');
    else{
        int xMid=pow(2,n-1),yMid=pow(2,n-1);
        draw(board,xStart,yStart,n-1);
        draw(board,xStart+xMid,yStart,n-1);
        draw(board,xStart,yStart+yMid,n-1);
        draw_re(board,xStart+xMid,yStart+yMid,n-1);
    }
}
*/

// Bai 5 (Partition)

/*
#include <iostream>
using namespace std;
int a[100];
int d = 0;
void solve(int n, int d) {
    if (n == 0) {
        for (int i = 1; i <= d; ++i) {
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int value = a[d] + 1; value <= n; ++value) {
        a[d + 1] = value;
        solve(n - value, d + 1);
    }
}
int main() {
    int n;
    cin >> n;
    a[0] = 0;
    solve(n, 0);
}
*/
