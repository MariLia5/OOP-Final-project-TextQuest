#include <iostream>
#include "Detective.hpp"
#include "Game.hpp"

int main() {
    setlocale(LC_ALL, "RUS");
    Detective Mike;
    Game game;

    // Правильный вызов через метод доступа
    game.PrintText(game.GetStart());
    game.PrintText(game.GetCabinet1());

    return 0;
}