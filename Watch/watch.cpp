#include "pch.h"
#include "watch.h"

std::chrono::time_point<std::chrono::steady_clock> watch::stS;

watch::watch()
{
	st = std::chrono::high_resolution_clock::now();
}

void watch::start()
{
	stS = std::chrono::high_resolution_clock::now();
}

void watch::stop()
{
	std::cout << "DURATION TIME: " << std::chrono::duration<float>(std::chrono::high_resolution_clock::now() - stS).count() << std::endl;
}

float watch::t_stop()
{
	return std::chrono::duration<float>(std::chrono::high_resolution_clock::now() - stS).count();
}

watch::~watch()
{
	std::cout << "DURATION TIME: " << std::chrono::duration<double>(std::chrono::high_resolution_clock::now() - st).count() << std::endl;
}