#pragma once

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif

#include "triangle.h"

namespace my_namespace {
	class FIGURESLIB_API IsoscelesTriangle :
		public Triangle {
	public:
		IsoscelesTriangle(int l1, int l2, int c1, int c2);
	};
}

