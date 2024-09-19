#include<iostream>
#include<string>
using namespace std;

class Player
{ public :
string name;
 int pos;
Player(string n =0)
 {
    name = n;
    pos =0;
 }

};
void func(int &d,Player &p)
{cout<<p.name<<" rolled "<<d<<endl;
p.pos= p.pos + d;
if(p.pos>25)
p.pos=p.pos-d;
if(p.pos==4)
{cout<<"Climb up the ladder!"<<endl;
    p.pos=15;}
if(p.pos==12)
{cout<<"Climb up the ladder!"<<endl;
    p.pos=21;}
if(p.pos==24)
{cout<<"oh,no!SNAKE"<<endl;
    p.pos=5;}
if(p.pos==11)
{cout<<"oh,no!SNAKE"<<endl;
    p.pos=2;}
if(p.pos==25)
return;
cout<<"Position of "<<p.name<<" is "<<p.pos<<endl;
return;
}

int main()
{int d;
cout<<"Snakes and ladders game"<<endl;
cout<<"Enter 1st player's name"<<endl;
string n;
cin>>n;
Player p1(n);
cout<<"Enter 2nd player's name"<<endl;
cin>>n;
Player p2(n);

cout<<"Press 1 to start the game"<<endl;
int s;
cin>>s;
if(s==1)
{

while(p1.pos!=25 && p2.pos!=25)
{ 
    cout<<p1.name<<"'s turn!"<<" Press p to roll dice"<<endl;
    char c;
cin>>c;
while(c != 'p')
{cout<<"Roll again!"<<endl;
cin>>c;}

int d;
d=1+(rand()%6);
func(d,p1);
if(p1.pos==25)
{
cout<<p1.name<<" is the winner"<<endl;
break;}

 cout<<p2.name<<"'s turn!"<<" Press p to roll dice"<<endl;

cin>>c;
while(c != 'p')
{cout<<"Roll again!"<<endl;
cin>>c;}
d=1+(rand()%6);

func(d,p2);
if(p2.pos==25)
{
cout<<p2.name<<" is the winner"<<endl;
break;}

}

}
return 0;
}

