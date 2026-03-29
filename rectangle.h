#pragma once

#ifdef FIGURESLIB_EXPORTS
#define FIGURESLIB_API __declspec(dllexport)
#else
#define FIGURESLIB_API __declspec(dllimport)
#endif

#include "quadrangle.h"

namespace my_namespace {
	class FIGURESLIB_API Rectangle :
		public Quadrangle {
	public:
		Rectangle(int l1, int l2);
	};
}
