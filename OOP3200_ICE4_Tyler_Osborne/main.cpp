/*
 * STARTER CODE
 *
 * 
 * Project OOP3200_ICE4_Tyler_Osborne
 * modified Tyler Osborne
 * date: 2021/10/07
 *  Description:
 *	This file is a testing ground for the gameobject class
 */
 
#include <iomanip>
#include <iostream>
#include <vector>

#include "GameObject.h"

// function that builds a vector of game objects
static void BuildGameObjects(std::vector<GameObject*>& gameObjects, int num = 1)
{
	for(auto i = 0; i < num; i++)
	{
		int id;
		std::cout << "Enter the game objects id: ";
		std::cin >> id;
		Vector2D point;
		std::cout << "Enter the game objects position (x, y): ";
		std::cin >> point;
		std::cout << "\n--------------------------------------------------------------" << std::endl;
		std::cout << "You Entered " << id << " for the game objects id" << std::endl;
		std::cout << "You Entered " << point << " for the game objects position" << std::endl;
		std::cout << "--------------------------------------------------------------\n" << std::endl;
		auto* object = new GameObject(id, point);
		gameObjects.push_back(object);
	}
}
// Function that compares 2 game objects
static void compareGameObjects(GameObject* object1, GameObject* object2)
{
	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first game object is: " << object1->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second game object is: " << object2->GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first game object and second game object is: " << Vector2D::Distance(object1->GetPosition(), object2->GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first game object to the second game object is: "
		<< Vector2D::SignedAngle(object1->GetPosition(), object2->GetPosition()) << std::endl;

	std::cout << "--------------------------------------------------------------\n" << std::endl;
	std::cout << "First game object details:" << std::endl;
	std::cout << object1->ToString() << std::endl;

	std::cout << "Second game object details:" << std::endl;
	std::cout << object2->ToString() << std::endl;
}


int main()
{
	// Vector of game objects
	std::vector<GameObject*> gameObjects;

	// Gets the number of game objects from the user
	int numberOfGameObjects;
	std::cout << "Enter the number of game object you need: ";
	std::cin >> numberOfGameObjects;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	// Builds the vector of game objects
	BuildGameObjects(gameObjects, numberOfGameObjects);


	// prompts the user for the index of the first game object to compare
	int index1;
	std::cout << "What is the first object index: ";
	std::cin >> index1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	// prompts the user for the index of the second game object to compare
	int index2;
	std::cout << "What is the second object index: ";
	std::cin >> index2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;

	// Compares the 2 objects based on the input indexes from the user
	compareGameObjects(gameObjects[index1], gameObjects[index2]);
}

