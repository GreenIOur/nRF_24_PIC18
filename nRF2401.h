#include "nRF2401_config.h"

#define MAX_PAYLOAD 32

unsigned char nrf_getStatus(void);
unsigned char nrf_send(unsigned char * tx_buf, unsigned char * rx_buf);
void nrf_send_noack(unsigned char * tx_buf, unsigned char * rx_buf);
unsigned char nrf_receive(unsigned char * tx_buf, unsigned char * rx_buf);

void nrf_init(void);
void nrf_txmode(void);
void nrf_rxmode(void);
void nrf_powerdown(void);

void nrf_setTxAddr(char addr);
void nrf_setRxAddr(char pipe, char addr);
char nrf_enablePipe(char pipe);
char nrf_disablePipe(char pipe);
char nrf_readRegister(char loc);
