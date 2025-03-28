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
	game.PrintText(game.GetJermaineOMalley1());
	game.PrintText(game.GetHelenSmith());
	game.PrintText(game.GetDukeFrancis());
	game.PrintText(game.GetJermaineOMalley2());
	game.PrintText(game.GetSeanParker());
	game.PrintText(game.GetJessicaJohnson());;
	game.PrintText(game.GetDecoration1());
	game.PrintText(game.GetDecoration1Observation1());
	game.PrintText(game.GetDecoration1Observation0());;
	game.PrintText(game.GetDecoration2());


    return 0;
}