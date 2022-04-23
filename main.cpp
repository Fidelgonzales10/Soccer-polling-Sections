#include <iostream>
#include <string> 
#include <unistd.h>
using namespace std;




int main() {
  string option = "";
  int a = 0;
  int b = 0;
  int c = 0;
  int d = 0;
  int e = 0;
  double counter = 0;

  
  do{

    cout<< "Total votes: "<< counter << endl << endl << endl ;
    cout<<"\nWhere will the ball go?\n\nA. Top left corner\nB. Bottom left corner\nC. Middle\nD. Top right corner\nE. Bottom right corner\n"<< endl;
    cout<<"Input your answer: ";
    cin>>option;
    
    if(option == "a" || option == "A")
      {
        a=a+1;
        system("clear");
        cout<<"You have chosen top left corner.\n\nThank you for your responce."<< endl;
        sleep(3);
        counter=counter+1;
        system("clear");
        }
    else if(option == "b" || option == "B")
    {
      b=b+1;
        system("clear");
        cout<<"You have chosen bottom left corner.\n\nThank you for your responce."<< endl;
        sleep(3);
        system("clear");
      counter=counter+1;
    }
    else if(option == "c" || option == "C")
    {
      c=c+1;
      system("clear");
        cout<<"You have chosen middle.\n\nThank you for your responce."<< endl;
        sleep(3);
        system("clear");
      counter=counter+1;
    }
    else if(option == "d" || option == "D")
    {
      d=d+1;
      system("clear");
        cout<<"You have chosen top right corner.\n\nThank you for your responce."<< endl;
        sleep(3);
        system("clear");
      counter=counter+1;
    }
    else if(option == "e" || option == "E")
    {
      e=e+1;
      system("clear");
        cout<<"You have chosen bottom right corner.\n\nThank you for your responce."<< endl;
        sleep(3);
        system("clear");
      counter=counter+1;
    }
    else if(option == "x" || option == "X")
    {
      //This is the exit channel
    }
    else{
        system("clear");
      cout << "\nInvalid Input!" << endl;
          sleep(2);
      system("clear");
    }
  
        
  }while(option != "x" && option != "X");
  sleep(1);
  system("clear");
  
  for(int i = 0; i < 50; i++) { cout << "*"; } cout << endl<<"";
  cout<<"\t\t\t   Poll has been closed\n"<<endl<<endl;
cout <<"\tTotal Votes: "<< counter <<endl<<endl<<endl;
cout <<"\tVoted for [A] (top left): "<< a << endl;
cout <<"\tVoted for [B] (bottom left): "<< b << endl;
cout <<"\tVoted for [C] (middle): "<< c << endl;
cout <<"\tVoted for [D] (top right): "<< d << endl;
cout <<"\tVoted for [E] (bottom right): "<< e << endl<< endl;
  
  for(int i = 0; i < 50; i++) { cout << "*"; } cout << endl;
  
  

}