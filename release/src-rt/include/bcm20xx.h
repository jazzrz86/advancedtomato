/*
 * Broadcom 20xx Digital Radios
 * Chip-specific hardware definitions.
 *
 * Copyright 2006, Broadcom Corporation
 * All Rights Reserved.                
 *                                     
 * This is UNPUBLISHED PROPRIETARY SOURCE CODE of Broadcom Corporation;   
 * the contents of this file may not be disclosed to third parties, copied
 * or duplicated in any form, in whole or in part, without the prior      
 * written permission of Broadcom Corporation.                            
 *
 * $Id$
 */

#ifndef	_BCM20XX_H
#define	_BCM20XX_H

/* generic radio id ragister */
#define	RADIO_IDCODE			0x01

/* 2050 registers */
#define	RADIO_2050_READ_OFF		0x80	/* Read offset for all registers but idcode */

#define	RADIO_2050_PLL_VAL		0x41
#define	RADIO_2050_PWR_CTL		0x43
#define	RADIO_2050_CAL_CTL		0x50
#define	RADIO_2050_TX_CTL0		0x51
#define	RADIO_2050_TX_CTL1		0x52
#define	RADIO_2050_PLL_OFFSET		0x58
#define	RADIO_2050_PLL_CTL0		0x5a
#define	RADIO_2050_PLL_CTL1		0x5b
#define	RADIO_2050_PLL_CTL2		0x5c
#define	RADIO_2050_PLL_CTL3		0x5d
#define	RADIO_2050_RX_LPF		0x60
#define	RADIO_2050_PU_OVR0		0x75
#define	RADIO_2050_PU_OVR		0x76
#define	RADIO_2050_RC_CAL_OVR		0x78
#define	RADIO_2050_RX_CTL0		0x7a

/* New/changed registers in 2050sc: */
#define	RADIO_2050SC_TX_CTL2		0x53
#define	RADIO_2050SC_TX_CTL3		0x54
#define	RADIO_2050SC_PLL_CTL4		0x5e
#define	RADIO_2050SC_RCAL_VAL0		0x60
#define	RADIO_2050SC_RCAL_VAL1		0x61
#define	RADIO_2050SC_RCAL_IND		0x62
#define	RADIO_2050SC_AGC_OVR		0x63
#define	RADIO_2050SC_FLTR_OVR		0x64
#define	RADIO_2050SC_CRY_TRIM0		0x73
#define	RADIO_2050SC_CRY_TRIM1		0x74
#define	RADIO_2050SC_RX_CTL1		0x7b
#define	RADIO_2050SC_RX_CTL2		0x7c
#define	RADIO_2050SC_RX_CTL3		0x7d
#define	RADIO_2050SC_LNA_BIAS		0x7e
#define	RADIO_2050SC_REF_SEL		0x7f

/* Bits in RX_CTL0: */
#define	RXC0_RSSI_RST			0x80
#define	RXC0_MODE_RSSI			0x40
#define	RXC0_MODE_OFF			0x20
#define	RXC0_MODE_CM			0x10
#define	RXC0_LAN_LOAD			0x08
#define	RXC0_OFF_ADJ_MASK		0x07

/* Bits in TX_CTL0: */
#define	TXC0_MODE_TXLPF			0x04
#define	TXC0_PA_TSSI_EN			0x02
#define	TXC0_TSSI_EN			0x01

/* Bits in TX_CTL1: */
#define	TXC1_PA_GAIN_MASK		0x60
#define	TXC1_PA_GAIN_3DB		0x40
#define	TXC1_PA_GAIN_2DB		0x20
#define	TXC1_TX_MIX_GAIN		0x10
#define	TXC1_OFF_I_MASK			0x0c
#define	TXC1_OFF_Q_MASK			0x03

/* 2055 registers */
#define	RADIO_2055_READ_OFF		0x100	/* Read offset for all registers but idcode */

#define RADIO_2055_GEN_SPARE		0x00
#define RADIO_2055_SP_PIN_PD		0x02
#define RADIO_2055_SP_RSSI_CORE1	0x03
#define RADIO_2055_SP_PD_MISC_CORE1	0x04
#define RADIO_2055_SP_RSSI_CORE2	0x05
#define RADIO_2055_SP_PD_MISC_CORE2	0x06
#define RADIO_2055_SP_RX_GC1_CORE1	0x07
#define RADIO_2055_SP_RX_GC2_CORE1	0x08
#define RADIO_2055_SP_RX_GC1_CORE2	0x09
#define RADIO_2055_SP_RX_GC2_CORE2	0x0a
#define RADIO_2055_SP_LPF_BW_SELECT_CORE1 0x0b
#define RADIO_2055_SP_LPF_BW_SELECT_CORE2 0x0c
#define RADIO_2055_SP_TX_GC1_CORE1	0x0d
#define RADIO_2055_SP_TX_GC2_CORE1	0x0e
#define RADIO_2055_SP_TX_GC1_CORE2	0x0f
#define RADIO_2055_SP_TX_GC2_CORE2	0x10
#define RADIO_2055_MASTER_CNTRL1	0x11
#define RADIO_2055_MASTER_CNTRL2	0x12
#define RADIO_2055_PD_LGEN		0x13
#define RADIO_2055_PD_PLL_TS		0x14
#define RADIO_2055_PD_CORE1_LGBUF	0x15
#define RADIO_2055_PD_CORE1_TX		0x16
#define RADIO_2055_PD_CORE1_RXTX	0x17
#define RADIO_2055_PD_CORE1_RSSI_MISC	0x18
#define RADIO_2055_PD_CORE2_LGBUF	0x19
#define RADIO_2055_PD_CORE2_TX		0x1a
#define RADIO_2055_PD_CORE2_RXTX	0x1b
#define RADIO_2055_PD_CORE2_RSSI_MISC	0x1c
#define RADIO_2055_PWRDET_LGEN		0x1d
#define RADIO_2055_PWRDET_LGBUF_CORE1	0x1e
#define RADIO_2055_PWRDET_RXTX_CORE1	0x1f
#define RADIO_2055_PWRDET_LGBUF_CORE2	0x20
#define RADIO_2055_PWRDET_RXTX_CORE2	0x21
#define RADIO_2055_RRCCAL_CNTRL_SPARE	0x22
#define RADIO_2055_RRCCAL_N_OPT_SEL	0x23
#define RADIO_2055_CAL_MISC		0x24
#define RADIO_2055_CAL_COUNTER_OUT	0x25
#define RADIO_2055_CAL_COUNTER_OUT2	0x26
#define RADIO_2055_CAL_CVAR_CNTRL	0x27
#define RADIO_2055_CAL_RVAR_CNTRL	0x28
#define RADIO_2055_CAL_LPO_CNTRL	0x29
#define RADIO_2055_CAL_TS		0x2a
#define RADIO_2055_CAL_RCCAL_READ_TS	0x2b
#define RADIO_2055_CAL_RCAL_READ_TS	0x2c
#define RADIO_2055_PAD_DRIVER		0x2d
#define RADIO_2055_XO_CNTRL1		0x2e
#define RADIO_2055_XO_CNTRL2		0x2f
#define RADIO_2055_XO_REGULATOR		0x30
#define RADIO_2055_XO_MISC		0x31
#define RADIO_2055_PLL_LF_C1		0x32
#define RADIO_2055_PLL_CAL_VTH		0x33
#define RADIO_2055_PLL_LF_C2		0x34
#define RADIO_2055_PLL_REF		0x35
#define RADIO_2055_PLL_LF_R1		0x36
#define RADIO_2055_PLL_PFD_CP		0x37
#define RADIO_2055_PLL_IDAC_CPOPAMP	0x38
#define RADIO_2055_PLL_CP_REGULATOR	0x39
#define RADIO_2055_PLL_RCAL		0x3a
#define RADIO_2055_RF_PLL_MOD0		0x3b
#define RADIO_2055_RF_PLL_MOD1		0x3c
#define RADIO_2055_RF_MMD_IDAC1		0x3d
#define RADIO_2055_RF_MMD_IDAC0		0x3e
#define RADIO_2055_RF_MMD_SPARE		0x3f
#define RADIO_2055_VCO_CAL1		0x40
#define RADIO_2055_VCO_CAL2		0x41
#define RADIO_2055_VCO_CAL3		0x42
#define RADIO_2055_VCO_CAL4		0x43
#define RADIO_2055_VCO_CAL5		0x44
#define RADIO_2055_VCO_CAL6		0x45
#define RADIO_2055_VCO_CAL7		0x46
#define RADIO_2055_VCO_CAL8		0x47
#define RADIO_2055_VCO_CAL9		0x48
#define RADIO_2055_VCO_CAL10		0x49
#define RADIO_2055_VCO_CAL11		0x4a
#define RADIO_2055_VCO_CAL12		0x4b
#define RADIO_2055_VCO_CAL13		0x4c
#define RADIO_2055_VCO_CAL14		0x4d
#define RADIO_2055_VCO_CAL15		0x4e
#define RADIO_2055_VCO_CAL16		0x4f
#define RADIO_2055_VCO_KVCO		0x50
#define RADIO_2055_VCO_CAP_TAIL		0x51
#define RADIO_2055_VCO_IDAC_VCO		0x52
#define RADIO_2055_VCO_REGULATOR	0x53
#define RADIO_2055_PLL_RF_VTH		0x54
#define RADIO_2055_LGBUF_CEN_BUF	0x55
#define RADIO_2055_LGEN_TUNE1		0x56
#define RADIO_2055_LGEN_TUNE2		0x57
#define RADIO_2055_LGEN_IDAC1		0x58
#define RADIO_2055_LGEN_IDAC2		0x59
#define RADIO_2055_LGEN_BIAS_CNT	0x5a
#define RADIO_2055_LGEN_BIAS_IDAC	0x5b
#define RADIO_2055_LGEN_RCAL		0x5c
#define RADIO_2055_LGEN_DIV		0x5d
#define RADIO_2055_LGEN_SPARE2		0x5e
#define RADIO_2055_CORE1_LGBUF_A_TUNE	0x5f
#define RADIO_2055_CORE1_LGBUF_G_TUNE	0x60
#define RADIO_2055_CORE1_LGBUF_DIV	0x61
#define RADIO_2055_CORE1_LGBUF_A_IDAC	0x62
#define RADIO_2055_CORE1_LGBUF_G_IDAC	0x63
#define RADIO_2055_CORE1_LGBUF_IDACFIL_OVR 0x64
#define RADIO_2055_CORE1_LGBUF_SPARE	0x65
#define RADIO_2055_CORE1_RXRF_SPC1	0x66
#define RADIO_2055_CORE1_RXRF_REG1	0x67
#define RADIO_2055_CORE1_RXRF_REG2	0x68
#define RADIO_2055_CORE1_RXRF_RCAL	0x69
#define RADIO_2055_CORE1_RXBB_BUFI_LPFCMP 0x6a
#define RADIO_2055_CORE1_RXBB_LPF	0x6b
#define RADIO_2055_CORE1_RXBB_MIDAC_HIPAS 0x6c
#define RADIO_2055_CORE1_RXBB_VGA1_IDAC	0x6d
#define RADIO_2055_CORE1_RXBB_VGA2_IDAC	0x6e
#define RADIO_2055_CORE1_RXBB_VGA3_IDAC	0x6f
#define RADIO_2055_CORE1_RXBB_BUFO_CTRL	0x70
#define RADIO_2055_CORE1_RXBB_RCCAL_CTRL 0x71
#define RADIO_2055_CORE1_RXBB_RSSI_CTRL1 0x72
#define RADIO_2055_CORE1_RXBB_RSSI_CTRL2 0x73
#define RADIO_2055_CORE1_RXBB_RSSI_CTRL3 0x74
#define RADIO_2055_CORE1_RXBB_RSSI_CTRL4 0x75
#define RADIO_2055_CORE1_RXBB_RSSI_CTRL5 0x76
#define RADIO_2055_CORE1_RXBB_REGULATOR	0x77
#define RADIO_2055_CORE1_RXBB_SPARE1	0x78
#define RADIO_2055_CORE1_RXTXBB_RCAL	0x79
#define RADIO_2055_CORE1_TXRF_SGM_PGA	0x7a
#define RADIO_2055_CORE1_TXRF_SGM_PAD	0x7b
#define RADIO_2055_CORE1_TXRF_CNTR_PGA1	0x7c
#define RADIO_2055_CORE1_TXRF_CNTR_PAD1	0x7d
#define RADIO_2055_CORE1_TX_RFPGA_IDAC	0x7e
#define RADIO_2055_CORE1_TX_PGA_PAD_TN	0x7f
#define RADIO_2055_CORE1_TX_PAD_IDAC1	0x80
#define RADIO_2055_CORE1_TX_PAD_IDAC2	0x81
#define RADIO_2055_CORE1_TX_MX_BGTRIM	0x82
#define RADIO_2055_CORE1_TXRF_RCAL	0x83
#define RADIO_2055_CORE1_TXRF_PAD_TSSI1	0x84
#define RADIO_2055_CORE1_TXRF_PAD_TSSI2	0x85
#define RADIO_2055_CORE1_TX_RF_SPARE	0x86
#define RADIO_2055_CORE1_TXRF_IQCAL1	0x87
#define RADIO_2055_CORE1_TXRF_IQCAL2	0x88
#define RADIO_2055_CORE1_TXBB_RCCAL_CTRL 0x89
#define RADIO_2055_CORE1_TXBB_LPF1	0x8a
#define RADIO_2055_CORE1_TX_VOS_CNCL	0x8b
#define RADIO_2055_CORE1_TX_LPF_MXGM_IDAC 0x8c
#define RADIO_2055_CORE1_TX_BB_MXGM	0x8d
#define RADIO_2055_CORE2_LGBUF_A_TUNE	0x8e
#define RADIO_2055_CORE2_LGBUF_G_TUNE	0x8f
#define RADIO_2055_CORE2_LGBUF_DIV	0x90
#define RADIO_2055_CORE2_LGBUF_A_IDAC	0x91
#define RADIO_2055_CORE2_LGBUF_G_IDAC	0x92
#define RADIO_2055_CORE2_LGBUF_IDACFIL_OVR 0x93
#define RADIO_2055_CORE2_LGBUF_SPARE	0x94
#define RADIO_2055_CORE2_RXRF_SPC1	0x95
#define RADIO_2055_CORE2_RXRF_REG1	0x96
#define RADIO_2055_CORE2_RXRF_REG2	0x97
#define RADIO_2055_CORE2_RXRF_RCAL	0x98
#define RADIO_2055_CORE2_RXBB_BUFI_LPFCMP 0x99
#define RADIO_2055_CORE2_RXBB_LPF	0x9a
#define RADIO_2055_CORE2_RXBB_MIDAC_HIPAS 0x9b
#define RADIO_2055_CORE2_RXBB_VGA1_IDAC	0x9c
#define RADIO_2055_CORE2_RXBB_VGA2_IDAC	0x9d
#define RADIO_2055_CORE2_RXBB_VGA3_IDAC	0x9e
#define RADIO_2055_CORE2_RXBB_BUFO_CTRL	0x9f
#define RADIO_2055_CORE2_RXBB_RCCAL_CTRL 0xa0
#define RADIO_2055_CORE2_RXBB_RSSI_CTRL1 0xa1
#define RADIO_2055_CORE2_RXBB_RSSI_CTRL2 0xa2
#define RADIO_2055_CORE2_RXBB_RSSI_CTRL3 0xa3
#define RADIO_2055_CORE2_RXBB_RSSI_CTRL4 0xa4
#define RADIO_2055_CORE2_RXBB_RSSI_CTRL5 0xa5
#define RADIO_2055_CORE2_RXBB_REGULATOR	0xa6
#define RADIO_2055_CORE2_RXBB_SPARE1	0xa7
#define RADIO_2055_CORE2_RXTXBB_RCAL	0xa8
#define RADIO_2055_CORE2_TXRF_SGM_PGA	0xa9
#define RADIO_2055_CORE2_TXRF_SGM_PAD	0xaa
#define RADIO_2055_CORE2_TXRF_CNTR_PGA1	0xab
#define RADIO_2055_CORE2_TXRF_CNTR_PAD1	0xac
#define RADIO_2055_CORE2_TX_RFPGA_IDAC	0xad
#define RADIO_2055_CORE2_TX_PGA_PAD_TN	0xae
#define RADIO_2055_CORE2_TX_PAD_IDAC1	0xaf
#define RADIO_2055_CORE2_TX_PAD_IDAC2	0xb0
#define RADIO_2055_CORE2_TX_MX_BGTRIM	0xb1
#define RADIO_2055_CORE2_TXRF_RCAL	0xb2
#define RADIO_2055_CORE2_TXRF_PAD_TSSI1	0xb3
#define RADIO_2055_CORE2_TXRF_PAD_TSSI2	0xb4
#define RADIO_2055_CORE2_TX_RF_SPARE	0xb5
#define RADIO_2055_CORE2_TXRF_IQCAL1	0xb6
#define RADIO_2055_CORE2_TXRF_IQCAL2	0xb7
#define RADIO_2055_CORE2_TXBB_RCCAL_CTRL 0xb8
#define RADIO_2055_CORE2_TXBB_LPF1	0xb9
#define RADIO_2055_CORE2_TX_VOS_CNCL	0xba
#define RADIO_2055_CORE2_TX_LPF_MXGM_IDAC 0xbb
#define RADIO_2055_CORE2_TX_BB_MXGM	0xbc
#define RADIO_2055_PRG_GC_HPVGA23_21	0xbd
#define RADIO_2055_PRG_GC_HPVGA23_22	0xbe
#define RADIO_2055_PRG_GC_HPVGA23_23	0xbf
#define RADIO_2055_PRG_GC_HPVGA23_24	0xc0
#define RADIO_2055_PRG_GC_HPVGA23_25	0xc1
#define RADIO_2055_PRG_GC_HPVGA23_26	0xc2
#define RADIO_2055_PRG_GC_HPVGA23_27	0xc3
#define RADIO_2055_PRG_GC_HPVGA23_28	0xc4
#define RADIO_2055_PRG_GC_HPVGA23_29	0xc5
#define RADIO_2055_PRG_GC_HPVGA23_30	0xc6
#define RADIO_2055_CORE1_LNA_GAINBST	0xcd
#define RADIO_2055_CORE1_B0_NBRSSI_VCM	0xd2
#define RADIO_2055_CORE1_GEN_SPARE2		0xd6
#define RADIO_2055_CORE2_LNA_GAINBST	0xd9
#define RADIO_2055_CORE2_B0_NBRSSI_VCM	0xde
#define RADIO_2055_CORE2_GEN_SPARE2		0xe2


/* 2055 bit masks */
#define RADIO_2055_JTAGCTRL_MASK	0x04
#define RADIO_2055_JTAGSYNC_MASK	0x08
#define RADIO_2055_RRCAL_START		0x40
#define RADIO_2055_RRCAL_RST_N		0x01
#define RADIO_2055_CAL_LPO_ENABLE	0x80
#define RADIO_2055_RCAL_DONE		0x80
#define RADIO_2055_NBRSSI_VCM_I_MASK	0x03
#define RADIO_2055_NBRSSI_VCM_I_SHIFT	0x00
#define RADIO_2055_NBRSSI_VCM_Q_MASK	0x03
#define RADIO_2055_NBRSSI_VCM_Q_SHIFT	0x00
#define RADIO_2055_WBRSSI_VCM_IQ_MASK	0x0c
#define RADIO_2055_WBRSSI_VCM_IQ_SHIFT	0x02
#define RADIO_2055_NBRSSI_PD		0x01
#define RADIO_2055_WBRSSI_G1_PD		0x04
#define RADIO_2055_WBRSSI_G2_PD		0x02
#define RADIO_2055_NBRSSI_SEL		0x01
#define RADIO_2055_WBRSSI_G1_SEL	0x04
#define RADIO_2055_WBRSSI_G2_SEL	0x02
#define RADIO_2055_COUPLE_RX_MASK	0x01
#define RADIO_2055_COUPLE_TX_MASK	0x02
#define RADIO_2055_GAINBST_DISABLE	0x02
#define RADIO_2055_GAINBST_VAL_MASK	0x07


/* 2055 pin control */
#define RADIO_2055_CORESEL_OFF		0x0
#define RADIO_2055_CORESEL_CORE1	0x1
#define RADIO_2055_CORESEL_CORE2	0x2
#define RADIO_2055_CORESEL_CORE3	0x3
#define RADIO_2055_CORESEL_CORE4	0x4
#define RADIO_2055_CORESEL_ALLRX	0x5
#define RADIO_2055_CORESEL_ALLTX	0x6
#define RADIO_2055_CORESEL_ALLRXTX	0x7


/* 2060 registers */
#define	RADIO_2060WW_READ_OFF		0x40	/* Read offset for all registers but idcode */

/* 2060ww registers */
#define	RADIO_2060WW_RXGAINCTL		0x02
#define	RADIO_2060WW_PWR_DYNCTL		0x04
#define	RADIO_2060WW_PWR_STACTL		0x05
#define	RADIO_2060WW_RXLNA_DACC		0x06
#define	RADIO_2060WW_RX_VFC_LNA		0x07
#define	RADIO_2060WW_RX_MXCMVFC		0x08
#define	RADIO_2060WW_RX_GM_UPDN		0x09
#define	RADIO_2060WW_SGM_TEMPCO		0x0a
#define	RADIO_2060WW_RXMIX_DACC		0x0b
#define	RADIO_2060WW_RXVGA_DACC		0x0c
#define	RADIO_2060WW_RX_AGC_CTL		0x0d
#define	RADIO_2060WW_HPVGA1_TMR		0x0e
#define	RADIO_2060WW_HPVGA2_TMR		0x0f
#define	RADIO_2060WW_HPVGA3_TMR		0x10
#define	RADIO_2060WW_LPFMIX_TMR		0x11
#define	RADIO_2060WW_RXRSSI_DACC	0x12
#define	RADIO_2060WW_RX_SP_REG1		0x13
#define	RADIO_2060WW_RX_SP_REG2		0x14
#define	RADIO_2060WW_RX_SP_REG3		0x15
#define	RADIO_2060WW_RX_SP_REG4		0x16
#define	RADIO_2060WW_TX_BB_GAIN		0x17
#define	RADIO_2060WW_VC_TYPE_PA		0x18
#define	RADIO_2060WW_TX_RF_GAIN		0x19
#define	RADIO_2060WW_TX_MX_DACC		0x1a
#define	RADIO_2060WW_TX_PA_DACC		0x1b
#define	RADIO_2060WW_TX_BB_DACC		0x1c
#define	RADIO_2060WW_TX_PV_DACC		0x1d
#define	RADIO_2060WW_TX_VOS_CTL		0x1e
#define	RADIO_2060WW_TX_CMV_ADJ		0x1f
#define	RADIO_2060WW_TX_PAPADTN		0x20
#define	RADIO_2060WW_TX_LOMIXTN		0x21
#define	RADIO_2060WW_TX_RFPGATN		0x22
#define	RADIO_2060WW_TX_GMUPFN		0x23
#define	RADIO_2060WW_TX_PAPWRDT		0x24
#define	RADIO_2060WW_TX_SP_REG1		0x25
#define	RADIO_2060WW_TX_SP_REG2		0x26
#define	RADIO_2060WW_TX_SP_REG3		0x27
#define	RADIO_2060WW_TX_SP_REG4		0x28
#define	RADIO_2060WW_PLL_TMOUT		0x29
#define	RADIO_2060WW_VFC_VCOTAL		0x2a
#define	RADIO_2060WW_VFC_LGNMIX		0x2b
#define	RADIO_2060WW_PLL_GM_CTL		0x2c
#define	RADIO_2060WW_PLL_REFDIV		0x2d
#define	RADIO_2060WW_PLL_SD_CTL		0x2e
#define	RADIO_2060WW_CCCP_PSCTL		0x2f
#define	RADIO_2060WW_CCCP_OPALGN	0x30
#define	RADIO_2060WW_PLL_ADCVCO		0x31
#define	RADIO_2060WW_LOGEN_CUR1		0x32
#define	RADIO_2060WW_LOGEN_CUR2		0x33
#define	RADIO_2060WW_LOGEN_CUR3		0x34
#define	RADIO_2060WW_PLL_ERRTHR		0x35
#define	RADIO_2060WW_PLL_CALTHR		0x36
#define	RADIO_2060WW_CALIB_CODE		0x37
#define	RADIO_2060WW_PLL_CTLCODE	0x38
#define	RADIO_2060WW_LOGEN_SPARE	0x39
#define	RADIO_2060WW_PLL_CALOVR		0x3a
#define	RADIO_2060WW_PLL_SP_REG1	0x3b
#define	RADIO_2060WW_PLL_SP_REG2	0x3c
#define	RADIO_2060WW_PLL_SP_REG3	0x3d
#define	RADIO_2060WW_PLL_SP_REG4	0x3e
#define	RADIO_2060WW_RC_CALVAL0		0x3f
#define	RADIO_2060WW_RC_CALVAL1		0x80
#define	RADIO_2060WW_RST_PLLCAL		0x81
#define	RADIO_2060WW_CRY_CONTROL	0x82
#define	RADIO_2060WW_CRYST_BIAS		0x83
#define	RADIO_2060WW_RCAL_BGVAL		0x84
#define	RADIO_2060WW_RCALIB_OVR		0x85

/* 2062 registers */
#define	RADIO_2062_READ_OFF		0x100	/* Read offset for all registers but idcode */

/* Autogenerated by 2062_regs_tcl2c.tcl */
#define RADIO_2062_COMMON_01_NORTH		0x0
#define RADIO_2062_IDCODE_NORTH		0x1
#define RADIO_2062_COMMON_02_NORTH		0x2
#define RADIO_2062_COMMON_03_NORTH		0x3
#define RADIO_2062_COMMON_04_NORTH		0x4
#define RADIO_2062_COMMON_05_NORTH		0x5
#define RADIO_2062_COMMON_06_NORTH		0x6
#define RADIO_2062_COMMON_07_NORTH		0x7
#define RADIO_2062_COMMON_08_NORTH		0x8
#define RADIO_2062_COMMON_09_NORTH		0x9
#define RADIO_2062_COMMON_10_NORTH		0xa
#define RADIO_2062_COMMON_11_NORTH		0xb
#define RADIO_2062_COMMON_12_NORTH		0xc
#define RADIO_2062_COMMON_13_NORTH		0xd
#define RADIO_2062_COMMON_14_NORTH		0xe
#define RADIO_2062_COMMON_15_NORTH		0xf
#define RADIO_2062_PDN_CTRL0_NORTH		0x10
#define RADIO_2062_PDN_CTRL1_NORTH		0x11
#define RADIO_2062_PDN_CTRL2_NORTH		0x12
#define RADIO_2062_PDN_CTRL3_NORTH		0x13
#define RADIO_2062_PDN_CTRL4_NORTH		0x14
#define RADIO_2062_GEN_CTRL0_NORTH		0x15
#define RADIO_2062_IQCAL_NORTH		0x16
#define RADIO_2062_LGENC_NORTH		0x17
#define RADIO_2062_LGENA_LPF_NORTH		0x18
#define RADIO_2062_LGENA_BIAS0_NORTH		0x19
#define RADIO_2062_LGNEA_BIAS1_NORTH		0x1a
#define RADIO_2062_LGENA_CTRL0_NORTH		0x1b
#define RADIO_2062_LGENA_CTRL1_NORTH		0x1c
#define RADIO_2062_LGENA_CTRL2_NORTH		0x1d
#define RADIO_2062_LGENA_TUNE0_NORTH		0x1e
#define RADIO_2062_LGENA_TUNE1_NORTH		0x1f
#define RADIO_2062_LGENA_TUNE2_NORTH		0x20
#define RADIO_2062_LGENA_TUNE3_NORTH		0x21
#define RADIO_2062_LGENA_CTRL3_NORTH		0x22
#define RADIO_2062_LGENA_CTRL4_NORTH		0x23
#define RADIO_2062_LGENA_CTRL5_NORTH		0x24
#define RADIO_2062_LGENA_CTRL6_NORTH		0x25
#define RADIO_2062_LGENA_CTRL7_NORTH		0x26
#define RADIO_2062_RXA_CTRL0_NORTH		0x27
#define RADIO_2062_RXA_CTRL1_NORTH		0x28
#define RADIO_2062_RXA_CTRL2_NORTH		0x29
#define RADIO_2062_RXA_CTRL3_NORTH		0x2a
#define RADIO_2062_RXA_CTRL4_NORTH		0x2b
#define RADIO_2062_RXA_CTRL5_NORTH		0x2c
#define RADIO_2062_RXA_CTRL6_NORTH		0x2d
#define RADIO_2062_RXA_CTRL7_NORTH		0x2e
#define RADIO_2062_RXBB_CTRL0_NORTH		0x2f
#define RADIO_2062_RXBB_CTRL1_NORTH		0x30
#define RADIO_2062_RXBB_CTRL2_NORTH		0x31
#define RADIO_2062_RXBB_GAIN0_NORTH		0x32
#define RADIO_2062_RXBB_GAIN1_NORTH		0x33
#define RADIO_2062_RXBB_GAIN2_NORTH		0x34
#define RADIO_2062_RXBB_GAIN3_NORTH		0x35
#define RADIO_2062_RXBB_RSSI0_NORTH		0x36
#define RADIO_2062_RXBB_RSSI1_NORTH		0x37
#define RADIO_2062_RXBB_CAL0_NORTH		0x38
#define RADIO_2062_RXBB_CAL1_NORTH		0x39
#define RADIO_2062_RXBB_CAL2_NORTH		0x3a
#define RADIO_2062_RXBB_BIAS0_NORTH		0x3b
#define RADIO_2062_RXBB_BIAS1_NORTH		0x3c
#define RADIO_2062_RXBB_BIAS2_NORTH		0x3d
#define RADIO_2062_RXBB_BIAS3_NORTH		0x3e
#define RADIO_2062_RXBB_BIAS4_NORTH		0x3f
#define RADIO_2062_RXBB_BIAS5_NORTH		0x40
#define RADIO_2062_RXBB_RSSI2_NORTH		0x41
#define RADIO_2062_RXBB_RSSI3_NORTH		0x42
#define RADIO_2062_RXBB_RSSI4_NORTH		0x43
#define RADIO_2062_RXBB_RSSI5_NORTH		0x44
#define RADIO_2062_TX_CTRL0_NORTH		0x45
#define RADIO_2062_TX_CTRL1_NORTH		0x46
#define RADIO_2062_TX_CTRL2_NORTH		0x47
#define RADIO_2062_TX_CTRL3_NORTH		0x48
#define RADIO_2062_TX_CTRL4_NORTH		0x49
#define RADIO_2062_TX_CTRL5_NORTH		0x4a
#define RADIO_2062_TX_CTRL6_NORTH		0x4b
#define RADIO_2062_TX_CTRL7_NORTH		0x4c
#define RADIO_2062_TX_CTRL8_NORTH		0x4d
#define RADIO_2062_TX_CTRL9_NORTH		0x4e
#define RADIO_2062_TX_CTRLA_NORTH		0x4f
#define RADIO_2062_TX_GC2G_NORTH		0x50
#define RADIO_2062_TX_GC5G_NORTH		0x51
#define RADIO_2062_TX_TUNE_NORTH		0x52
#define RADIO_2062_TX_PAD_NORTH		0x53
#define RADIO_2062_TX_PGA_NORTH		0x54
#define RADIO_2062_TX_PADAUX_NORTH		0x55
#define RADIO_2062_TX_PGAAUX_NORTH		0x56
#define RADIO_2062_TSSI_CTRL0_NORTH		0x57
#define RADIO_2062_TSSI_CTRL1_NORTH		0x58
#define RADIO_2062_TSSI_CTRL2_NORTH		0x59
#define RADIO_2062_IQCAL_CTRL0_NORTH		0x5a
#define RADIO_2062_IQCAL_CTRL1_NORTH		0x5b
#define RADIO_2062_IQCAL_CTRL2_NORTH		0x5c
#define RADIO_2062_CAL_TS_NORTH		0x5d
#define RADIO_2062_CAL_CTRL0_NORTH		0x5e
#define RADIO_2062_CAL_CTRL1_NORTH		0x5f
#define RADIO_2062_CAL_CTRL2_NORTH		0x60
#define RADIO_2062_CAL_CTRL3_NORTH		0x61
#define RADIO_2062_CAL_CTRL4_NORTH		0x62
#define RADIO_2062_CAL_DBG0_NORTH		0x63
#define RADIO_2062_CAL_DBG1_NORTH		0x64
#define RADIO_2062_CAL_DBG2_NORTH		0x65
#define RADIO_2062_CAL_DBG3_NORTH		0x66
#define RADIO_2062_PSENSE_CTRL0_NORTH		0x69
#define RADIO_2062_PSENSE_CTRL1_NORTH		0x6a
#define RADIO_2062_PSENSE_CTRL2_NORTH		0x6b
#define RADIO_2062_TEST_BUF0_NORTH		0x6c
#define RADIO_2062_COMMON_01_SOUTH		0x4000
#define RADIO_2062_IDCODE_SOUTH		0x4001
#define RADIO_2062_COMMON_02_SOUTH		0x4002
#define RADIO_2062_COMMON_03_SOUTH		0x4003
#define RADIO_2062_COMMON_04_SOUTH		0x4004
#define RADIO_2062_COMMON_05_SOUTH		0x4005
#define RADIO_2062_COMMON_06_SOUTH		0x4006
#define RADIO_2062_COMMON_07_SOUTH		0x4007
#define RADIO_2062_COMMON_08_SOUTH		0x4008
#define RADIO_2062_COMMON_09_SOUTH		0x4009
#define RADIO_2062_COMMON_10_SOUTH		0x400a
#define RADIO_2062_COMMON_11_SOUTH		0x400b
#define RADIO_2062_COMMON_12_SOUTH		0x400c
#define RADIO_2062_COMMON_13_SOUTH		0x400d
#define RADIO_2062_COMMON_14_SOUTH		0x400e
#define RADIO_2062_COMMON_15_SOUTH		0x400f
#define RADIO_2062_PDS_CTRL0_SOUTH		0x4010
#define RADIO_2062_PDS_CTRL1_SOUTH		0x4011
#define RADIO_2062_PDS_CTRL2_SOUTH		0x4012
#define RADIO_2062_PDS_CTRL3_SOUTH		0x4013
#define RADIO_2062_BG_CTRL0_SOUTH		0x4014
#define RADIO_2062_BG_CTRL1_SOUTH		0x4015
#define RADIO_2062_BG_CTRL2_SOUTH		0x4016
#define RADIO_2062_LGENG_CTRL00_SOUTH		0x4017
#define RADIO_2062_LGENG_CTRL01_SOUTH		0x4018
#define RADIO_2062_LGENG_CTRL02_SOUTH		0x4019
#define RADIO_2062_LGENG_CTRL03_SOUTH		0x401a
#define RADIO_2062_LGENG_CTRL04_SOUTH		0x401b
#define RADIO_2062_LGENG_CTRL05_SOUTH		0x401c
#define RADIO_2062_LGENG_CTRL06_SOUTH		0x401d
#define RADIO_2062_LGENG_CTRL07_SOUTH		0x401e
#define RADIO_2062_LGENG_CTRL08_SOUTH		0x401f
#define RADIO_2062_LGENG_CTRL09_SOUTH		0x4020
#define RADIO_2062_LGENG_CTRL10_SOUTH		0x4021
#define RADIO_2062_LGENG_CTRL11_SOUTH		0x4022
#define RADIO_2062_REFPLL_CTRL00_SOUTH		0x4023
#define RADIO_2062_REFPLL_CTRL01_SOUTH		0x4024
#define RADIO_2062_REFPLL_CTRL02_SOUTH		0x4025
#define RADIO_2062_REFPLL_CTRL03_SOUTH		0x4026
#define RADIO_2062_REFPLL_CTRL04_SOUTH		0x4027
#define RADIO_2062_REFPLL_CTRL05_SOUTH		0x4028
#define RADIO_2062_REFPLL_CTRL06_SOUTH		0x4029
#define RADIO_2062_REFPLL_CTRL07_SOUTH		0x402a
#define RADIO_2062_REFPLL_CTRL08_SOUTH		0x402b
#define RADIO_2062_REFPLL_CTRL09_SOUTH		0x402c
#define RADIO_2062_REFPLL_CTRL10_SOUTH		0x402d
#define RADIO_2062_REFPLL_CTRL11_SOUTH		0x402e
#define RADIO_2062_REFPLL_CTRL12_SOUTH		0x402f
#define RADIO_2062_REFPLL_CTRL13_SOUTH		0x4030
#define RADIO_2062_REFPLL_CTRL14_SOUTH		0x4031
#define RADIO_2062_REFPLL_CTRL15_SOUTH		0x4032
#define RADIO_2062_REFPLL_CTRL16_SOUTH		0x4033
#define RADIO_2062_RFPLL_CTRL00_SOUTH		0x4034
#define RADIO_2062_RFPLL_CTRL01_SOUTH		0x4035
#define RADIO_2062_RFPLL_CTRL02_SOUTH		0x4036
#define RADIO_2062_RFPLL_CTRL03_SOUTH		0x4037
#define RADIO_2062_RFPLL_CTRL04_SOUTH		0x4038
#define RADIO_2062_RFPLL_CTRL05_SOUTH		0x4039
#define RADIO_2062_RFPLL_CTRL06_SOUTH		0x403a
#define RADIO_2062_RFPLL_CTRL07_SOUTH		0x403b
#define RADIO_2062_RFPLL_CTRL08_SOUTH		0x403c
#define RADIO_2062_RFPLL_CTRL09_SOUTH		0x403d
#define RADIO_2062_RFPLL_CTRL10_SOUTH		0x403e
#define RADIO_2062_RFPLL_CTRL11_SOUTH		0x403f
#define RADIO_2062_RFPLL_CTRL12_SOUTH		0x4040
#define RADIO_2062_RFPLL_CTRL13_SOUTH		0x4041
#define RADIO_2062_RFPLL_CTRL14_SOUTH		0x4042
#define RADIO_2062_RFPLL_CTRL15_SOUTH		0x4043
#define RADIO_2062_RFPLL_CTRL16_SOUTH		0x4044
#define RADIO_2062_RFPLL_CTRL17_SOUTH		0x4045
#define RADIO_2062_RFPLL_CTRL18_SOUTH		0x4046
#define RADIO_2062_RFPLL_CTRL19_SOUTH		0x4047
#define RADIO_2062_RFPLL_CTRL20_SOUTH		0x4048
#define RADIO_2062_RFPLL_CTRL21_SOUTH		0x4049
#define RADIO_2062_RFPLL_CTRL22_SOUTH		0x404a
#define RADIO_2062_RFPLL_CTRL23_SOUTH		0x404b
#define RADIO_2062_RFPLL_CTRL24_SOUTH		0x404c
#define RADIO_2062_RFPLL_CTRL25_SOUTH		0x404d
#define RADIO_2062_RFPLL_CTRL26_SOUTH		0x404e
#define RADIO_2062_RFPLL_CTRL27_SOUTH		0x404f
#define RADIO_2062_RFPLL_CTRL28_SOUTH		0x4050
#define RADIO_2062_RFPLL_CTRL29_SOUTH		0x4051
#define RADIO_2062_RFPLL_CTRL30_SOUTH		0x4052
#define RADIO_2062_RFPLL_CTRL31_SOUTH		0x4053
#define RADIO_2062_RFPLL_CTRL32_SOUTH		0x4054
#define RADIO_2062_RFPLL_CTRL33_SOUTH		0x4055
#define RADIO_2062_RFPLL_CTRL34_SOUTH		0x4056
#define RADIO_2062_RXG_CTR00_SOUTH		0x4057
#define RADIO_2062_RXG_CTR01_SOUTH		0x4058
#define RADIO_2062_RXG_CTR02_SOUTH		0x4059
#define RADIO_2062_RXG_CTR03_SOUTH		0x405a
#define RADIO_2062_RXG_CTR04_SOUTH		0x405b
#define RADIO_2062_RXG_CTR05_SOUTH		0x405c
#define RADIO_2062_RXG_CTR06_SOUTH		0x405d
#define RADIO_2062_RXG_CTR07_SOUTH		0x405e
#define RADIO_2062_RXG_CTR08_SOUTH		0x405f
#define RADIO_2062_RXG_CTR09_SOUTH		0x4060
#define RADIO_2062_RXG_CTR10_SOUTH		0x4061
#define RADIO_2062_RXG_CTR11_SOUTH		0x4062
#define RADIO_2062_RXG_CTR12_SOUTH		0x4063
#define RADIO_2062_RXG_CTR13_SOUTH		0x4064
#define RADIO_2062_RXG_CTR14_SOUTH		0x4065
#define RADIO_2062_RXG_CTR15_SOUTH		0x4066
#define RADIO_2062_RXG_CTR16_SOUTH		0x4067
#define RADIO_2062_RXG_CTR17_SOUTH		0x4068

#endif	/* _BCM20XX_H */