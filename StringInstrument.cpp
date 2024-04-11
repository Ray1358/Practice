//
// CopyRight 2024
//

#include "StringInstrument.h"
#include "Instrument.h"

// TODO: Define mutator functions -
//      SetNumOfStrings(), SetNumOfFrets(), SetIsBowed()
void StringInstrument::SetNumOfStrings(int numS) {
    numStrings = numS;
}

void StringInstrument::SetNumOfFrets(int frets) {
numFrets = frets;
}

void StringInstrument::SetIsBowed(bool bowed) {
    isBowed = bowed;
}


// TODO: Define accessor functions -
//      GetNumOfStrings(), GetNumOfFrets(), GetIsBowed()

int StringInstrument::GetNumOfStrings() const {
    return numStrings;
}

int StringInstrument::GetNumOfFrets() const {
    return numFrets;
}

bool StringInstrument::GetIsBowed() const {
    return isBowed;
}


