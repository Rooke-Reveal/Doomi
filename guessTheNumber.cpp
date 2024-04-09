#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Guess game
   :)
*/
int GuessGame(){
    int secretNum;
    srand(time(0));
    for(int i=0;i<=10;i++){
       secretNum = rand()%(10+0-0);
    }
    int GussedNum;
    int GuessCount = 0;
    int GuessLimit = 4;
    bool OutofLimit = false;

    do{if(GuessCount<=GuessLimit){

    cout << "Guess The number: ";
    cin >> GussedNum;
    GuessCount++;}
    else{
        OutofLimit = true;
        cout << "Exceeded Guess limit"<<endl;
    }
    }while(GussedNum != secretNum && !OutofLimit);
    if(OutofLimit == false)
    {
        cout<<"You Win";
    }
    else{
        cout << "You Lose"<<"\n";
        cout << "Correct Answer was :"<<secretNum;
    }
return 0;
}
int main()
{
 GuessGame();
}



