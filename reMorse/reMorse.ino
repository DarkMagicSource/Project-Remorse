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
        if (input == 'a', 'A') {morseA();}
        if (input == 'b', 'B') {morseB();}
        if (input == 'c', 'C') {morseC();}
        if (input == 'd', 'D') {morseD();}
        if (input == 'e', 'E') {morseE();}
        if (input == 'f', 'F') {morseF();}
        if (input == 'g', 'G') {morseG();}
        if (input == 'h', 'H') {morseH();}
        if (input == 'i', 'I') {morseI();}
        if (input == 'j', 'J') {morseJ();}
        if (input == 'k', 'K') {morseK();}
        if (input == 'l', 'L') {morseL();}
        if (input == 'm', 'M') {morseM();}
        if (input == 'n', 'N') {morseN();}
        if (input == 'o', 'O') {morseO();}
        if (input == 'p', 'P') {morseP();}
        if (input == 'q', 'Q') {morseQ();}
        if (input == 'r', 'R') {morseR();}
        if (input == 's', 'S') {morseS();}
        if (input == 't', 'T') {morseT();}
        if (input == 'u', 'U') {morseU();}
        if (input == 'v', 'V') {morseV();}
        if (input == 'w', 'W') {morseW();}
        if (input == 'x', 'X') {morseX();}
        if (input == 'y', 'Y') {morseY();}
        if (input == 'z', 'Z') {morseZ();}
    }
}
