#ifndef AMC
#define AMC

#if (ARDUINO >=100)
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

class ASCIIMC {
  public:
  //Constructor to test header call
    ASCIIMC(bool displayMsg=false);
  //MC Functions
    void Wspace();
    void Lspace();
    void A();
    void B();
    void C();
    void D();
    void E();
    void f();
    void G();
    void H();
    void I();
    void J();
    void K();
    void L();
    void M();
    void N();
    void O();
    void P();
    void Q();
    void R();
    void S();
    void T();
    void U();
    void V();
    void W();
    void X();
    void Y();
    void Z();
    void alphabet();
    void GodIsDead();
    void translating(const String& phraser);
  private:
    void dit();
    void dah();
    void space();
  };
#endif
