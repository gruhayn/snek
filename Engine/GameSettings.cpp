#include "GameSettings.h"
#include <fstream>
#include <iostream>


GameSettings::GameSettings(std::string filename)
{
	ReadSettings(filename);
}

bool GameSettings::ReadSettings(std::string filename)
{
	std::string settingName;
	std::ifstream in;
	

	in.open(filename, std::ifstream::in);

	if (in.is_open()) {

		while (in.good()) {
			std::getline(in, settingName);
			
			if ( settingName ==  "[Tile Setting]" )
			{
				in >> tileSize;
			}
			else if (settingName == "[Board Setting]")
			{
				in >> boardWidth >> boardHeight;
			}
			else if (settingName == "[SpeedUpRate Setting]")
			{
				in >> speedUpRate;
			}
			else if (settingName == "[PoisonCount Setting]")
			{
				in >> poisonCount;
			}
			else if (settingName == "[FoodCount Setting]")
			{
				in >> foodCount;
			}
			else if (settingName.empty()) {

			}
			else {
				return false;
			}
		}

	}

	return true;

}

int GameSettings::GetTileSize() const
{
	return tileSize;
}

int GameSettings::GetBoardWidth() const
{
	return boardWidth;
}

int GameSettings::GetBoardHeight() const
{
	return boardHeight;
}

float GameSettings::GetSpeedUpRate() const
{
	return speedUpRate;
}

int GameSettings::GetPoisonCount() const
{
	return poisonCount;
}

int GameSettings::GetFoodCount() const
{
	return foodCount;
}
