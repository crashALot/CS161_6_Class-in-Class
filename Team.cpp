/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/9/2018
** Description: This file will create a default or user specific 
*               object of class "Team". The Team object will 
*               include 5 different variables made from class "Player",
*               and which can be altered by the user as needed. The 
*               resulting object can be manipulated to identify    
*               different members of the basketball team.
*********************************************************************/
#include "Team.hpp" 
// Through transitive property this file includes Player.hpp

/********************************************************************* 
** Description: Team::Team(Player player1, Player player2, 
*               Player player3, Player player4, Player player5)
*               User specific constructor. Takes 5 player objects and
*               creates a team from user input. 
*********************************************************************/
Team::Team(Player player1, Player player2, Player player3, Player player4, Player player5)
{
    pointGuard=player1;
    shootingGuard=player2;
    smallForward=player3;
    powerForward=player4;
    center=player5;
}

/********************************************************************* 
** Description: get and set functions
*               These functions will assign and return a specific 
*               position for each player on the user defined team.
*********************************************************************/
void Team::setPointGuard(Player pointGuardNew)
{
    pointGuard=pointGuardNew;
}

Player Team::getPointGuard()
{
    return pointGuard;
}

void Team::setShootingGuard(Player shootingGuardNew)
{
    shootingGuard=shootingGuardNew;
}

Player Team::getShootingGuard()
{
    return shootingGuard;
}

void Team::setSmallForward(Player smallForwardIn)
{
    smallForward=smallForwardIn;
}

Player Team::getSmallForward()
{
    return smallForward;
}

void Team::setPowerForward(Player powerForwardIn)
{
    powerForward=powerForwardIn;
}

Player Team::getPowerForward()
{
    return powerForward;
}

void Team::setCenter(Player centerIn)
{
    center=centerIn;
}

Player Team::getCenter()
{
    return center;
}

/********************************************************************* 
** Description: int Team::totalPoints()
*               This function will add the total points from each
*               position on a team.
*********************************************************************/
int Team::totalPoints()
{
    return ((pointGuard.Player::getPoints())+(shootingGuard.Player::getPoints())+(smallForward.Player::getPoints())+(powerForward.Player::getPoints())+(center.Player::getPoints()));
}

/********************************************************************* 
** Description: Team::~Team()
*               Destructor for class "Team".
*********************************************************************/
Team::~Team()
{    
}