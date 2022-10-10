#define	BPI_M4_01	-1
#define	BPI_M4_03	GPIO_PH05
#define	BPI_M4_05	GPIO_PH04
#define	BPI_M4_07	GPIO_PL10
#define	BPI_M4_09	-1
#define	BPI_M4_11	GPIO_PC04
#define	BPI_M4_13	GPIO_PC07
#define	BPI_M4_15	GPIO_PC17
#define	BPI_M4_17	-1
#define	BPI_M4_19	GPIO_PC00
#define	BPI_M4_21	GPIO_PC01
#define	BPI_M4_23	GPIO_PC02
#define	BPI_M4_25	-1
#define	BPI_M4_27	GPIO_PH03
#define	BPI_M4_29	GPIO_PC18
#define	BPI_M4_31	GPIO_PG10
#define	BPI_M4_33	GPIO_PG11
#define	BPI_M4_35	GPIO_PG12
#define	BPI_M4_37	GPIO_PE04
#define	BPI_M4_39	-1

#define	BPI_M4_02	-1
#define	BPI_M4_04	-1
#define	BPI_M4_06	-1
#define	BPI_M4_08	GPIO_PB00
#define	BPI_M4_10	GPIO_PB01
#define	BPI_M4_12	GPIO_PB03
#define	BPI_M4_14	-1
#define	BPI_M4_16	GPIO_PB02
#define	BPI_M4_18	GPIO_PL08
#define	BPI_M4_20	-1
#define	BPI_M4_22	GPIO_PL09
#define	BPI_M4_24	GPIO_PC03
#define	BPI_M4_26	GPIO_PH10
#define	BPI_M4_28	GPIO_PH02
#define	BPI_M4_30	-1
#define	BPI_M4_32	GPIO_PG13
#define	BPI_M4_34	-1
#define	BPI_M4_36	GPIO_PE05
#define	BPI_M4_38	GPIO_PE18
#define	BPI_M4_40	GPIO_PE19

//map wpi gpio_num(index) to bp bpio_num(element)
const int pinToGpio_BPI_M4 [64] =
{
   BPI_M4_11, BPI_M4_12,        //0, 1
   BPI_M4_13, BPI_M4_15,        //2, 3
   BPI_M4_16, BPI_M4_18,        //4, 5
   BPI_M4_22, BPI_M4_07,        //6, 7
   BPI_M4_03, BPI_M4_05,        //8, 9
   BPI_M4_24, BPI_M4_26,        //10, 11
   BPI_M4_19, BPI_M4_21,        //12, 13
   BPI_M4_23, BPI_M4_08,        //14, 15
   BPI_M4_10,        -1,        //16, 17
          -1,        -1,        //18, 19
          -1, BPI_M4_29,        //20, 21
   BPI_M4_31, BPI_M4_33,        //22, 23
   BPI_M4_35, BPI_M4_37,        //24, 25
   BPI_M4_32, BPI_M4_36,        //26, 27
   BPI_M4_38, BPI_M4_40,        //28. 29
   BPI_M4_27, BPI_M4_28,        //30, 31
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // ... 47
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 // ... 63
} ;

//map bcm gpio_num(index) to bp gpio_num(element)
const int pinTobcm_BPI_M4 [64] =
{
  BPI_M4_27, BPI_M4_28,  //0, 1
  BPI_M4_03, BPI_M4_05,  //2, 3
  BPI_M4_07, BPI_M4_29,  //4, 5
  BPI_M4_31, BPI_M4_26,  //6, 7
  BPI_M4_24, BPI_M4_21,  //8, 9
  BPI_M4_19, BPI_M4_23,  //10, 11
  BPI_M4_32, BPI_M4_33,  //12, 13
  BPI_M4_08, BPI_M4_10,  //14, 15
  BPI_M4_36, BPI_M4_11,  //16, 17
  BPI_M4_12, BPI_M4_35,	 //18, 19
  BPI_M4_38, BPI_M4_40,  //20, 21
  BPI_M4_15, BPI_M4_16,  //22, 23
  BPI_M4_18, BPI_M4_22,  //24, 25
  BPI_M4_37, BPI_M4_13,  //26, 27
  -1, -1,
  -1, -1,
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, // ... 47
  -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 // ... 63
} ;

//map phys_num(index) to bp gpio_num(element)
const int physToGpio_BPI_M4 [64] =
{
          -1,                //0
          -1,        -1,     //1, 2
   BPI_M4_03,        -1,     //3, 4
   BPI_M4_05,        -1,     //5, 6
   BPI_M4_07, BPI_M4_08,     //7, 8
          -1, BPI_M4_10,     //9, 10
   BPI_M4_11, BPI_M4_12,     //11, 12
   BPI_M4_13,        -1,     //13, 14
   BPI_M4_15, BPI_M4_16,     //15, 16
          -1, BPI_M4_18,     //17, 18
   BPI_M4_19,        -1,     //19, 20
   BPI_M4_21, BPI_M4_22,     //21, 22
   BPI_M4_23, BPI_M4_24,     //23, 24
          -1, BPI_M4_26,     //25, 26
   BPI_M4_27, BPI_M4_28,     //27, 28
   BPI_M4_29,        -1,     //29, 30
   BPI_M4_31, BPI_M4_32,     //31, 32      
   BPI_M4_33,        -1,     //33, 34
   BPI_M4_35, BPI_M4_36,     //35, 36
   BPI_M4_37, BPI_M4_38,     //37, 38
          -1, BPI_M4_40,     //39, 40
   -1,   -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, //41-> 55
   -1,   -1, -1, -1, -1, -1, -1, -1 // 56-> 63
} ;
