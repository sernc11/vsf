vsf_err_t stm32_adc_init(uint8_t index);
vsf_err_t stm32_adc_fini(uint8_t index);
vsf_err_t stm32_adc_config(uint8_t index, uint32_t clock_hz, uint32_t mode);
vsf_err_t stm32_adc_config_channel(uint8_t index, uint8_t channel, 
									uint8_t cycles);
vsf_err_t stm32_adc_calibrate(uint8_t index, uint8_t channel);
uint32_t stm32_adc_get_max_value(uint8_t index);
vsf_err_t stm32_adc_start(uint8_t index, uint8_t channel,
							void (callback)(void *, uint16_t), void *param);
