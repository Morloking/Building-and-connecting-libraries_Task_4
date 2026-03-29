#pragma once

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif

#include "triangle.h"

namespace my_namespace {
	class FIGURESLIB_API EquilateralTriangle :
		public Triangle {
	public:
		EquilateralTriangle(int l1);
	};
}
