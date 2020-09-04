#include "ASCIIMC.h"
//Preliminary Codes
ASCIIMC::ASCIIMC(bool displayMsg){
}
    void ASCIIMC::dit(){
      digitalWrite(13, HIGH);
      delay(1000);
    }
    
    void ASCIIMC::dah(){
      digitalWrite(13, HIGH);
      delay(3000);
    }
    
    void ASCIIMC::space(){
      digitalWrite(13, LOW);
      delay(1000);
    }
    
    void ASCIIMC::Wspace() {
      digitalWrite(13, LOW);
      delay(7000);
    }
    
    void ASCIIMC::Lspace() {
      digitalWrite(13, LOW);
      delay(3000);
    }
    
    //Alphabet
    
    void ASCIIMC::A() {
      dit(); space();
      dah();   
    }
    
    void ASCIIMC::B(){
      dah(); space();
      dit(); space();
      dit(); space();
      dit();  
    }
    
    void ASCIIMC::C(){
      dah(); space();
      dit(); space();
      dah(); space();
      dit();
    }
    
    void ASCIIMC::D() {
    dah(); space();
    dit(); space();
    dit();  
    }
    
    void ASCIIMC::E() {
      dit();
    }

   //Does not work for some reason??? 
   /* void ASCIIMC::F(){
      dit(); space(); 
      dit(); space();
      dah(); space();
      dit();
    }*/

    void ASCIIMC::f() {
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      delay(1000);
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      delay(1000);
      digitalWrite(13, HIGH);
      delay(3000);
      digitalWrite(13, LOW);
      delay(1000);
      digitalWrite(13, HIGH);
      delay(1000); 
    }
    
    void ASCIIMC::G() {
      digitalWrite(13, HIGH);
      delay(3000);
      digitalWrite(13, LOW);
      delay(1000);
      digitalWrite(13, HIGH);
      delay(3000);
      digitalWrite(13,LOW);
      delay(1000);
      digitalWrite(13, HIGH);
      delay(1000);
      }
    
    void ASCIIMC::H() {
      dit(); space();
      dit(); space();
      dit(); space();
      dit();
    }
    
    void ASCIIMC::I() {
      dit(); space();
      dit();
    }
    
    void ASCIIMC::J() {
      dit(); space();
      dah(); space();
      dah(); space();
      dah();
    }
    
    void ASCIIMC::K() {
      dah(); space();
      dit(); space();
      dah();
    }
    
    void ASCIIMC::L() {
      dit(); space();
      dah(); space();
      dit(); space();
      dit();
    }
    
    void ASCIIMC::M() {
      dah(); space();
      dah();
    }
    
    void ASCIIMC::N() {
      dah(); space();
      dit();  
    }
    
    void ASCIIMC::O(){
      dah(); space(); 
      dah(); space();
      dah();
    }
    
    void ASCIIMC::P() {
      dit(); space();
      dah(); space();
      dah(); space();
      dit();
    }
    
    void ASCIIMC::Q() {
      dah(); space();
      dah(); space();
      dit(); space();
      dah();   
    }
    
    void ASCIIMC::R() {
      dit(); space();
      dah(); space();
      dit();
    }
    
    void ASCIIMC::S(){ 
      dit(); space();
      dit(); space();
      dit(); 
    }
    
    void ASCIIMC::T() {
      dah();
    }
    
    void ASCIIMC::U() {
      dit(); space();
      dit(); space();
      dah();  
    }
    
    void ASCIIMC::V() {
      dit(); space();
      dit(); space();
      dit(); space();
      dah();
    }
    
    void ASCIIMC::W() {
      dit(); space();
      dah(); space();
      dah();
    }
    
    void ASCIIMC::X() {
      dah(); space();
      dit(); space();
      dit(); space();
      dah();
    }
    
    void ASCIIMC::Y() {
      dah(); space();
      dit(); space();
      dah(); space();
      dah();
    }
    
    void ASCIIMC::Z() {
      dah(); space();
      dah(); space();
      dit(); space();
      dit();
    }

// Phrases

 void ASCIIMC::alphabet() {
  A();
  Lspace();
  B();
  Lspace();
  C();
  Lspace();
  D();
  Lspace();
  E();
  Lspace();
  f();
  Lspace();
  G();
  Lspace();
  H();
  Lspace();
  I();
  Lspace();
  J();
  Lspace();
  K();
  Lspace();
  L();
  Lspace();
  M();
  Lspace();
  N();
  Lspace();
  O();
  Lspace();
  P();
  Lspace();
  Q();
  Lspace();
  R();
  Lspace();
  S();
  Lspace();
  T();
  Lspace();
  U();
  Lspace();
  V();
  Lspace();
  W();
  Lspace();
  X();
  Lspace();
  Y();
  Lspace();
  Z();
  Wspace();
}

void ASCIIMC::GodIsDead(){
G(); 
Lspace();

O(); 
Lspace();

D(); 
Wspace();

I(); 
Lspace();

S(); 
Wspace();

D(); 
Lspace();

E(); 
Lspace();

A(); 
Lspace();

D(); 
Wspace();  
}

//translating algorithm

void ASCIIMC::translating(const String& phraser){ 
  unsigned int capacity = phraser.length(); 
  for(int i{0}; i < capacity; ++i){
    char x = phraser.charAt(i);
    if( x == 'a' || x == 'A'){
      Serial.println('a');
      A();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'b' || x == 'B'){
      Serial.println('b');
      B();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'c' || x == 'C'){
      Serial.println('c');
      C();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'd' || x == 'D'){
      Serial.println('d');
      D();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'e' || x == 'E'){
      Serial.println('e');
      E();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'f' || x == 'F'){
      Serial.println('f');
      f();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'g' || x == 'G'){
      Serial.println('g');
      G();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'h' || x == 'H'){
      Serial.println('h');
      H();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'i' || x == 'I'){
      Serial.println('i');
      I();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'j' || x == 'J'){
      Serial.println('j');
      J();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'k' || x == 'K'){
      Serial.println('k');
      K();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'l' || x == 'L'){
      Serial.println('l');
      L();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'm' || x == 'M'){
      Serial.println('m');
      M();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'n' || x == 'N'){
      Serial.println('n');
      N();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'o' || x == 'O'){
      Serial.println('o');
      O();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'p' || x == 'P'){
      Serial.println('p');
      P();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'q' || x == 'Q'){
      Serial.println('q');
      Q();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 'r' || x == 'R'){
      Serial.println('r');
      R();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if( x == 's' || x == 'S'){
      Serial.println('s');
      S();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if(x == 't' || x == 'T'){
      Serial.println('t');
      T();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if(x == 'u' || x == 'U'){
      Serial.println('u');
      U();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if(x == 'v' || x == 'V'){
      Serial.println('v');
      V();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if(x == 'w' || x == 'W'){
      Serial.println('w');
      W();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if(x == 'x' || x == 'X'){
      Serial.println('x');
      X();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if(x == 'y' || x == 'Y'){
      Serial.println('y');
      Y();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }
    if(x == 'z' || x == 'Z'){
      Serial.println('z');
      Z();
      if(phraser.charAt(i+1) == 32){Wspace();}
      else{Lspace();}
    }  
  }
}
