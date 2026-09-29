#include <bits/stdc++.h>
using namespace std;
/*
Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.

Like we specified in the previous chapter; Inheritance lets us inherit attributes and methods from another class. 
Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways.

For example, imagine a base class Animal with a method called makeSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds, etc. 
Every animal can "make a sound", but each one sounds different:

Pig: wee wee
Dog: bow wow
Bird: tweet tweet

This is polymorphism - the same action (making a sound) behaves differently for each animal:
*/

//Base class
class Animal {
    public:
    void animalSound(){
        cout << "The animal makes a sound\n"
    }
};

// Derived Class
class Pig: public Animal{
    public:
    void animalSound(){
        cout << "pig says: oink oink!\n"
    }
}

// Derived Class
class Dig: public Animal{
    public:
    void animalSound(){
        cout << "dog says: woof woof!\n"
    }
}

int main() {
    Animal myAnimal;
    Pig myPig;
    Dog myDog;

    myAnimal.animalSound();
    myPig.animalSound();
    myDog.animalSound();
    return 0;
}