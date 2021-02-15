//RH_RF95_BW_125KHZ | RH_RF95_CODING_RATE_4_5,
//RH_RF95_SPREADING_FACTOR_4096CPS,
//0x00 //RH_RF95_PAYLOAD_CRC_ON

RH_RF95::ModemConfig config_0_1 = { 0x72,  0xc0,  0x08 };
RH_RF95::ModemConfig config_0_2 = { 0x74,  0xc0,  0x08 };
RH_RF95::ModemConfig config_0_3 = { 0x76,  0xc0,  0x08 };
RH_RF95::ModemConfig config_0_4 = { 0x78,  0xc0,  0x08 };

RH_RF95::ModemConfig config_1_1 = { 0x72,  0xb0,  0x08 };
RH_RF95::ModemConfig config_1_2 = { 0x74,  0xb0,  0x08 };
RH_RF95::ModemConfig config_1_3 = { 0x76,  0xb0,  0x08 };
RH_RF95::ModemConfig config_1_4 = { 0x78,  0xb0,  0x08 };

RH_RF95::ModemConfig config_2_1 = { 0x72,  0xa0,  0x08 };
RH_RF95::ModemConfig config_2_2 = { 0x74,  0xa0,  0x08 };
RH_RF95::ModemConfig config_2_3 = { 0x76,  0xa0,  0x08 };
RH_RF95::ModemConfig config_2_4 = { 0x78,  0xa0,  0x08 };

RH_RF95::ModemConfig config_3_1 = { 0x72,  0x90,  0x08 };
RH_RF95::ModemConfig config_3_2 = { 0x74,  0x90,  0x08 };
RH_RF95::ModemConfig config_3_3 = { 0x76,  0x90,  0x08 };
RH_RF95::ModemConfig config_3_4 = { 0x78,  0x90,  0x08 };

RH_RF95::ModemConfig config_4_1 = { 0x72,  0x80,  0x08 };
RH_RF95::ModemConfig config_4_2 = { 0x74,  0x80,  0x08 };
RH_RF95::ModemConfig config_4_3 = { 0x76,  0x80,  0x08 };
RH_RF95::ModemConfig config_4_4 = { 0x78,  0x80,  0x08 };

RH_RF95::ModemConfig config_5_1 = { 0x72,  0x70,  0x08 };
RH_RF95::ModemConfig config_5_2 = { 0x74,  0x70,  0x08 };
RH_RF95::ModemConfig config_5_3 = { 0x76,  0x70,  0x08 };
RH_RF95::ModemConfig config_5_4 = { 0x78,  0x70,  0x08 };

RH_RF95::ModemConfig config_6_1 = { 0x82,  0x70,  0x08 };
RH_RF95::ModemConfig config_6_2 = { 0x84,  0x70,  0x08 };
RH_RF95::ModemConfig config_6_3 = { 0x86,  0x70,  0x08 };
RH_RF95::ModemConfig config_6_4 = { 0x88,  0x70,  0x08 };

RH_RF95::ModemConfig *refs[28] = {
	&config_0_1, &config_0_2, &config_0_3, &config_0_4,
	&config_1_1, &config_1_2, &config_1_3, &config_1_4,
	&config_2_1, &config_2_2, &config_2_3, &config_2_4,
	&config_3_1, &config_3_2, &config_3_3, &config_3_4,
	&config_4_1, &config_4_2, &config_4_3, &config_4_4,
	&config_5_1, &config_5_2, &config_5_3, &config_5_4,
	&config_6_1, &config_6_2, &config_6_3, &config_6_4
};
