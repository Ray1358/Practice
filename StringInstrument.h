//
// CopyRight 2024
//

#ifndef INC_10_14_STRINGINSTRUMENT_H
#define INC_10_14_STRINGINSTRUMENT_H

#ifndef STR_INSTRUMENTH
#define STR_INSTRUMENTH

#include "Instrument.h"

class StringInstrument : public Instrument {
    // TODO: Declare private data members: numStrings, numFrets, isBowed
private:
    int numStrings;
    int numFrets;
    bool isBowed;

public:
    StringInstrument() : numStrings(0), numFrets(0), isBowed(false) {}

    // TODO: Declare mutator functions -
    //      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
    void SetNumOfStrings(int numS);
    void SetNumOfFrets(int frets);
    void SetIsBowed(bool bowed);

    // TODO: Declare accessor functions -
    //      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()
    int GetNumOfStrings() const;
    int GetNumOfFrets() const;
    bool GetIsBowed() const;

};

#endif


#endif //INC_10_14_STRINGINSTRUMENT_H
