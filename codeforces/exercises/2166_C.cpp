#include <bits/stdc++.h>

#define _ std::ios_base::sync_with_stdio(0); std::cin.tie(0);

#define f first
#define s second

typedef long long ll;

struct Point {
	ll val;
	Point* before;
	Point* next;
};

Point* minPoint(Point* a, Point* b) {
	if (a->val < b->val) return a;
	return b;
}

Point* findSmallest(Point* actual) {
	Point* res = actual;

	if (minPoint(res->next, res->before)->val >= res->val) {
		return res;
	} else {
		return findSmallest(minPoint(res->next, res->before));
	}
}

void logLoop(Point* p) {
	Point* actual = p;

	do {
		std::cout << actual << " ";
		actual = actual->next;
	} while (actual != p);

	std::cout << "\n";
}

int main() { _
	int t; std::cin >> t;

	while(t--) {
		ll n; std::cin >> n;
		ll cost = 0;

		ll aux; std::cin >> aux;
		Point* first = new Point{aux, nullptr, nullptr};

		Point* actual = first;
		//std::cout << "first: " << actual << "\n";

		for (int i = 1; i < (n-1); i++) {
			ll aux; std::cin >> aux;
			Point* newPoint = new Point{aux, actual, nullptr};
			actual->next = newPoint;
			actual = newPoint;
			//std::cout << "actual: " << actual << "\n";
		}

		std::cin >> aux;
		Point* last = new Point{aux, actual, first};
		//std::cout << "last things: " << last->before << " " << last->next << "\n";
		
		actual->next = last;
		first->before = last;

		actual = first;
		
		//logLoop(actual);

		for (int i = 0; i < (n-1); i++) {
			//std::cout << "actual before smallest: " << actual << "\n";
			actual = findSmallest(actual);
			//std::cout << "actual after smallest: " << actual << "\n";
			//logLoop(actual);

			if (actual->before->val > actual->next->val) {
				Point* selected = actual->next;
				//std::cout << selected << "\n";
				actual->next = selected->next;
				actual->next->before = actual;
				actual->val = selected->val;
				cost += selected->val;
			} else {
				//std::cout << "before merge\n";
				Point* selected = actual->before;
				//std::cout << selected << "\n";
				actual->before = selected->before;
				actual->before->next = actual;
				actual->val = selected->val;
				cost += selected->val;		
			}

			//std::cout << actual << "\n";
		}

		std::cout << cost << "\n";
	}

	return 0;
}
