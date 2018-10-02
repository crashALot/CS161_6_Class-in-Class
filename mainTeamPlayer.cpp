#include <iostream>
#include "Player.hpp"
#include "Team.hpp"

int main()
{
	 Player p0;
     Player p1("Charlotte", 24, 10, 7);
     Player p2("Emily", 21, 13, 9);
     Player p3("Anne", 20, 10, 8);
     Player p4("Jane", 19, 10, 10);
     Player p5("Mary", 18, 11, 8);
     std::cout << "Original p5 rebound was: " << p5.getRebounds() << std::endl;
     p5.setRebounds(12);
     std::cout << "New p5 rebounds are: " << p5.getRebounds() << std::endl;
     std::cout << "Original p5 points was: " << p5.getPoints() << std::endl;
     p5.setPoints(20);
     std::cout << "New p5 points are: " << p5.getPoints() << std::endl;
     std::cout << "Original p5 assists was: " << p5.getAssists() << std::endl;
     p5.setAssists(9);
     std::cout << "New p5 assists are: " << p5.getAssists() << std::endl;
     std::cout << "p0 name is: " << p0.getName() << std::endl;
     std::cout << "p0 points is: " << p0.getPoints() << std::endl;
     std::cout << "p0 rebounds is: " << p0.getRebounds() << std::endl;
     std::cout << "p0 assists is: " << p0.getAssists() << std::endl;

     
     Player t2p1("Hello", 23, 10, 7);
     Player t2p2("World", 20, 13, 9);
     Player t2p3("How", 19, 10, 8);
     Player t2p4("Are", 18, 10, 10);
     Player t2p5("You", 17, 11, 8);
     
     Player t3p1("Another", 22, 10, 7);
     Player t3p2("Day", 19, 13, 9);
     Player t3p3("In", 18, 10, 8);
     Player t3p4("The", 17, 10, 10);
     Player t3p5("Life", 16, 11, 8);
     
     Player t4p1("Computer", 21, 10, 7);
     Player t4p2("Science", 18, 13, 9);
     Player t4p3("Builds", 17, 10, 8);
     Player t4p4("New", 16, 10, 10);
     Player t4p5("Software", 15, 11, 8);
     
     Player t5p1("Clarkson", 20, 10, 7);
     Player t5p2("SUNY", 17, 13, 9);
     Player t5p3("UND", 16, 10, 8);
     Player t5p4("Cochise", 15, 10, 10);
     Player t5p5("Army", 14, 11, 8);

     Team team1(p1, p2, p3, p4, p5);
     Team team2(t2p1, t2p2, t2p3, t2p4, t2p5);
     Team team3(t3p1, t3p2, t3p3, t3p4, t3p5);
     Team team4(t4p1, t4p2, t4p3, t4p4, t4p5);
     Team team5(t5p1, t5p2, t5p3, t5p4, t5p5);

     std::cout << "Total points team 1: " << team1.totalPoints() << std::endl;
     std::cout << "Total points team 2: " << team2.totalPoints() << std::endl;
     std::cout << "Total points team 3: " << team3.totalPoints() << std::endl;
     std::cout << "Total points team 4: " << team4.totalPoints() << std::endl;
     std::cout << "Total points team 5: " << team5.totalPoints() << std::endl;

     Player a = team1.getPointGuard();
     Player b = team1.getShootingGuard();
     Player c = team1.getSmallForward();
     Player d = team1.getPowerForward();
     Player e = team1.getCenter();
     std::cout << std::endl;
     std::cout << "Team 1 includes:" << std::endl;
     std::cout << "Point Guard:" << std::endl;
     std::cout << a.getName() << std::endl;
     std::cout << "Shooting Guard:" << std::endl;
     std::cout << b.getName() << std::endl;
     std::cout << "Small Forward:" << std::endl;
     std::cout << c.getName() << std::endl;
     std::cout << "Power Forward:" << std::endl;
     std::cout << d.getName() << std::endl;
     std::cout << "Center:" << std::endl;
     std::cout << e.getName() << std::endl;
     std::cout << std::endl;
     team1.setPointGuard(t5p5);
     team1.setShootingGuard(t4p4);
     team1.setSmallForward(t3p3);
     team1.setPowerForward(t2p2);
     team1.setCenter(p1);
     std::cout << std::endl;
     a = team1.getPointGuard();
     b = team1.getShootingGuard();
     c = team1.getSmallForward();
     d = team1.getPowerForward();
     e = team1.getCenter();
     std::cout << "Team 1 has been updated and now includes:" << std::endl;
     std::cout << "Point Guard:" << std::endl;
     std::cout << a.getName() << std::endl;
     std::cout << "Shooting Guard:" << std::endl;
     std::cout << b.getName() << std::endl;
     std::cout << "Small Forward:" << std::endl;
     std::cout << c.getName() << std::endl;
     std::cout << "Power Forward:" << std::endl;
     std::cout << d.getName() << std::endl;
     std::cout << "Center:" << std::endl;
     std::cout << e.getName() << std::endl;
     std::cout << t2p3.hasMorePointsThan(t3p2) << std::endl;
     std::cout << std::endl;

    return 0;
}