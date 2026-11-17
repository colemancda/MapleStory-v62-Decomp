/* FUN_0047c938 - 0x0047c938 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047c938(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((*param_3 != 0) && (*(int *)(*param_3 + -4) != 0)) {
    uVar2 = FUN_0047ca3f(param_1);
    iVar1 = *param_3;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar1 + -4);
    }
    (*DAT_0097b6bc)(uVar2,param_2,0,3,iVar1,uVar3);
  }
  return;
}


