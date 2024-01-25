#include "game.h"
#include <ctime>
#include <iostream>

using namespace std;

Game::Game(int maxN)
{
    maxNumber = maxN;
    cout << "Konstruktori: maxNumber: " << maxNumber << endl;
    srand(std::time(0));


}

Game::~Game()
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    short randomValue = (rand()%maxNumber)+1;  //otetaan jakojäännös, nyt pitäisi olla välillä 1-20
    short userValue;
    bool stayInLoop = true;
    short count = 0;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>userValue;
        count++;
        if(userValue == randomValue)
        {
            cout<<"Arvasit oikein luku = "<<userValue<< "arvauksiasi oli: "<<count<<endl;
            stayInLoop = false;
        }
        else if(userValue<randomValue)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }


    }


//pekka
}

