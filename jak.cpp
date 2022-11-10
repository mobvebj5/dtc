#include "mob.h"
jak::jak (bool st){}
void jak::jk(int aval,int dovom){
    Serial.Begin(9600);
    Serial.print("adad ha?");
    if (Serial.available() > 0) {
aval = Serial.read();
}
if (Serial.available() > 0) {
dovom = Serial.read();
}


    Serial.println("equals:");
    Serial.print(aval + dovom)
    
}