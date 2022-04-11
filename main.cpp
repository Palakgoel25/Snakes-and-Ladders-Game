#include<iostream>
#include<string>
using namespace std;
void func(int &d,int &pos,string s)
{cout<<"You rolled "<<d<<endl;
pos=pos + d;
if(pos>25)
pos=pos-d;
if(pos==4)
{cout<<"Climb up the ladder!"<<endl;
    pos=15;}
if(pos==12)
{cout<<"Climb up the ladder!"<<endl;
    pos=21;}
if(pos==24)
{cout<<"oh,no!SNAKE"<<endl;
    pos=5;}
if(pos==11)
{cout<<"oh,no!SNAKE"<<endl;
    pos=2;}
if(pos==25)
return;
cout<<s<<"'s position is "<<pos<<endl<<endl;
return;
}
int main()
{int d1,d2,pos1=0,pos2=0;
string Player;
char c;
cout<<"Snakes and ladders game"<<endl;
cout<<"ENTER 1 TO PLAY"<<endl;
int p;
cin>>p;
if(p==1)
{while(pos1!=25 && pos2!=25)
{cout<<"Player 1's turn!"<<" Press p to roll dice"<<endl;
cin>>c;
Player="Player 1";
d1=1+(rand()%6);
func(d1,pos1,Player);
if(pos1==25)
    break;
cout<<"Player's 2 turn!"<<"press p to roll dice"<<endl;
Player="Player 2";
cin>>c;
d2=1+(rand()%6);
func(d2,pos2,Player);
if(pos2==25)
    break;}
if(pos1==25)
{cout<<"PLAYER 1 IS THE  WINNER"<<endl;
return 0;}
if(pos2==25)
{cout<<"PLAYER 2 IS THE  WINNER";
return 0;}
}
}
