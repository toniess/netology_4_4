#ifndef TESTING_TASK_2_H
#define TESTING_TASK_2_H

#include "listnode.h"
#include "catch2/catch_test_macros.hpp"

TEST_CASE("PushBack", "[list]")
{
    List l;

    l.PushBack(-1);

    CHECK(l.Size() == 1);

    l.PopBack();
    l.PushBack(4);
    l.PushBack(0);

    CHECK(l.Size() == 2);
}

TEST_CASE("PushFront", "[list]")
{
    List l;

    l.PushFront(-1);

    CHECK(l.Size() == 1);

    l.PushFront(4);
    l.PushFront(0);

    CHECK(l.Size() == 3);
}

TEST_CASE("PopBack", "[list]")
{
    List l;

    CHECK_THROWS(l.PopBack());

    l.PushFront(4);
    l.PushFront(0);

    CHECK(l.PopBack() == 4);
    CHECK(l.PopBack() == 0);
    CHECK(l.Empty());
}

TEST_CASE("PopFront", "[list]")
{
    List l;

    CHECK_THROWS(l.PopFront());

    l.PushFront(49);
    l.PushFront(0);
    l.PushFront(-32);

    CHECK(l.PopFront() == -32);
    CHECK(l.PopFront() == 0);
    CHECK(l.Size() == 1);
    CHECK(l.PopFront() == 49);
    CHECK(l.Empty());
}






#endif // TESTING_TASK_2_H
