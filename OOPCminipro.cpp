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
   

