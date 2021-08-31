// ===============================================================
// File: test1.cpp
// Description: This file contains the test cases for the functions
//				of this activity have to pass. IMPORTANT: this file
//				should not be modified.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include <vector>
using namespace std;

#include "catch.h"
#include "activity.h"

TEST_CASE("Testing descendingSort: Test 1", "[descendingSort]")
{
	vector<int> vec1in{8, 10, 4, 8, 12, 20, 15, 54, 18}, vec1out{4, 8, 8, 10, 12, 15, 18, 20, 54};

	REQUIRE(descendingSort(vec1in) == vec1out);
}
