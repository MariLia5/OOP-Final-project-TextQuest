#include "Detective.hpp"
#include <iostream>

// Конструктор по умолчанию
Detective::Detective() :
    name("Майк Джонс"),
    hp(5),
    observation(0) {}

// Конструктор с параметрами
Detective::Detective(const std::string& name,
    int hp, int observation) :
    name(name),
    hp(hp),
    observation(observation)
{}

// Деструктор
Detective::~Detective() {}

// Геттер
std::string Detective::getName() const { return name; }
int Detective::getHP() const { return hp; }
int Detective::getObservation() const { return observation; }

// Сеттер
void Detective::takeDamage(int damage) {
    hp -= damage;
    if (hp < 0) hp = 0;
}

void Detective::heal(int amount) { hp += amount; }

void Detective::increaseObservation(int amount) { observation += amount; }

// Отображение информации
void Detective::displayInfo() const {
    std::cout << "=== Характеристики детектива ===\n";
    std::cout << "Имя: " << name << "\n";
    std::cout << "Здоровье: " << hp << "\n";
    std::cout << "Наблюдательность: " << observation << "\n";
}
