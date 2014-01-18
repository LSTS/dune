#ifndef _LIBRAW1394_IEEE1394_H
#define _LIBRAW1394_IEEE1394_H

#define L1394_RCODE_COMPLETE           0x0
#define L1394_RCODE_CONFLICT_ERROR     0x4
#define L1394_RCODE_DATA_ERROR         0x5
#define L1394_RCODE_TYPE_ERROR         0x6
#define L1394_RCODE_ADDRESS_ERROR      0x7

#define L1394_ACK_COMPLETE             0x1
#define L1394_ACK_PENDING              0x2
#define L1394_ACK_BUSY_X               0x4
#define L1394_ACK_BUSY_A               0x5
#define L1394_ACK_BUSY_B               0x6
#define L1394_ACK_DATA_ERROR           0xd
#define L1394_ACK_TYPE_ERROR           0xe 

#define L1394_SPEED_100                0x0
#define L1394_SPEED_200                0x1
#define L1394_SPEED_400                0x2 

#define L1394_SELFID_PWRCL_NO_POWER    0x0
#define L1394_SELFID_PWRCL_PROVIDE_15W 0x1
#define L1394_SELFID_PWRCL_PROVIDE_30W 0x2
#define L1394_SELFID_PWRCL_PROVIDE_45W 0x3
#define L1394_SELFID_PWRCL_USE_1W      0x4
#define L1394_SELFID_PWRCL_USE_3W      0x5
#define L1394_SELFID_PWRCL_USE_6W      0x6
#define L1394_SELFID_PWRCL_USE_10W     0x7

#define L1394_SELFID_PORT_CHILD        0x3
#define L1394_SELFID_PORT_PARENT       0x2
#define L1394_SELFID_PORT_NCONN        0x1
#define L1394_SELFID_PORT_NONE         0x0   

#endif /* _LIBRAW1394_IEEE1394_H */
