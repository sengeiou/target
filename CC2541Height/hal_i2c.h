
/**
* �ҽ��ָ�д���I2Cģ��
* by chenm 2017-04-27

  ������Slave mode��صĴ��붼ɾ���ˣ�������Master mode
  by chenm 2017-05-12

* ��TI�ṩ��SensorTag��Ŀ�з������Ǳ�д��I2C���룬������������޸�
* �Ķ��Ƚϴ󣬽ӿں��������ˡ�
* by chenm 2017-09-16

*/


#ifndef HAL_I2C_H
#define HAL_I2C_H

/* ------------------------------------------------------------------------------------------------
 *                                          Includes
 * ------------------------------------------------------------------------------------------------
 */

//#include "hal_types.h"
#include "comdef.h"


/* ------------------------------------------------------------------------------------------------
 *                                           Typedefs
 * ------------------------------------------------------------------------------------------------
 */


typedef enum {
  i2cClock_123KHZ = 0x00,
  i2cClock_144KHZ = 0x01,
  i2cClock_165KHZ = 0x02,
  i2cClock_197KHZ = 0x03,
  i2cClock_33KHZ  = 0x80,
  i2cClock_267KHZ = 0x81,
  i2cClock_533KHZ = 0x82
} i2cClock_t;


/* ------------------------------------------------------------------------------------------------
 *                                       Global Functions
 * ------------------------------------------------------------------------------------------------
 */

// ��ʼ��I2Cģ�飬����I2C�ӻ��ĵ�ַ���Լ�ͨ�ŵ�ʱ��Ƶ��
extern void HalI2CInit(uint8 address, i2cClock_t clockRate);

// ��ָ����������
extern uint8 HalI2CRead(uint8 len, uint8 *pBuf);

// дָ����������
extern uint8 HalI2CWrite(uint8 len, uint8 *pBuf);

// disable I2Cģ��, ��Ҫ����hal_sleep��������ģʽ�¹ر�I2C
extern void HalI2CDisable(void);



#endif /*  HAL_I2C_H  */