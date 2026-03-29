#pragma once

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif

#include "triangle.h"

namespace my_namespace {
	class FIGURESLIB_API RectangularTriangle :
		public Triangle {
	public:
		RectangularTriangle(int l1, int l2, int l3, int c1, int c2);
	};
}
