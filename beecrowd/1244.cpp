#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

struct StringSizeComparator {
    bool operator()(std::pair<std::string, int> a, std::pair<std::string, int> b) const
    {
	//std::cout << a.first << " - " << b.first << std::endl;
        return a.first.size() > b.first.size() || a.second < b.second;
    }
};

int main() { _
	int n; std::cin >> n;
	
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	while(n--) {
		std::set<std::pair<std::string, int>, StringSizeComparator> list;
		std::string line;
		std::getline(std::cin, line);

		std::string word = "";
		word.reserve(50);
		int count = 0;

		for(char c : line) {
			if(c == ' '){
				list.insert({word, count});
				//std::cout << word << std::endl;
				word = "";
				count++;
			} else {
				word.push_back(c);
			}
		}
		//std::cout << word << std::endl;
		list.insert({word, count});
		word = "";
		
		std::vector<std::string> ans;
		ans.reserve(list.size());
		for(auto a : list) {
			ans.push_back(a.first);
		}

		for(long unsigned int index = 0; index < list.size()-1; index++){
			std::cout << ans[index] << " ";
		}

		std::cout << ans[list.size() - 1] << std::endl;
	}

	return 0;
}
