#include <Arduino.h>

// setup 函数，启动时调用一次
void setup()
{
    Serial.begin(115200); // 设置串口波特率
}

// loop 函数，setup 后会被重复调用
void loop()
{
    Serial.printf("Hello World!\n"); // 打印Hello World!
    delay(1000);                     // 延时函数，单位 ms
}
