/*
 * STARTER CODE
 */
#include <iomanip>
#include <iostream>

#include "GameObject.h"

int main()
{
	int id1;
	
	std::cout << "Enter the first game object id: ";
	std::cin >> id1;
	Vector2D point1;
    std::cout << "Enter the first point (x, y): ";
	std::cin >> point1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point1 << " for the first game object" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	GameObject object1(id1, point1);

	int id2;

	std::cout << "Enter the second game object: ";
	std::cin >> id2;
	Vector2D point2;
	std::cout << "Enter the second point (x, y): ";
	std::cin >> point2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point2 << " for the second game object" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	GameObject object2(id2, point2);


	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first game object is: " << object1.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second game object is: " << object2.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first game object and second game object is: " << Vector2D::Distance(object1.GetPosition(), object2.GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first game object to the second game object is: " << Vector2D::SignedAngle(point1, point2) << std::endl;

	std::cout << "--------------------------------------------------------------\n" << std::endl;
	std::cout << "First game object details:" << std::endl;
	std::cout << object1.ToString() << std::endl;

	std::cout << "Second game object details:" << std::endl;
	std::cout << object2.ToString() << std::endl;
}

