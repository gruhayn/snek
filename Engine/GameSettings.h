#pragma once
#include <string>

class GameSettings {
public:
	GameSettings(std::string filename);
	bool ReadSettings(std::string filename);

	int GetTileSize() const;
	int GetBoardWidth() const;
	int GetBoardHeight() const;
	float GetSpeedUpRate() const;
	int GetPoisonCount() const;
	int GetFoodCount() const;

private:
	int tileSize;
	int boardWidth;
	int boardHeight;
	float speedUpRate;
	int poisonCount;
	int foodCount;



};