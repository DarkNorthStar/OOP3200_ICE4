/*
 * Author: Tyler Osborne
 * Date: 2021-10-07
 * Description:
 *	This class represents a object in a game with a position.
 *
 */

#pragma once
#ifndef __GAME_OBJECT__
#define __GAME_OBJECT__

#include "Vector2D.h"

// Class representing a game object
class GameObject
{
public:
	GameObject();
	GameObject(float x, float y);
	GameObject(const Vector2D& position);

	// Rule of 3
	~GameObject(); // Destructor
	GameObject(const GameObject& gameObjectToCopy); // Copy Constructor
	GameObject& operator=(int id, const GameObject& rightSideGameObject); // Assignment operator
		
	// Accessor
	Vector2D GetPosition() const;
	int GetId(); // I WAS HERE THANKS ME

	// Mutator
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& newPosition);

	// Utility Functions
	std::string ToString() const;

private:
	Vector2D postition;
	int objectId;

};

#endif