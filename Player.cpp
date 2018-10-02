/********************************************************************* 
** Author:      Glenn Kiefer
** Date:        5/9/2018
** Description: This file will create a default or user specific 
*               object of class "Player". The Player object will 
*               include 4 different methods to include name, points,
*               rebounds, and assists, which can be altered by the 
*               user as needed. The resulting object can be
*               used in other interfaces and implementations as well.
*********************************************************************/
#include "Player.hpp" // Link associated .hpp file

/********************************************************************* 
** Description: Player::Player()
*               Default constructor. Will initialize an empty string 
*               with variable "name" and a value of -100 with the other
*               int variables.
*********************************************************************/
Player::Player()
{
    name="";
    points=-100;
    rebounds=-100;
    assists=-100;
}

/********************************************************************* 
** Description: Player::Player(std::string nameIn, int pointsIn, 
*               int reboundsIn, int assistsIn)
*               User specific constructor. Takes user input and
*               creates object from class "Player".
*********************************************************************/
Player::Player(std::string nameIn, int pointsIn, int reboundsIn, int assistsIn)
{
    name=nameIn;
    points=pointsIn;
    rebounds=reboundsIn;
    assists=assistsIn;
}

/********************************************************************* 
** Description: get and set functions
*               Each of the below functions will either store a new
*               value into a private member variable or return said
*               variable to user when needed.
*********************************************************************/
std::string Player::getName()
{
    return name;
}

void Player::setPoints(int pointsNew)
{
    points=pointsNew;
}

int Player::getPoints()
{
    return points;
}

void Player::setRebounds(int reboundsNew)
{
    rebounds=reboundsNew;
}

int Player::getRebounds()
{
    return rebounds;
}

void Player::setAssists(int assistsNew)
{
    assists=assistsNew;
}

int Player::getAssists()
{
    return assists;
}

/********************************************************************* 
** Description: bool Player::hasMorePointsThan(Player otherPlayer)
*               This function will return a true or false value when
*               comparing the points between two different players.
*********************************************************************/
bool Player::hasMorePointsThan(Player otherPlayer)
{
    return(points > otherPlayer.points);
}

/********************************************************************* 
** Description: Player::~Player()
*               Destructor for class "Player".
*********************************************************************/
Player::~Player()
{
}