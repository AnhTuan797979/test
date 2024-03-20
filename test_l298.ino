// Khai báo chân kết nối với cầu H L298 cho Motor 1
const int ENA = 5; // Chân PWM cho Motor 1
const int IN1 = 2; // Chân kết nối IN1 của L298 với Arduino cho Motor 1
const int IN2 = 3; // Chân kết nối IN2 của L298 với Arduino cho Motor 1

// Khai báo chân kết nối với cầu H L298 cho Motor 2
const int ENB = 10; // Chân PWM cho Motor 2
const int IN3 = 6; // Chân kết nối IN1 của L298 với Arduino cho Motor 2
const int IN4 = 7; // Chân kết nối IN2 của L298 với Arduino cho Motor 2

void setup() {
  // Khai báo chân là OUTPUT
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  
  // Khởi tạo tốc độ ban đầu của động cơ
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void loop() {
  // Điều khiển động cơ 1 tiến về phía trước
  analogWrite(ENA, 200); // Điều chỉnh tốc độ bằng PWM
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  
  // Điều khiển động cơ 2 tiến về phía trước
  analogWrite(ENB, 200); // Điều chỉnh tốc độ bằng PWM
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  
  delay(2000); // Dừng 2 giây
  
  // Điều khiển động cơ 1 lùi về phía sau
  analogWrite(ENA, 200); // Điều chỉnh tốc độ bằng PWM
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  
  // Điều khiển động cơ 2 lùi về phía sau
  analogWrite(ENB, 200); // Điều chỉnh tốc độ bằng PWM
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  
  delay(5000); // Dừng 2 giây
}
