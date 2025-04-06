#ifndef DETECTIVE_HPP
#define DETECTIVE_HPP

#include <string>

class Detective {

private:
    std::string name;
    int hp;
    int observation;

public:
    Detective();
    Detective(const std::string& name, int hp, int observation);

    ~Detective();

    std::string getName() const;
    int getHP() const;
    int getObservation() const;

    void takeDamage(int damage);
    void heal(int amount);
    void increaseObservation(int amount);

    void displayInfo() const;
};

#endif DETECTIVE_HPP
