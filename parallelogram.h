#pragma once

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif

#include "quadrangle.h"

namespace my_namespace {
	class FIGURESLIB_API Parallelogram :
		public Quadrangle {
	public:
		Parallelogram(int l1, int l2, int c1, int c2);
	};
}
