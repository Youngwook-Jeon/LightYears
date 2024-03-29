#pragma once
#include "framework/Actor.h"

namespace ly
{
    class Spaceship : public Actor
    {
    public:
        Spaceship(World *owningWorld, const std::string &texturePath = "");
        virtual void Tick(float deltaTime) override;
        void SetVelocity(const sf::Vector2f &newVal);
        sf::Vector2f GetVelocity() const
        {
            return mVelocity;
        }

    private:
        sf::Vector2f mVelocity;
    };
}