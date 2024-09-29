int led = 9;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT); // 핀 모드 설정 9번 핀
}

void loop() {
  // put your main code here, to run repeatedly:
  // set the brightness of pin 9:
  analogWrite(led, brightness); // 밝기 0

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount; // 밝기 5 추가

  // reverse the direction of the fading at the ends of the fade:
  if (brightness <= 0 || brightness >= 255) { // 0보다 작거나 255보다 크면 가중치 부호 변경 즉 0~255 반복
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(30);
}
