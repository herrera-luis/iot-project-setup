#ifdef UNIT_TEST

namespace BlinkTest
{

    void test_setup(void)
    {
        When(Method(ArduinoFake(), pinMode)).AlwaysReturn();

        pinMode(LED_BUILTIN, OUTPUT);

        Verify(Method(ArduinoFake(), pinMode).Using(LED_BUILTIN, OUTPUT)).Once();
    }

    void test_loop(void)
    {
        When(Method(ArduinoFake(), digitalWrite)).AlwaysReturn();
        When(Method(ArduinoFake(), delay)).AlwaysReturn();

        digitalWrite(LED_BUILTIN, HIGH);
        delay(100);
        Verify(Method(ArduinoFake(), digitalWrite).Using(LED_BUILTIN, HIGH)).Once();

        
        digitalWrite(LED_BUILTIN, LOW);
        delay(100);
        Verify(Method(ArduinoFake(), digitalWrite).Using(LED_BUILTIN, LOW)).Once();
       
        Verify(Method(ArduinoFake(), delay).Using(100)).Exactly(2_Times);
    }

    void run_tests(void)
    {

        RUN_TEST(BlinkTest::test_setup);
        RUN_TEST(BlinkTest::test_loop);
    }
}

#endif