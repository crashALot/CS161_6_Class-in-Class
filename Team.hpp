/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/9/2018
** Description: This file acts as the interface for class "Team".
*               Class "Team" will create objects that can be edited
*               by the user. Each "Team" object will have several
*               member variables created from the "Player" class
*               which can be associated with a specific team position.
*********************************************************************/
#ifndef TEAM_HPP
//Include a guard
#define TEAM_HPP
#include "Player.hpp" // Must include "Player" class in order to access
                      // player objects.

class Team
{
private:
    
    Player pointGuard, shootingGuard, smallForward, powerForward, center;
    
public:

    Team(Player, Player, Player, Player, Player); // Access "Player" class
    void setPointGuard(Player);
    Player getPointGuard();
    void setShootingGuard(Player);
    Player getShootingGuard();
    void setSmallForward(Player);
    Player getSmallForward();
    void setPowerForward(Player);
    Player getPowerForward();
    void setCenter(Player);
    Player getCenter();
    int totalPoints();
    
    ~Team();

};

#endif