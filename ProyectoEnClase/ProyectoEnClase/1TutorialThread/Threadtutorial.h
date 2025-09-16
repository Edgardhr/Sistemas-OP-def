#pragma once
#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#pragma region Fucntions Declaration Header

void PrintElapsedTime(std::chrono::system_clock::time_point start, std::chrono::system_clock::time_point end, std::string threadName);

void Count(unsigned long long maxCounter, std::string threadName);

void Example01();
void Example02();
void Example03();
void Example04();
void Example05();
void Example06();
void Example07();

#pragma endregion


#pragma region Global Variables
std::chrono::system_clock::time_point startDate;


#pragma endregion
void ThreadTutorialTest()
{

	startDate = std::chrono::system_clock::now();

	int exampleUsed = 1; // Change this variable for use diferents examples

	switch (exampleUsed)
	{
	case 1:
		Example01();
	case 2:
		Example02();
	case 3:
		Example03();
	case 4:
		Example04();
	case 5:
		Example05();
	case 6:
		Example06();
	case 7:
		Example07();
	default:
		break;

	}
	std::cout << "Example 0" << exampleUsed << " finished" << std::endl;
	std::string text = "";
	std::getline(std::cin, text);
}
void PrintElapsedTime(std::chrono::system_clock::time_point start, std::chrono::system_clock::time_point end, std::string threadName)
{
	std::chrono::duration<double> elapsedTime = end - start;
	std::cout << "Thread: " << threadName << " - Elapsed time : " << elapsedTime.count() << " seconds" << std::endl;
}

void Count(unsigned long long maxCounter, std::string threadName)
{
	for (unsigned long long i = 0; i < maxCounter; i++)
	{

	}

	std::chrono::system_clock::time_point endDate = std::chrono::system_clock::now();
	PrintElapsedTime(startDate, endDate, threadName);
}
	void Example01()
	{
		unsigned long long  totalCount = 1000000000ull;

		std::thread* Counter1 = new std::thread(Count, totalCount, "1");
		std::thread* Counter2 = new std::thread(Count, totalCount, "2");
		std::thread* Counter3 = new std::thread(Count, totalCount, "3");

		Counter1->join();
		Counter2->join();
		Counter3->join();

		Count(totalCount, "0");

	}
	void Example02()
	{

	}
	void Example03()
	{

	}
	void Example04()
	{

	}
	void Example05()
	{

	}
	void Example06()
	{

	}
	void Example07()
	{

	}

