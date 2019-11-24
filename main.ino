void setup()
{
	REG_WRITE(GPIO_ENABLE_REG, BIT2);//Define o GPIO2 como saída
}

void loop()
{
	REG_WRITE(GPIO_OUT_W1TS_REG, BIT2);//GPIO2 HIGH (set)
        delay(250);
	REG_WRITE(GPIO_OUT_W1TC_REG, BIT2);//GPIO2 LOW (clear)
        delay(250);
}
