#pragma once

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif

#include "quadrangle.h"

namespace my_namespace {
	class FIGURESLIB_API Square :
		public Quadrangle {
	public:
		Square(int l1);
	};
}
