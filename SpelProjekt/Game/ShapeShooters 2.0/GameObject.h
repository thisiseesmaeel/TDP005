#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include<SFML/Graphics.hpp>

class GameObject {
public:

    virtual void update() = 0;
    virtual void render() = 0;
};

#endif //!GAMEOBJECT_H
