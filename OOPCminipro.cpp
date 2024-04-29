#include<iostream>
#include<cstdlib>
#include<ctime>
     using namespace std;

int main() {
    //seed the random number generator
    srand(time(NULL));

char choice;
int user,cpu;

do {

   cout<<"Enter your choice:"<<endl;
   cout<<"1.stone"<<endl;
   cout<<"2.paper"<<endl;
   cout<<"3.scissors"<<endl;
   cout<<"4.Quit"<<endl;
   cout<<"Your choice:";
   cin>>user;
   if(user < 1 || user > 4) {
      cout<<"Invalid choice. please enter a number between 1 to 4."<<endl;
      continue;
   }

   if(user == 4) {
     cout<<"Quitting the game. Goodbye!"<<endl;
    break;
   }
cpu=rand() %3+1;

if(user==cpu){
   cout<<"It's a tie!"<<endl;
}

if(user==1){
cout<<"you choose Rock"<<endl;
}

elseif(user==2)
     {
cout<<"you choose Paper"<<endl;
}

else{
cout<<"you choose scissors"<<endl;
}

if(cpu==1)
{
cout<<"cpu choose Rock"<<endl;
}
else if(cpu==2)
{
cout<<"cpu choose paper"<<endl;
}

   

