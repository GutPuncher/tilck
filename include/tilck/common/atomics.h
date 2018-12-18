#pragma once

#include <tilck/common/basic_defs.h>
#include <stdatomic.h> // system header

STATIC_ASSERT(ATOMIC_BOOL_LOCK_FREE == 2);
STATIC_ASSERT(ATOMIC_CHAR_LOCK_FREE == 2);
STATIC_ASSERT(ATOMIC_SHORT_LOCK_FREE == 2);
STATIC_ASSERT(ATOMIC_INT_LOCK_FREE == 2);
STATIC_ASSERT(ATOMIC_LONG_LOCK_FREE == 2);
STATIC_ASSERT(ATOMIC_LLONG_LOCK_FREE == 2);
STATIC_ASSERT(ATOMIC_POINTER_LOCK_FREE == 2);
