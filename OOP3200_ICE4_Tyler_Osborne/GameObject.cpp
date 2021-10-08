#include "GameObject.h"

GameObject::GameObject() : postition(Vector2D())
{
}

GameObject::GameObject(const float x, const float y)
{
	SetPosition(x, y);
}

GameObject::GameObject(const Vector2D& position)
{
	SetPosition(position);
}

GameObject::~GameObject()
= default;

GameObject::GameObject(const GameObject& gameObjectToCopy)
{
	SetPosition(gameObjectToCopy.postition);
}

GameObject& GameObject::operator=(const GameObject& rightSideGameObject)
{
	SetPosition(rightSideGameObject.postition);
	return *this;
}

Vector2D GameObject::GetPosition() const
{
	return postition;
}

void GameObject::SetPosition(const float x, const float y)
{
	postition.Set(x, y);
}

void GameObject::SetPosition(const Vector2D& newPosition)
{
	postition = newPosition;
}

std::string GameObject::ToString() const
{
	std::string outputString;
	outputString += "position: " << 
}
