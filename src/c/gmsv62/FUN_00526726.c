/* FUN_00526726 - 0x00526726 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00526726(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_retaddr;
  
  if (param_1[3] == 0) {
    iVar1 = (*DAT_0097b5b0)(param_2);
    if (iVar1 != 0) {
      iVar1 = (*DAT_0097b5ac)(*param_1,unaff_retaddr);
      if (iVar1 != 0) goto LAB_00526744;
    }
    uVar2 = 0;
  }
  else {
    *param_2 = param_1[0x24e];
    param_2[1] = param_1[0x24f];
LAB_00526744:
    uVar2 = 1;
  }
  return uVar2;
}


