#include <chrono>
#include <iostream>
#include <functional>
#include <chrono>
#include <iomanip>
#include <string_view>
//
#include "vflib.h"
//
template<typename T>
void do_test(T f, const std::string_view s, unsigned long long n, std::ostream& os = std::cout)
{
	constexpr auto swidth = 16;
	//
	os << "TEST: ";
	os << std::setw(swidth) << std::left << s;
	os << " ITERATIONS: " << n;
	//
	const auto start = std::chrono::system_clock::now();
	//
	while (n > 0)
	{
		f();
		--n;
	}
	//
	const auto end = std::chrono::system_clock::now();
	const auto esd = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
	//
	os << " ELAPSED: " << esd.count() << "ms." << std::endl;
}
//
int main(int argc, char** argv)
{
	auto t = vf::test {};
	const auto n = 100000000ull;
	//
	do_test(std::bind(&vf::test::do_v, t), "virtual", n);
	do_test(std::bind(&vf::test::do_s, t), "plain", n);
	do_test(std::bind(&vf::test::do_i, t), "inline", n);
	//
	return 0;
}
