/* FUN_0077aa30 - 0x0077aa30 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_0077aa30(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (*DAT_0097b57c)(*(int *)(param_1 + 0x10) + 0x7a8,param_3 + -6,
                          *(int *)(*(int *)(*(int *)(param_1 + 0x10) + 0x584) + 0x38) * 0x21 + -0x35
                          + param_4);
  if (iVar1 == 0) {
    *param_2 = 0;
    FUN_00414edd(&DAT_00978474,0xffffffff);
  }
  else {
    FUN_00679d22(param_2,700);
  }
  return param_2;
}


