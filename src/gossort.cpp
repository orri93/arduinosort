#include "gossort.h"

namespace gos {
namespace sort {
static uint8_t i, j;
static uint8_t tr;

namespace real {
static float tf;
#ifndef SORT_FLOATS_DISMISS
void insertion(float* values, const uint8_t& count) {
  for (i = 1; i < count; i++) {
    for (j = i; j > 0 && (values[j - 1] > values[j]); j--) {
      tf = values[j - 1];
      values[j - 1] = values[j];
      values[j] = tf;
    }
  }
}
#endif

namespace reference {

#ifndef SORT_FLOAT_REFERENCES_DISMISS
void insertion(const float* values, uint8_t* ref, const uint8_t& count) {
  for (i = 1; i < count; i++) {
    for (j = i; j > 0 && (values[ref[j - 1]] > values[ref[j]]); j--) {
      tr = ref[j - 1];
      ref[j - 1] = ref[j];
      ref[j] = tr;
    }
  }
}
#endif

}


namespace byte {
static uint8_t tb;
#ifndef SORT_BYTES_DISMISS
void insertion(uint8_t* values, const uint8_t& count) {
  for (i = 1; i < count; i++) {
    for (j = i; j > 0 && (values[j - 1] > values[j]); j--) {
      tb = values[j - 1];
      values[j - 1] = values[j];
      values[j] = tb;
    }
  }
}
#endif
namespace reference {

#ifndef SORT_BYTE_REFERENCES_DISMISS
void insertion(const uint8_t* values, uint8_t* ref, const uint8_t& count) {
  for (i = 1; i < count; i++) {
    for (j = i; j > 0 && (values[ref[j - 1]] > values[ref[j]]); j--) {
      tr = ref[j - 1];
      ref[j - 1] = ref[j];
      ref[j] = tr;
    }
  }
}
#endif

}
}

}
}
}
