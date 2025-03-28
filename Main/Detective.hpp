#ifndef DETECTIVE_HPP
#define DETECTIVE_HPP

#include <string>

class Detective {
private:
    std::string name;
    int hp;
    int observation;

public:
    // Конструкторы
    Detective();
    Detective(const std::string& name, int hp, int observation);

    // Деструктор
    ~Detective();

    // Геттер
    std::string getName() const;
    int getHP() const;
    int getObservation() const;

    // Сеттер
    void takeDamage(int damage);
    void heal(int amount);
    void increaseObservation(int amount);

    // Отображение информации
    void displayInfo() const;
};

#endif DETECTIVE_HPP
