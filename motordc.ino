int motor = 5;   //bagian deklarasi variabel dan langsung diinisialisasi pada pin 5 arduino menggunakan tipe data integer

void setup() {
  pinMode(motor, OUTPUT); //set variabel motor sebagai output

}

void loop() {
  digitalWrite(motor, HIGH); //motor nyala atau keadaan logika high or true (mendapat tegangan)

}
