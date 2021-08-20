#include<iostream>
using namespace std;
#include<string>
int main()
{int d1,d2;
int pos1=0,pos2=0;
char c;
cout<<"Snakes and ladders game"<<endl;
cout<<"ENTER 1 TO PLAY"<<endl;
int p;
cin>>p;
if(p==1)
{while(pos1!=25 && pos2!=25)
{cout<<"Player's 1 turn!"<<" Press P to roll dice"<<endl;
cin>>c;
d1=1+(rand()%6);
cout<<"You rolled "<<d1<<endl;
pos1+=d1;
if(pos1>25)
pos1=pos1-d1;
if(pos1==4)
{cout<<"Climb up the ladder!"<<endl;
    pos1=15;}
if(pos1==12)
{cout<<"Climb up the ladder!"<<endl;
    pos1=21;}
if(pos1==24)
{cout<<"oh,no!SNAKE"<<endl;
    pos1=5;}
if(pos1==11)
{cout<<"oh,no!SNAKE"<<endl;
    pos1=2;}
if(pos1==25)
break;
cout<<"Your position is "<<pos1<<endl;
cout<<"Player's 2 turn!"<<"press P to roll dice"<<endl;
cin>>c;
d2=1+(rand()%6);
cout<<"You rolled "<<d2<<endl;
pos2+=d2;
if(pos2>25)
{cout<<"You need less number to win"<<endl;
    pos2=pos2-d2;}
if(pos2==4)
{cout<<"Climb up the ladder!"<<endl;
    pos2=15;}
if(pos2==12)
{cout<<"Climb up the ladder!"<<endl;
    pos2=21;}
if(pos2==24)
{cout<<"oh,no!SNAKE"<<endl;
    pos2=5;}
if(pos2==11)
{cout<<"oh,no!SNAKE"<<endl;
    pos2=2;}
if(pos1==25)
break;
cout<<"Your position is "<<pos2<<endl;
}
if(pos1==25)
{cout<<"PLAYER 1 IS THE  WINNER"<<endl;
return 0;}
if(pos2==25)
{cout<<"PLAYER 2 IS THE  WINNER";
return 0;}
}
}
