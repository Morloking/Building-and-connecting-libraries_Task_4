#pragma once

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif

#include <iostream>
#include <string>

namespace my_namespace {
	class FIGURESLIB_API Figure {
	public:
		std::string getName() const;
		void printInfo(Figure* fig) const;
		virtual std::string getLengths() const = 0;
		virtual std::string getCorners() const = 0;
		virtual ~Figure();
	protected:
		Figure(std::string name);
	private:
		std::string nameF{ "Фигура" };
	};
}
