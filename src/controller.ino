const int left_pin = 8;
const int right_pin = 9;
const int up_pin = 10;
const int down_pin = 11;


void setup() {
  // initalizing directions
  pinMode(left_pin,INPUT_PULLUP);
  pinMode(right_pin,INPUT_PULLUP);
  pinMode(up_pin,INPUT_PULLUP);
  pinMode(down_pin,INPUT_PULLUP);

  pinMode(13,OUTPUT); // diode that lights up
  Serial.begin(9600); // for writing to serial monitor
}

void loop() {
  int left_status =  digitalRead(left_pin); // reads button state
  if(!left_status){
    Serial.println("left"); // left was clicked
  }

  int right_status =  digitalRead(right_pin); // reads button state
  if(!right_status){
    Serial.println("right"); // right was clicked
  }

  int up_status =  digitalRead(up_pin); // reads button state
  if(!up_status){
    Serial.println("up"); // up was clicked
  }
  
  int down_status =  digitalRead(down_pin); // reads button state
  if(!down_status){
    Serial.println("down"); // down was clicked
  }
}
