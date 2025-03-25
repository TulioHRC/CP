#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

struct data {
	int count;
	int lastX;
	bool isHere;
};

int count_max(std::map<int, std::pair<data, data>> curves, int n) {
	int a, b;
	int max = 0;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		if(curves[b-1].f.lastX < a && curves[b-1].f.isHere){
			curves[b-1].f = {
				curves[b-1].f.count + 1,
				a,
				false
			};
												// std::cout << b-1 << " - upper - " << curves[b-1].f.count << std::endl;
			
			max = curves[b-1].f.count > max ? curves[b-1].f.count : max;
		}
		if(curves[b+1].s.lastX < a && curves[b+1].s.isHere){
                        curves[b+1].s = {
                                curves[b+1].s.count + 1,
                                a,
                                false
                        };
												// std::cout << b+1 << " - lower - " << curves[b+1].s.count << std::endl;
                        max = curves[b+1].s.count > max ? curves[b+1].s.count : max;
                }
		if(curves[b-1].s.lastX < a && curves[b-1].s.isHere == false){
                        curves[b-1].s = {
                                curves[b-1].s.count + 1,
                                a,
                                true
                        };
												// std::cout << b-1 << " - lower - " << curves[b-1].s.count << std::endl;

                        max = curves[b-1].s.count > max ? curves[b-1].s.count : max;
                }
		if(curves[b+1].f.lastX < a && curves[b+1].f.isHere == false){
                        curves[b+1].f = {
                                curves[b+1].f.count + 1,
                                a,
                                true
                        };
												// std::cout << b+1 << " - upper - " << curves[b+1].f.count << std::endl;
                        max = curves[b+1].f.count > max ? curves[b+1].f.count : max;
                }
	}

	return max;
};

int main() { _
	int n;

	std::map<int, std::pair<data, data>> curves;
	for(int i = -200; i < 400; i++){
		// The first of the pair is the upper, and the second the lower
		curves[i] = {
			{0, -1, true}, {0, -1, true}
		};
	}

	while(std::cin >> n) {
		std::cout << count_max(curves, n) << std::endl;
	}

	return 0;
}
