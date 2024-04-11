/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_newCxxTest_init = false;
#include "../newCxxTest.h"

static newCxxTest suite_newCxxTest;

static CxxTest::List Tests_newCxxTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_newCxxTest( "/Users/ramonbaez/Documents/CSC109SP24/10.14/newCxxTest.h", 13, "newCxxTest", suite_newCxxTest, Tests_newCxxTest );

static class TestDescription_suite_newCxxTest_testInstrumentFunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testInstrumentFunctions() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 16, "testInstrumentFunctions" ) {}
 void runTest() { suite_newCxxTest.testInstrumentFunctions(); }
} testDescription_suite_newCxxTest_testInstrumentFunctions;

static class TestDescription_suite_newCxxTest_testStringInstrumentFunctions : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_newCxxTest_testStringInstrumentFunctions() : CxxTest::RealTestDescription( Tests_newCxxTest, suiteDescription_newCxxTest, 39, "testStringInstrumentFunctions" ) {}
 void runTest() { suite_newCxxTest.testStringInstrumentFunctions(); }
} testDescription_suite_newCxxTest_testStringInstrumentFunctions;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
