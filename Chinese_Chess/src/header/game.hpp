#pragma once

#include <iostream>
#include <vector>

namespace game {
	using std::vector;
	namespace game_type {
		const char defalut = 0;
	}

	namespace pieces {
		const char 空 = 0;
		const char 将 = 1;
		const char 士 = 2;
		const char 象 = 3;
		const char 马 = 4;
		const char 车 = 5;
		const char 炮 = 6;
		const char 兵 = 7;
	}

	class game {
	public:
		game();
		game(const char game_type);
		~game();

		void print_map() const;

	private:
		const char curr_type;
		int x;
		int y;
		vector<vector<char>> map;




	};
}