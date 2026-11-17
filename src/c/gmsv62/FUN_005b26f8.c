/* FUN_005b26f8 - 0x005b26f8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005b26f8(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = FUN_00815f0f(param_1,param_2,param_3);
  if ((iVar1 != 0) && ((param_3 == (int *)0x0 || (*param_3 == 0)))) {
    (*DAT_0097b504)(local_14,0xb,0x13,0x182,0x185);
    iVar1 = (*DAT_0097b57c)(local_14,param_1,param_2);
    iVar1 = (iVar1 != 0) + 1;
  }
  return iVar1;
}


