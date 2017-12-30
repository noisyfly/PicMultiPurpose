#ifndef DHT22
#define DHT22



#define DHT22_BIT_COUNT         40
#define DHT22_MS_BETWEEN_CONV   2000
       

extern void DoDHT22Cycle(void);
extern void  DHT22IOCAF(void);
extern void DHT22Error(void);


#endif