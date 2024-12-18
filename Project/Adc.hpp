#pragma once

///////////////////////////////////////////////////////////////////////////////
//////////////////////////////// INCLUDES /////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

#include <stdint.h>
#include "Utils.hpp"

///////////////////////////////////////////////////////////////////////////////
/////////////////////////// CLASSES/STRUCTURES ////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

template <class DERIVED_TYPE>
class Adc
{
    friend DERIVED_TYPE;
    DERIVED_TYPE & derivedType = static_cast <DERIVED_TYPE &>(*this);

    public:
        enum class EChannel : uint8_t
        {
            In0,
            In1,
            In2,
            In3,
            In4,
            In5,
            In6,
            In7,
            In8,
            In9,
            In10,
            In11,
            In12,
            In13,
            In14,
            In15,
            Temp,
            VRef,
            VBat
        };

        Adc () = default;
        ~Adc () = default;

        void     Start (void)                    { return derivedType.Start ();         }
        void     Stop  (void)                    { return derivedType.Stop  ();         }
        uint32_t Read  (const EChannel vChannel) { return derivedType.Read  (vChannel); }
};

///////////////////////////////////////////////////////////////////////////////
/////////////////////////////// END OF FILE ///////////////////////////////////
///////////////////////////////////////////////////////////////////////////////