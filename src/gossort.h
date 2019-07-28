#ifndef _FDS_ARDUINO_LIBRARY_SORT_H_
#define _FDS_ARDUINO_LIBRARY_SORT_H_

#include "Arduino.h"

#define FDS_SORT_VERSION "0.0.1"

namespace gos {
namespace sort {

namespace real {
#ifndef SORT_FLOATS_DISMISS
void insertion(float* values, const uint8_t& count);
#endif

namespace reference {

#ifndef SORT_FLOAT_REFERENCES_DISMISS
void insertion(const float* values, uint8_t* ref, const uint8_t& count);
#endif

}
}

namespace byte {
#ifndef SORT_BYTES_DISMISS
void insertion(uint8_t* values, const uint8_t& count);
#endif
namespace reference {

#ifndef SORT_BYTE_REFERENCES_DISMISS
void insertion(const uint8_t* values, uint8_t* ref, const uint8_t& count);
#endif

}
}

}
}
#endif /* _FDS_ARDUINO_LIBRARY_MEDIAN_H_ */
