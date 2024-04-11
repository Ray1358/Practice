//
// CopyRight 2024
//

#ifndef INC_10_14_NEWCXXTEST_H
#define INC_10_14_NEWCXXTEST_H


#include <cxxtest/TestSuite.h>
#include "Instrument.h"
#include "StringInstrument.h"

class newCxxTest : public CxxTest::TestSuite {
public:

    void testInstrumentFunctions() {
        Instrument instrument;

        // Test SetName() and GetName()
        instrument.SetName("Guitar");
        TS_ASSERT_EQUALS(instrument.GetName(), "Guitar");

        // Test SetManufacturer() and GetManufacturer()
        instrument.SetManufacturer("Gibson");
        TS_ASSERT_EQUALS(instrument.GetManufacturer(), "Gibson");

        // Test SetYearBuilt() and GetYearBuilt()
        instrument.SetYearBuilt(2020);
        TS_ASSERT_EQUALS(instrument.GetYearBuilt(), 2020);

        // Test SetCost() and GetCost()
        instrument.SetCost(1000);
        TS_ASSERT_EQUALS(instrument.GetCost(), 1000);

        // PrintInfo() is a void function, so we will just call it for coverage
        instrument.PrintInfo();
    }

    void testStringInstrumentFunctions() {
        StringInstrument stringInstrument;

        // Test SetNumOfStrings() and GetNumOfStrings()
        stringInstrument.SetNumOfStrings(6);
        TS_ASSERT_EQUALS(stringInstrument.GetNumOfStrings(), 6);

        // Test SetNumOfFrets() and GetNumOfFrets()
        stringInstrument.SetNumOfFrets(24);
        TS_ASSERT_EQUALS(stringInstrument.GetNumOfFrets(), 24);

        // Test SetIsBowed() and GetIsBowed()
        stringInstrument.SetIsBowed(false);
        TS_ASSERT_EQUALS(stringInstrument.GetIsBowed(), false);
    }
};
#endif //INC_10_14_NEWCXXTEST_H
