#include <iostream>
#include <windows.h>
int main(){
//when it's time to complete the game, add system("color 6e");
HANDLE colour = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute (colour, 366);

std::cout<<"Hello, player!\n";
std::cout<<"I hope you are prepared for this experience!\n";
std::cout<<"You are about to die, over and over, until you find the answer I have hidden away!\n";
std::cout<<"Are you ready?";
std::cout<<" If ready, press 1, then enter.\n";
char a;
std::cin>>a;
    if(a == '1'){
std::cout<< "Great! Let's go ahead!\n\n";
    }else{
        while (getchar() != '\n');
std::cout << "You chose something else over this game.";
std::cout << "\nGoodbye.";
getchar();
exit(1); }

std::cout<<"Do you like waving?\nIf yes, press 1, then enter.\nIf no, press anything else, then enter.\n";
char b;
std::cin>>b;
if(b=='1'){
std::cout<< "\nGreat! Let's keep going!\n\n";
    }else{
         while (getchar() != '\n');
std::cout << ".\nYou have died from not choosing the correct option.\nGoodbye."; 
getchar(); 
exit(2);}


std::cout<<"Do you dislike spoons?\nIf yes, press 1, then enter.\nIf no, press anything else, then enter.\n";
char c;
std::cin>>c;
if(c!='1'){
std::cout<< "\nAlright! Next question!\n\n";
    }else{
         while (getchar() != '\n');
std::cout << ".\nYou have died from not choosing the correct option.\nGoodbye.";  
getchar();
exit(3);}


std::cout<<"Do you prefer cats or bunnies?\nTo choose cats, press 1, then enter.\nTo choose bunnies, press anything else, then enter.\n";
char d;
std::cin>>d;
if(d!='1'){
std::cout<< "\nAlright! Let's continue!\n\n";
    }else{
         while (getchar() != '\n');
std::cout << ".\nYou have died from not choosing the correct option.\nGoodbye.";  
getchar();
exit(4);}


std::cout<<"Do you prefer roller skating or ice skating?\nTo choose roller skating, press 1, then enter.\nTo choose ice skating, press anything else, then enter.\n";
char e;
std::cin>>e;
if(e=='1'){
std::cout<< "\nNeat, next!\n\n";
    }else{
         while (getchar() != '\n');
std::cout << ".\nYou have died from not choosing the correct option.\nGoodbye.";  
getchar();
exit(5);}


std::cout<<"Do you know the feeling of loving?\nIf yes, press 1, then enter.\nIf no, press anything else, then enter.\n";
char f;
std::cin>>f;
if(f=='1'){
std::cout<< "\nNeat, keep answering!\n\n";
    }else{
         while (getchar() != '\n');
std::cout << ".\nYou have died from not choosing the correct option.\nGoodbye.";  
getchar();
exit(6);}
//newDo you understand heatred
std::cout<<"What is the result: 1+1=?\nIf 2, press 1, then enter.\nIf window, press anything else, then enter.\n";
char g;
std::cin>>g;
if(g!='1'){
std::cout<< "\nImpressive! Keep going!\n\n";
    }else{
         while (getchar() != '\n');
std::cout << ".\nYou have died from not choosing the correct option.\nGoodbye.";  
getchar();
exit(7);}


//end lines down
while (getchar() != '\n');
getchar();
return 0;
    }
    //At the end, "You are a perfect being, you were the answer all along."
    