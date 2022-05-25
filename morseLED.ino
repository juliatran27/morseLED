/*

An LED connected to pin 13 blinks a message in morse code. Repeats forever.

*/

/* Morse code 
A .-    N -.    1 .---- ?..--..
B -...  O ---   2 ..--- ! -.-.--
C -.-.  P .--.  3 ...-- . .-.-.-
D -..   Q --.-  4 ....- ,--..--
E .     R .-.   5 .....
F ..-.  S ...   6 -....
G --.   T -     7 --...
H ....  U ..-   8 ---..
I ..    V ...-  9 ----.
J .---  W .--   0 -----
K -.-   X -..-
L .-..  Y -.--
M --    Z --..

*/

void setup() {

  pinMode(13, OUTPUT);      // Set pin 13 to output

}

void dot(uint16_t num){

    for(int i = 0; i<num; i++){ 
        digitalWrite(13, HIGH);  // Turn on the LED
        delay(1000);             // Wait for one seconds
        digitalWrite(13, LOW);   // Turn off the LED
        delay(1000);             // Wait for one seconds
    }

}

void dash(uint16_t num){

    for(int i = 0; i< num; i++){
        digitalWrite(13, HIGH);  // Turn on the LED
        delay(2000);             // Wait for two seconds
        digitalWrite(13, LOW);   // Turn off the LED
        delay(1000);             // Wait for one seconds
    }
}


void A(){
    dot(1);
    dash(1);
}

void B(){
    dash(1);
    dot(3);
}

void C(){
    dash(1);
    dot(1);
    dash(1);
    dot(1);
}

void D(){
    dash(1);
    dot(2);
}

void E(){
    dot(1);
}

void f(){
    dot(2);
    dash(1);
    dot(1);
}

void G(){
    dash(2);
    dot(1);
}

void H(){
    dot(4);
}

void I(){
    dot(2);
}

void J(){
    dot(1);
    dash(3);
}

void K(){
    dash(1);
    dot(1);
    dash(1);
}

void L(){
    dot(1);
    dash(1);
    dot(2);
}

void M(){
    dash(2);
}

void N(){
    dash(1);
    dot(1);
}

void O(){
    dash(3);
}

void P(){
    dot(1);
    dash(2);
    dot(1);
}

void Q(){
    dash(2);
    dot(1);
    dash(1);
}

void R(){
    dot(1);
    dash(2);
    dot(1);
}

void S(){
    dot(3);
}

void T(){
    dash(1);
}

void U(){
    dot(2);
    dash(1);
}

void V(){
    dot(3);
    dash(1);
}

void W(){
    dot(1);
    dash(2);
}

void X(){
    dash(1);
    dot(2);
    dash(1);
}

void Y(){
    dash(1);
    dot(1);
    dash(2);
}

void Z(){
    dash(2);
    dot(2);
}

void exclamation(){
    dash(1);
    dot(1);
    dash(1);
    dot(1);
    dash(2);
}

/*Input a message!*/
void loop(){

    H();
    E();
    L();
    L();
    O();

    W();
    O();
    R();
    L();
    D();
    exclamation();
}