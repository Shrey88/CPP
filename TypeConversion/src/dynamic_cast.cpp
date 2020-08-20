/*
 *  
 * dyanmic_cast<type> (expr):
 *                          option Enable Run Time Type Information should be set to true to make use of dynamic_cast
 *                          
 *                          It tries to take the pointer and safely cast it to a pointer of type Type*.
 * 
 *                          This cast is executed at runtime and not compile time. 
 * 
 *                          Casts can go in one of two directions: 
 *                                  Base to Derived (Down-cast) 
 *                                  Derived to Base (Up-cast)
 * 
 *                          its's simple enough to see how derived to Base casts would work at runtime.
 * 
 *                          it performs a runtime cast that verifies the validity of either ptr was derived from Type or it wasn't.
 * 
 *                          In the case of derived to Base dynamic_cast<>s, the rules are simple. 
 * 
 *                          You can try to cast anything to anything else and if the ptr was in fact derived from Type, you'll get a Type* pointer
 *                          back from dynamic_cast. Otherwise, you'll get a NULL pointer.
 * 
 *                          it works only with polymorphic classes (the base class needs atleast one virtual function in Base Class)
 *                          because it uses this information to decide about wrong down-cast
 * 
 *                          using this cast has run time overhead, because it checks objecy types at run time using RTTI(Run Time Type Information)
 * 
 *                          if we are sure that we will never cast to wrong object then we should avoid this cast and use static_cast
 */
#include<iostream>

class Entity 
{
    public:
        int x;

        virtual void getClassName() { std::cout << "Entity" << std::endl; };
};

class Player : public Entity
{
    public:
        int y;

        void getClassName() { std::cout << "Player" << std::endl; };
};

class Enemy : public Entity
{
    public:
        int z;

        void getClassName() { std::cout << "Enemy" << std::endl; };
};

int main()
{
    Player* player = new Player();
    

    Entity* entity = player;    // <-- this implicit cast
    // the above implicit cast can also written as 
    Entity* e1 = new Player();  // <-- implicit cast
    

    Entity* e2 = new Enemy();   // <-- implicit cast
    // Player* p1 = e2;    //<-- implicit cast cannot be done because we cannot tell if the e1 is Enemy or Player
    // so what we can do is explicitly convert the object saying that it is of type Player.
    Player* p2 = (Player*)e2;
    /*
     *  what we are doing above is dangerous as e2 is of type Enemy class and it might crash 
     *  because e2 is of type Enemy class and Player might have some functionality which is unique to 
     *  player class only.
     */   


    //  so what we can do is use dynamic_cast to validate the cast.
    //  for dynamic_cast polymorphism is must, which can be achieved using virtual method 
    //  in the base class and overwriting it in derived classes
    //  all these is possible because of RTTI which stores the type information and that's how it comes to 
    //  know if the type provided in dynamic_cast is of another type or not.
    //  but its an overhead as types need to store more information about themselves 

    Entity* actualPlayer = new Player();

    Entity* actualEnemy = new Enemy();

    Player* p3 = dynamic_cast<Player*>(actualEnemy);    //<-- this cast should fail or return NULL as Enemy is not a Player.
    if (p3 == NULL)
    {
        std::cout << "actualEnemy is not a Player" << std::endl;
    }

    Player* p4 = dynamic_cast<Player*>(actualPlayer);   //<-- this cast will return the pointer as Player is an Entity.
    if (p4 != NULL)
    {
        std::cout << "actualPlayer is an Entity" << std::endl;
    }
}