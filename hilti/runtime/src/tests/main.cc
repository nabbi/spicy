// Copyright (c) 2020-2021 by the Zeek Project. See LICENSE for details.

#include <hilti/rt/init.h>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <hilti/rt/doctest.h>

static void destruct() __attribute__((destructor));
static void destruct() { hilti::rt::done(); }
