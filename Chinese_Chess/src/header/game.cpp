#include "game.hpp"


//namespace pieces {
//	const char 将 = 1;
//	const char 士 = 2;
//	const char 象 = 3;
//	const char 马 = 4;
//	const char 车 = 5;
//	const char 炮 = 6;
//	const char 兵 = 7;
//}

namespace game {
	game::game() : game(game_type::defalut) {}
	game::game(char game_type) : x(0), y(0), curr_type(game_type) {
		//for (int i = 0; i != _y; ++i) {
		//	vector<char> line;
		//	for (int j = 0; j != _x; ++j) {
		//		line.push_back(0);
		//	}
		//	map.push_back(line);
		//}

		switch (curr_type)
		{
		case 0:
			x = 9;
			y = 10;
			map = {// 0  1  2  3  4  5  6  7  8
					{ 5, 4, 3, 2, 1, 2, 3, 4, 5 },  // 0
					{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },  // 1
					{ 0, 6, 0, 0, 0, 0, 0, 6, 0 },  // 2
					{ 7, 0, 7, 0, 7, 0, 7, 0, 7 },  // 3
					{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },  // 4
					{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },  // 5
					{ -7, 0, -7, 0, -7, 0, -7, 0, -7 },
					{ 0, -6, 0, 0, 0, 0, 0, -6, 0 },
					{ 0, 0, 0, 0, 0, 0, 0, 0, 0 },
					{ -5, -4, -3, -2, -1, -2, -3, -4, -5 },  // 9
			};
		default:
			break;
		}
	}
	game::~game() {}



	void game::print_map() const {
		for (int i = 0; i != this->y; ++i) {
			for (int j = 0; j != this->x; ++j) {
				std::cout << static_cast<int>(map[i][j]) << " ";
			}
			std::cout << "\n";
		}

	}
}