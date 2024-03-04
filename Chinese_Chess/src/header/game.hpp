#pragma once

#include <iostream>
#include <vector>

namespace game {
	using std::vector;
	namespace game_type {
		const char defalut = 0;
	}

	namespace pieces {
		const char �� = 0;
		const char �� = 1;
		const char ʿ = 2;
		const char �� = 3;
		const char �� = 4;
		const char �� = 5;
		const char �� = 6;
		const char �� = 7;
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