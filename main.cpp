#include <iostream>
#include "conio.h"
#include<windows.h>

using namespace std;
    char xo[3][3];
void board(){
    for(int r=0;r<3;r++){
        for(int c=0;c<3;c++){
            xo[r][c]='*';
        }
    }

}
bool check(){
    if((xo[0][0]=='X')&&(xo[0][1]=='X')&&(xo[0][2]=='X')){cout<<"X is win"<<endl;return 0;}
                else if((xo[0][0]=='O')&&(xo[0][1]=='O')&&(xo[0][2]=='O')){cout<<"O is win"<<endl;return 0;}
                else if((xo[1][0]=='X')&&(xo[1][1]=='X')&&(xo[1][2]=='X')){cout<<"X is win"<<endl;return 0;}
                else if((xo[1][0]=='O')&&(xo[1][1]=='O')&&(xo[1][2]=='O')){cout<<"O is win"<<endl;return 0;}
                else if((xo[2][0]=='X')&&(xo[2][1]=='X')&&(xo[2][2]=='X')){cout<<"X is win"<<endl;return 0;}
                else if((xo[2][0]=='O')&&(xo[2][1]=='O')&&(xo[2][2]=='O')){cout<<"O is win"<<endl;return 0;}
                else if((xo[0][0]=='X')&&(xo[1][0]=='X')&&(xo[2][0]=='X')){cout<<"X is win"<<endl;return 0;}
                else if((xo[0][0]=='O')&&(xo[1][0]=='O')&&(xo[2][0]=='O')){cout<<"O is win"<<endl;return 0;}
                else if((xo[0][1]=='X')&&(xo[1][1]=='X')&&(xo[2][1]=='X')){cout<<"X is win"<<endl;return 0;}
                else if((xo[0][1]=='O')&&(xo[1][1]=='O')&&(xo[2][1]=='O')){cout<<"O is win"<<endl;return 0;}
                else if((xo[0][2]=='X')&&(xo[1][2]=='X')&&(xo[2][2]=='X')){cout<<"X is win"<<endl;return 0;}
                else if((xo[0][2]=='O')&&(xo[1][2]=='O')&&(xo[2][2]=='O')){cout<<"O is win"<<endl;return 0;}
                else if((xo[0][0]=='X')&&(xo[1][1]=='X')&&(xo[2][2]=='X')){cout<<"X is win"<<endl;return 0;}
                else if((xo[0][0]=='O')&&(xo[1][1]=='O')&&(xo[2][2]=='O')){cout<<"O is win"<<endl;return 0;}
                else if((xo[0][2]=='X')&&(xo[1][1]=='X')&&(xo[2][0]=='X')){cout<<"X is win"<<endl;return 0;}
                else if((xo[0][2]=='O')&&(xo[1][1]=='O')&&(xo[2][0]=='O')){cout<<"O is win"<<endl;return 0;}
}
bool check_cont(){
    int b=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(xo[i][j]=='*'){b=1;break;}
        }
    }
    if(b==0){cout<<"draw try again "<<endl;return 0;}
    else{
        return 1;
    }
}

int main()
{
    string start;
    system("cLs");
    cout<<"some instruction to can play this Game need two player each player enter"<<endl;
    cout<<endl;
    cout<<"two number from 1 to 3 this number represent the location of 'x' or 'o' "<<endl;
    cout<<endl;
    cout<<"to win in this game you must make a straight line by 'x' only or 'o' Good luck."<<endl;
    cout<<endl;
    cout<<"enter any letter to cont"<<endl;
    cout<<endl;
    cin>>start;
    system("cLs");
    board();
    int i=1;
    do{
        int i1,i2;
        cout<<"enter row :- ";
        cin>>i1;
        cout<<"\n";
        cout<<"enter colme :- ";
        cin>>i2;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        system("cLs");
        if((xo[i1][i2]=='X')||(xo[i1][i2]=='O')||(i1>2)||(i2>2)){
            cout<<"please enter a correct number"<<endl;cout<<endl;continue;
        }else{

            if(i%2!=0){xo[i1][i2]='X';}
                else{xo[i1][i2]='O';}
                i++;
                 cout<<"--------------"<<endl;
                system("cLs");
                cout<<endl;

                 for(int r=0;r<3;r++){
                        for(int c=0;c<3;c++){
                            cout<<xo[r][c]<<"  | ";
                                    }
                                    cout<<endl;
                                    cout<<endl;
                            cout<<"--------------"<<endl;
                 }
           check();
           if(!check_cont()){return 0;}
        }

    }while(1);
    cout<<"Draw ,no one win"<<endl;
return 0;
}
