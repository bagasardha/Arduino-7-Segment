const byte numeral[11]={
B00111110, //untuk huruf b
B11111010, //untuk huruf a
B11110110, //untuk huruf g
B11111010, //untuk huruf a
B10110110, //untuk huruf s


B00000000, //tanpa menampilkan apapun
};
//inisialisasi pin yang digunakan
const int segmentPins[8]= {2,10,9,8,7,6,5,4}; //dp,g,f,e,d,c,b,a
void setup(){
for (int i=0; i < 8; i++){
pinMode(segmentPins[i], OUTPUT);
}}
void loop(){
for (int i=0; i <=10; i++){
tunjukanAngka(i);
delay(1000);
}
delay(2000); }
void tunjukanAngka (int number){
boolean isBitSet;
for (int segment=1; segment < 8; segment++){
isBitSet= bitRead(numeral[number], segment);
digitalWrite(segmentPins[segment], isBitSet); }
}
