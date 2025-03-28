#ifndef GAME_HPP
#define GAME_HPP

#include <iostream>
#include <string>
#include "Detective.hpp"

class Game {
private:
    Detective* detective;

    // Текстовые константы как обычные члены класса
    const char* Start;
    const char* Cabinet1;
    const char* JermaineOMalley1;
    const char* HelenSmith;
	const const char* DukeFrancis;
	const const char* JermaineOMalley2;
	const const char* SeanParker;
	const const char* JessicaJohnson;
	const const char* Decoration1;
	const const char* Decoration1Observation1;
	const const char* Decoration1Observation0;
	const const char* Decoration2;
	const const char* Decoration2Tree;
	const const char* Decoration2Bonfire;
	const const char* Decoration3;
	const const char* Cabinet2;
	const const char* Cabinet3;
	const const char* AbandonedBuilding1;
	const const char* SMSblister;
	const const char* SMSNOblister;
	const const char* NOsound;
	const const char* Fight1;
	const const char* Evade;
	const const char* Swing;
	const const char* Fight2;
	const const char* Bounceoff;
	const const char* Grabhold;
	const const char* Fight3;
	const const char* Hit;
	const const char* Wait;

	const const char* End1;
	const const char* End2;
	const const char* Evidence1;
	const const char* Evidence0;
	const const char* Sect;
	const const char* Mother;

public:
    Game();
    ~Game();

    void PauseText();
    void PrintText(const char* str);

    const char* GetStart() const { return Start; };
    const char* GetCabinet1() const { return Cabinet1; };
    const char* GetJermaineOMalley1() const { return JermaineOMalley1; };
    const char* GetHelenSmith() const { return HelenSmith; };
	const const char* GetDukeFrancis() const { return DukeFrancis; };
	const const char* GetJermaineOMalley2() const { return JermaineOMalley2; };
	const const char* GetSeanParker() const { return SeanParker; };
	const const char* GetJessicaJohnson() const { return JessicaJohnson; };
	const const char* GetDecoration1() const { return Decoration1; };
	const const char* GetDecoration1Observation1() const { return Decoration1Observation1; };
	const const char* GetDecoration1Observation0() const { return Decoration1Observation0; };
	const const char* GetDecoration2() const { return Decoration2; };
	const const char* GetDecoration2Tree() const { return Decoration2Tree; };
	const const char* GetDecoration2Bonfire() const { return Decoration2Bonfire; };
	const const char* GetDecoration3() const { return Decoration3; };
	const const char* GetCabinet2() const { return Cabinet2; };
	const const char* GetCabinet3() const { return Cabinet3; };
	const const char* GetAbandonedBuilding1() const { return AbandonedBuilding1; };
	const const char* GetSMSblister() const { return SMSblister; };
	const const char* GetSMSNOblister() const { return SMSNOblister; };
	const const char* GetNOsound() const { return NOsound; };
	const const char* GetFight1() const { return Fight1; };
	const const char* GetEvade() const { return Evade; };
	const const char* GetSwing() const { return Swing; };
	const const char* GetFight2() const { return Fight2; };
	const const char* GetBounceoff() const { return Bounceoff; };
	const const char* GetGrabhold() const { return Grabhold; };
	const const char* GetFight3() const { return Fight3; };
	const const char* GetHit() const { return Hit; };
	const const char* GetWait() const { return Wait; };

	const const char* GetEvidence1() const { return Evidence1; };
	const const char* GetEvidence0() const { return Evidence0; };
	const const char* GetEnd1() const { return End1; };
	const const char* GetEnd2() const { return End2; };
	const const char* GetSect() const { return Sect; };
	const const char* GetMother() const { return Mother; };
	};

#endif // GAME_HPP
