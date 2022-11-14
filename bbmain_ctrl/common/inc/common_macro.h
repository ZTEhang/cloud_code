#ifndef COMMON_MACRO_ 
#define COMMON_MACRO_

#include "common_typedef.h"

#define ERROR_CODE                   0

#define MAX_CELL_NUM                 4
#define MAX_RX_ANT_NUM               4
#define MAX_RX_ANT_PORT_NUM          4

#define MAX_PRACH_PDU_NUM            2
#define MAX_PUSCH_PDU_NUM            16
#define MAX_PUCCH_PDU_NUM            50
#define MAX_SRS_PDU_NUM              15

#define UL_PDU_TYPE_PRACH            0
#define UL_PDU_TYPE_PUSCH            1
#define UL_PDU_TYPE_PUCCH            2
#define UL_PDU_TYPE_SRS              3

enum UCI_TYPE
{
    PUCCH_UCI_PART1    =  0,
    PUCCH_CSI_PART2    =  1,      
    PUSCH_ACK          =  2,
    PUSCH_CSI_PART1    =  3, 
    PUSCH_CSI_PART2    =  4,    
    UCI_TYPE_NUM
 };

enum RM_TYPE
{
    REPETITION   =  0,
    PUNTURING    =  1,      
    SHORTENING   =  2,
    RM_TYPE_NUM
 };

#define FRAME_DUPLEX_TYPE_FDD        0
#define FRAME_DUPLEX_TYPE_TDD        1
#define SLOT_NUM_PER_FRAME           20
#define SYM_NUM_PER_SLOT             14
#define N_SC_PER_PRB                 12

/* Prach  start*/
#define    UN_USED_ROOT_PER_FDM      1

#define    PRACH_ZC_LEN_139          139
#define    PRACH_ZC_LEN_839          839
#define    PRACH_FFT_LEN_139         256
#define    PRACH_FFT_LEN_839         1536

#define    PRACH_FORMAT_0            0
#define    PRACH_FORMAT_1            1
#define    PRACH_FORMAT_2            2
#define    PRACH_FORMAT_3            3
#define    PRACH_FORMAT_A1           4
#define    PRACH_FORMAT_A2           5
#define    PRACH_FORMAT_A3           6
#define    PRACH_FORMAT_B1           7
#define    PRACH_FORMAT_B2           255 /* FAPI接口无B2 B3 */
#define    PRACH_FORMAT_B3           255 /* FAPI接口无B2 B3 */
#define    PRACH_FORMAT_B4           8
#define    PRACH_FORMAT_C0           9
#define    PRACH_FORMAT_C2           10

#define    PRACH_FORMAT_NUM_139      7
#define    PRACH_FORMAT_NUM_839      4
#define    PRACH_FORMAT_NUM          PRACH_FORMAT_NUM_139 + PRACH_FORMAT_NUM_839
#define    PRACH_CONFIG_TABLE_SIZE   256
#define    MAX_PRACH_FDM_NUM         2
#define    MAX_PRACH_TDM_NUM         2

#define    UNRESTRICTED              0
#define    RESTRICTED_TYPE_A         1
#define    RESTRICTED_TYPE_B         2
#define    PRACH_PREAMBLE_SEQ_NUM    64 
#define    MAX_PRACH_ROOT_NUM        32 
/* Prach  end*/

#define HOP_NUM                      2
#define MAX_PRG_NUM                  137
#define MAX_BF_PORT                  4
#define MAX_GROUP_NUM                8
#define MAX_UE_NUM_PER_GROUP         12
#define MAX_UL_PDU_NUM               200
#define MAX_UL_PDU_TYPES             5
#define MAX_DL_PDU_TYPES             5
#define MAX_PREAMBLES_NUM            64
#define MAX_PTRS_PORT_NUM            2
#define MAX_UCI_PART2_NUM            100
#define MAX_PART1_PAPR_NUM           4
#define PTRS_PORT_NUM                2
#define PTRS_PORT_NUM                2
#define MAX_CSI_PART2_REPOET_NUM     4
#define NR_PUSCH_MAX_DRMS_NUM        3
#define NR_PUSCH_UE_PORT_NUM         4
#define NR_BASE_GRAPH_NUM            2
#define NR_RVID_NUM                  4

#define NR_DMRS_TYPE1_SC_PER_RB      6
#define NR_DMRS_TYPE2_SC_PER_RB      4

#define NR_PUSCH_MAX_UE_NUM_PER_SLOT 16
#define NR_PUSCH_MAX_PRG_NUM         137

#define MAX_BIT_FGH                 8*20*2  //20: 每帧包含的时隙数，2：hop
#define MAX_BIT_V                   2*20    //20: 每帧包含的时隙数
#define MAX_BIT_NCS                 8*14*20 //14: 每时隙包含的符号数，20: 每帧包含的时隙数

#define _extu(v1, csta, cstb)     (((uint32_t)(v1) << (csta)) >> (cstb))
#define MAX_POLAR_CB_NUM             2
#endif