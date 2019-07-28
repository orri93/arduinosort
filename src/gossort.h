#ifndef _FDS_ARDUINO_LIBRARY_SORT_H_
#define _FDS_ARDUINO_LIBRARY_SORT_H_

#include "Arduino.h"

#define FDS_SORT_VERSION "0.0.1"

namespace fds {
namespace sort {

namespace real {
#ifdef SORT_FLOATS
void insertion(float* values, const uint8_t& count);
#endif

namespace reference {

#ifdef SORT_FLOAT_REFERENCES
void insertion(const float* values, uint8_t* ref, const uint8_t& count);
#endif

}
}

namespace byte {
#ifdef SORT_BYTES
void insertion(uint8_t* values, const uint8_t& count);
#endif
namespace reference {

#ifdef SORT_BYTE_REFERENCES
void insertion(const uint8_t* values, uint8_t* ref, const uint8_t& count);
#endif

}
}

}
}
#endif /* _FDS_ARDUINO_LIBRARY_MEDIAN_H_ */
