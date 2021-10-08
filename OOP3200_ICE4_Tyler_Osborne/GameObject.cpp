/*
 * Project OOP3200_ICE4_Tyler_Osborne
 * @author Tyler Osborne
 * date: 2021/10/07
 *  Description:
 *	This class represents a object in a game with a position.
 */

#include "GameObject.h"

// constructors
GameObject::GameObject(): objectId(0), postition(Vector2D())
{
}

GameObject::GameObject(const int id, const float x, const float y)
{
	SetId(id);
	SetPosition(x, y);
}

GameObject::GameObject(const int id, const Vector2D& position)
{
	SetId(id);
	SetPosition(position);
}

// Rule of 3
GameObject::~GameObject()
= default;

GameObject::GameObject(const GameObject& gameObjectToCopy)
{
	SetId(gameObjectToCopy.objectId);
	SetPosition(gameObjectToCopy.postition);
}

GameObject& GameObject::operator=(const GameObject& rightSideGameObject)
{
	SetId(rightSideGameObject.objectId);
	SetPosition(rightSideGameObject.postition);
	return *this;
}

// Accessors
Vector2D GameObject::GetPosition() const
{
	return postition;
}

int GameObject::GetId() const
{
	return objectId;
}

// Mutator
void GameObject::SetId(const int id)
{
	objectId = id;
}

void GameObject::SetPosition(const float x, const float y)
{
	postition.Set(x, y);
}

void GameObject::SetPosition(const Vector2D& newPosition)
{
	postition = newPosition;
}

// To string function
std::string GameObject::ToString() const
{
	std::string outputString;
	outputString += "ID:" + std::to_string(GetId()) + "\n";
	outputString += "position: " + GetPosition().ToString() + "\n";
	return outputString;
}
