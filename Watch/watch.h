#pragma once
#ifndef _WATCH_H_
#define _WATCH_H_

#if defined(WATCH)
#define LIBRARY_EXPORT __declspec(dllexport)
#else
#define LIBRARY_EXPORT
#endif

#include <iostream>
#include <chrono>
#include <exception>

LIBRARY_EXPORT
class watch
{
private:
	static std::chrono::time_point<std::chrono::steady_clock> LIBRARY_EXPORT stS;
	std::chrono::time_point<std::chrono::steady_clock> st;
public:
	LIBRARY_EXPORT watch();
	static void LIBRARY_EXPORT start();
	static void LIBRARY_EXPORT stop();
	static float LIBRARY_EXPORT t_stop();
	LIBRARY_EXPORT ~watch();
};

#endif // !_WATCH_H_
