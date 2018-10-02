/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/9/2018
** Description: This file acts as the interface for class "Player".
*               Class "Player" will create objects that can be edited
*               by the user. Each "Player" object will have several
*               member variables that identify their stats as a     
*               basketball player.
*********************************************************************/
#ifndef PLAYER_HPP
// Include a guard
#define PLAYER_HPP
#include <string>

class Player
{
private:
    
    std::string name;
    int points, rebounds, assists;
    
public:
    
    // Default constructor
    Player();
    // User defined constructor
    Player(std::string, int, int, int);
    std::string getName();
    void setPoints(int);
    int getPoints();
    void setRebounds(int);
    int getRebounds();
    void setAssists(int);
    int getAssists();
    bool hasMorePointsThan(Player);
    // Destructor
    ~Player();

};

#endif