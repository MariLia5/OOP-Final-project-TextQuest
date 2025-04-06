#include <iostream>
#include "Detective.hpp"
#include "Game.hpp"

int main() {
    setlocale(LC_ALL, "RUS");
	
	int blood = 0;
	int bone = 0;
	int sms = 0;
    Detective Mike;
    Game game;

    game.PrintText(game.GetStart());
    game.PrintText(game.GetCabinet1());
	game.PrintText(game.GetJermaineOMalley1());
	game.PrintText(game.GetHelenSmith());
	game.PrintText(game.GetDukeFrancis());
	game.PrintText(game.GetJermaineOMalley2());
	game.PrintText(game.GetSeanParker());
	game.PrintText(game.GetJessicaJohnson());;

	int Act0;
	do {
		game.PrintText(game.GetDecoration1());
		std::cin >> Act0;
		switch (Act0) {
		case 1: {
			game.PrintText(game.GetDecoration1Observation1());
			Mike.increaseObservation(1);
			break;
		}
		case 2: {
			game.PrintText(game.GetDecoration1Observation0());
			break;
		}
		case 3: {
			Mike.displayInfo();
			break;
		}
	  }
	} while (Act0 != 1 && Act0 != 2);

	game.PrintText(game.GetDecoration2());
	int Act1;
	do {
		std::cin >> Act1;
		switch (Act1) {
		case 1: {
			game.PrintText(game.GetDecoration2Tree());
			int Act2;
			std::cin >> Act1;
			if (Act2 == 1) {
				int blood = 1;
			}
			if (Act2 == 2) {}
			break;
		}
		case 2: {
			game.PrintText(game.GetDecoration2Bonfire());
			int Act3;
			std::cin >> Act3;
			if (Act3 == 1) {
				int bone = 1;
			}
			if (Act3 == 2) {}
			break;
		}
		case 3: {
			break;
		}
		case 4: {
			Mike.displayInfo();
			break;
		}
	  }
	} while (Act1 != 1 && Act1 != 2 && Act1 != 3);

	game.PrintText(game.GetDecoration3());
	game.PrintText(game.GetCabinet2());
	int Act4;
	do {
		std::cin >> Act4;
		switch (Act4) {
		case 1: {
			int sms = 1;
			break;
		}
		case 2: {
			break;
		}
		case 3: {
			Mike.displayInfo();
			break;
		}
	  }
	} while (Act0 != 1 && Act0 != 2);

	game.PrintText(game.GetCabinet3());

	game.PrintText(game.GetAbandonedBuilding1());
	int Act5;
	do {
		std::cin >> Act5;
		switch (Act5) {
		case 1: {
			if (sms == 1) {
				game.PrintText(game.GetSMSblister());
			}
			else {
				game.PrintText(game.GetSMSNOblister());
			}			
			break;
		}
		case 2: {
			game.PrintText(game.GetNOsound());
			break;
		}
		case 3: {
			Mike.displayInfo();
			break;
		}
		}
	} while (Act0 != 1 && Act0 != 2);

	game.PrintText(game.GetFight1());
		int Act6;
		std::cin >> Act6;
		switch (Act6) {
		case 1: {
			game.PrintText(game.GetEvade());
			break;
		}
		case 2: {
			game.PrintText(game.GetSwing());
			Mike.takeDamage(1);
			break;
		}
	}
		game.PrintText(game.GetFight2());
		int Act7;
		std::cin >> Act7;
		switch (Act7) {
		case 1: {
			game.PrintText(game.GetBounceoff());
			Mike.takeDamage(1);
			break;
		}
		case 2: {
			game.PrintText(game.GetGrabhold());
			break;
		}
		}

		game.PrintText(game.GetFight3());
		int Act8;
		std::cin >> Act8;
		switch (Act8) {
		case 1: {
			game.PrintText(game.GetHit());
			break;
		}
		case 2: {
			game.PrintText(game.GetWait());
			Mike.takeDamage(1);
			break;
		}
		}

		

    return 0;
}