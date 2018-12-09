/********
4105056005 鄭筠庭 第六次作業 12/19
4105056005 Yun-Ting Cheng The Sixth Homework 12/19
********/
// wp_hw06_4105056005.cpp: 主要專案檔。

#include "stdafx.h"
#include "startForm.h"

using namespace System;
using namespace wp_hw06_4105056005;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	startForm^ f = gcnew startForm;
	f->ShowDialog();
    return 0;
}
