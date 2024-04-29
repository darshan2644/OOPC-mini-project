#include<iostream>
#include<cstdlib>
#include<ctime>
    using namespace std;

int main() {
    // Seed the random number generator
    srand(time(NULL));

    char choice;
    int user, cpu;

    do {

        cout << "Enter your choice: \n";
        cout << "1. Stone\n";
        cout << "2. Paper\n";
        cout << "3. Scissors\n";
        cout << "4. Quit\n";
        cout << "Your choice: ";
        cin >> user;
        if (user < 1 || user > 4) {
            cout << "Invalid choice. Please enter a number between 1 and 4."<<endl;
            continue;
        }

        if (user == 4) {
            cout << "Quitting the game. Goodbye!\n";
            break;
        }


        cpu = rand() % 3 + 1; //+1 for difine func 1to3 not fot 0to2


        if (user== cpu) {
            cout << "It's a tie!"<<endl;
        }

        if(user==1)
   {
       cout<<"you choose Rock"<<endl;

   }
   else if(user==2)
   {
       cout<<"you chosse Paper"<<endl;

   }
   else{
    cout<<"you choose Scissors"<<endl;

   }
   if(cpu==1)
   {
       cout<<"cpu choose Rock"<<endl;

   }
   else if(cpu==2)
   {
       cout<<"cpu chosse Paper"<<endl;

   }
   else{
    cout<<"cpu choose Scissors"<<endl;

   }
   if(user==1)
   {
       if(cpu==2)
       {
           cout<<"You Lose"<<endl;
       }
       if(cpu==3)
       {
           cout<<"you win"<<endl;
       }

   }
   // user chooses paper
   else if(user==2)
   {
       if(cpu==1)
       {
           cout<<"you win"<<endl;
       }
       if(cpu==3)
       {
           cout<<"you loose"<<endl;
       }
   }
   //user chooses scissors
   else if(user==3)
   {
       if(cpu==1)
       {
           cout<<"you lose"<<endl;
       }
       if(cpu==2)
       {
           cout<<"you win"<<endl;
       }
   }

     } while (true);
cout<<"Darshan Vasoya 23cs102"<<endl;
    return 0;
}

