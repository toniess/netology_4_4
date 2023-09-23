#ifndef TESTING_TASK_1_H
#define TESTING_TASK_1_H

#include "listnode.h"
#include "catch2/catch_test_macros.hpp"

TEST_CASE("Empty", "[list]")
{
    List l;
    CHECK(l.Empty());

    l.PushFront(4);
    CHECK_FALSE(l.Empty());
}

TEST_CASE("Size", "[list]")
{
    List l;
    CHECK(l.Size() == 0);

    l.PushBack(3);
    l.PushBack(3);
    CHECK(l.Size() == 2);

    l.PopBack();
    l.PopBack();
    CHECK(l.Size() == 0);
}

TEST_CASE("Clear", "[list]")
{
    List l;
    l.PushBack(3);
    l.PushBack(3);

    l.Clear();

    CHECK(l.Empty());
}

#endif // TESTING_TASK_1_H
