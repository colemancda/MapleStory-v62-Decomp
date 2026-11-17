/* FUN_0068d8ad - 0x0068d8ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0068d8ad(int param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 local_14 [16];
  
  iVar1 = FUN_00815f0f(param_1,param_2,param_3);
  if (iVar1 == 2) {
    if ((0x11f < param_1) && (0x112 < param_2)) {
      return 0;
    }
  }
  else if (iVar1 == 0) {
    return 0;
  }
  if ((param_3 == (int *)0x0) || (*param_3 == 0)) {
    (*DAT_0097b504)(local_14,0,0x80,0x120,0x94);
    iVar1 = (*DAT_0097b57c)(local_14,param_1,param_2);
    iVar1 = (iVar1 != 0) + 1;
  }
  return iVar1;
}


