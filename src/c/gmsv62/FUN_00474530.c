/* FUN_00474530 - 0x00474530 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00474530(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,uint param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_004744d2();
  if (iVar1 == 0) {
    param_6 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_6,&DAT_008f9b80);
  }
  iVar1 = (*DAT_0097b44c)(param_2,param_6,param_5,param_7,param_3,param_4,param_8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == -1) {
    param_6 = (*DAT_0097b49c)();
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_6,&DAT_008f9b80);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((param_6 & 0x40000000) != 0) {
    *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
  }
  return;
}


