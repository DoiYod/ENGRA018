/*
// #include <Arduino.h>
// // กำหนดพอร์ตที่ใช้สำหรับ LED
// int L1 = 23; // led1
// int L2 = 19; // led2
// int L3 = 18; // led3
// int L4 = 5; // led4
// int L5 = 17; // led5
// int L6 = 16; // led6
// int L7 = 4; // led7
// int L8 = 0; // led8

// void setup() 
// {
//   // ตั้งค่า LED ทุกตัวให้ทำงานในโหมด PWM
//   pinMode(L1, OUTPUT);
//   pinMode(L2, OUTPUT);
//   pinMode(L3, OUTPUT);
//   pinMode(L4, OUTPUT);
//   pinMode(L5, OUTPUT);
//   pinMode(L6, OUTPUT);
//   pinMode(L7, OUTPUT);
//   pinMode(L8, OUTPUT);
  
//   // ตั้งค่าพอร์ตของ Potentiometer
//   pinMode(36, INPUT);  // Potentiometer เชื่อมต่อกับ GPIO36 (A0)
//   pinMode(39, INPUT);
// }

// void loop() {
// {
//   // อ่านค่าจาก Potentiometer (0 ถึง 4095)
//   int potValue = analogRead(36);

//   // ปิด LED ทั้งหมดก่อน
//   digitalWrite(L1, LOW);
//   digitalWrite(L2, LOW);
//   digitalWrite(L3, LOW);
//   digitalWrite(L4, LOW);
 

//   // ตรวจสอบค่าจาก Potentiometer และเปิด LED ตามช่วงค่าที่กำหนด
//   if (potValue >= 1 && potValue <= 1500) {
//     // ถ้าค่า Potentiometer อยู่ในช่วง 0-500 ให้ L1 ติด
//     digitalWrite(L1, HIGH);
//   }
//   else if (potValue >= 1501 && potValue <= 2500) {
//     // ถ้าค่า Potentiometer อยู่ในช่วง 501-1000 ให้ L1 L2 L3 ติด
//     digitalWrite(L1, HIGH);
//     digitalWrite(L2, HIGH);
    
//   }
//   else if (potValue >= 2501 && potValue <= 3200) {
//     // ถ้าค่า Potentiometer อยู่ในช่วง 1001-2000 ให้ L1 L2 L3 L4 L5 ติด
//     digitalWrite(L1, HIGH);
//     digitalWrite(L2, HIGH);
//     digitalWrite(L3, HIGH);
    
//   }
//   else if (potValue > 3201 ) {
//     // ถ้าค่า Potentiometer อยู่ในช่วงมากกว่า 2000 ให้ L1 L2 L3 L4 L5 L6 L7 L8 ติด
//     digitalWrite(L1, HIGH);
//     digitalWrite(L2, HIGH);
//     digitalWrite(L3, HIGH);
//     digitalWrite(L4, HIGH);
 
//   }

//   // หน่วงเวลาเพื่อให้การอ่านค่ามีความเสถียร
//   delay(100);
  
// }
// {
//   int potValue = analogRead(39);

//   // ปิด LED ทั้งหมดก่อน
//   digitalWrite(L5, LOW);
//   digitalWrite(L6, LOW);
//   digitalWrite(L7, LOW);
//   digitalWrite(L8, LOW);
 

//   // ตรวจสอบค่าจาก Potentiometer และเปิด LED ตามช่วงค่าที่กำหนด
//   if (potValue >= 1 && potValue <= 1500) {
//     // ถ้าค่า Potentiometer อยู่ในช่วง 0-500 ให้ L1 ติด
//     digitalWrite(L5, HIGH);
//   }
//   else if (potValue >= 1501 && potValue <= 2500) {
//     // ถ้าค่า Potentiometer อยู่ในช่วง 501-1000 ให้ L1 L2 L3 ติด
//     digitalWrite(L5, HIGH);
//     digitalWrite(L6, HIGH);
    
//   }
//   else if (potValue >= 2501 && potValue <= 3200) {
//     // ถ้าค่า Potentiometer อยู่ในช่วง 1001-2000 ให้ L1 L2 L3 L4 L5 ติด
//     digitalWrite(L5, HIGH);
//     digitalWrite(L6, HIGH);
//     digitalWrite(L7, HIGH);
    
//   }
//   else if (potValue > 3201) {
//     // ถ้าค่า Potentiometer อยู่ในช่วงมากกว่า 2000 ให้ L1 L2 L3 L4 L5 L6 L7 L8 ติด
//     digitalWrite(L5, HIGH);
//     digitalWrite(L6, HIGH);
//     digitalWrite(L7, HIGH);
//     digitalWrite(L8, HIGH);
 
//   }

//   // หน่วงเวลาเพื่อให้การอ่านค่ามีความเสถียร
//   delay(100);
//   }
// }
*/