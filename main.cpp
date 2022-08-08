#include "assertions.cpp"

int main() {
	int x = 2;
	int y = 3;
	std::string s;
	// AssertEqual(x, y, s);
	ASSERT_EQUAL(x, y);
	return 0;
}