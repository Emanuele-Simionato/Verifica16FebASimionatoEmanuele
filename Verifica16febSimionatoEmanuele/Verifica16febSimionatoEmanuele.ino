int durataRosso = 0;
int durataBianco = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(12, OUTPUT);//led rosso
pinMode(6,OUTPUT);//led giallo
pinMode(8,OUTPUT);//led bianco
pinMode(10,OUTPUT);//led verde
Serial.begin(9600);//attivo la seriale a 9600 bit/s
Serial.println("INSERISCI LA DURATA DEL LED ROSSO E GIALLO(in milli secondi)");
while(Serial.available() == 0){}
durataRosso = Serial.readString().toInt();
Serial.println("HAI INSERITO");
Serial.println(durataRosso);
Serial.println("INSERISCI LA DURATA DEL LED BIANCO E VERDE(in millisecondi)");
while(Serial.available() == 0){}
durataBianco = Serial.readString().toInt();
Serial.println("HAI INSERITO");
Serial.println(durataBianco);
}
void a(){
  digitalWrite(12,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(10,LOW);
  }
void b(){
  digitalWrite(6,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(8,HIGH);
  }
void loop() {
  // put your main code here, to run repeatedly:
  a();
  delay(durataRosso);
  b();
  delay(durataBianco);
}
