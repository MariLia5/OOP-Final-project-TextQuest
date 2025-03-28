#include "Detective.hpp"
#include <iostream>

// ����������� �� ���������
Detective::Detective() :
    name("���� �����"),
    hp(5),
    observation(0) {}

// ����������� � �����������
Detective::Detective(const std::string& name,
    int hp, int observation) :
    name(name),
    hp(hp),
    observation(observation)
{}

// ����������
Detective::~Detective() {}

// ������
std::string Detective::getName() const { return name; }
int Detective::getHP() const { return hp; }
int Detective::getObservation() const { return observation; }

// ������
void Detective::takeDamage(int damage) {
    hp -= damage;
    if (hp < 0) hp = 0;
}

void Detective::heal(int amount) { hp += amount; }

void Detective::increaseObservation(int amount) { observation += amount; }

// ����������� ����������
void Detective::displayInfo() const {
    std::cout << "=== �������������� ��������� ===\n";
    std::cout << "���: " << name << "\n";
    std::cout << "��������: " << hp << "\n";
    std::cout << "����������������: " << observation << "\n";
}
