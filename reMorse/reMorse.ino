int input = 0;

void setup () {
    Serial.begin(9600);
    pinMode(3, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
}

void loop () {

    if (Serial.available() > 0) {
        input = Serial.read();

        if (input == '0') {morse0();}
        if (input == '1') {morse1();}
        if (input == '2') {morse2();}
        if (input == '3') {morse3();}
        if (input == '4') {morse4();}
        if (input == '5') {morse5();}
        if (input == '6') {morse6();}
        if (input == '7') {morse7();}
        if (input == '8') {morse8();}
        if (input == '9') {morse9();}
        if (input == 'a') {morseA();}
        if (input == 'b') {morseB();}
        if (input == 'c') {morseC();}
        if (input == 'd') {morseD();}
        if (input == 'e') {morseE();}
        if (input == 'f') {morseF();}
        if (input == 'g') {morseG();}
        if (input == 'h') {morseH();}
        if (input == 'i') {morseI();}
        if (input == 'j') {morseJ();}
        if (input == 'k') {morseK();}
        if (input == 'l') {morseL();}
        if (input == 'm') {morseM();}
        if (input == 'n') {morseN();}
        if (input == 'o') {morseO();}
        if (input == 'p') {morseP();}
        if (input == 'q') {morseQ();}
        if (input == 'r') {morseR();}
        if (input == 's') {morseS();}
        if (input == 't') {morseT();}
        if (input == 'u') {morseU();}
        if (input == 'v') {morseV();}
        if (input == 'w') {morseW();}
        if (input == 'x') {morseX();}
        if (input == 'y') {morseY();}
        if (input == 'z') {morseZ();}
        if (input ==  ' ') {morseSpace();}
    }
}

void morseSpace () {
    delay(2000);
}
