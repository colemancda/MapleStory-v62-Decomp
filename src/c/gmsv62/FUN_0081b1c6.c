/* FUN_0081b1c6 - 0x0081b1c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0081b1c6(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    iVar1 = (*DAT_0097b6ec)(*(undefined4 *)(param_1 + 0xa4));
    (*DAT_0097b6e4)(*(undefined4 *)(param_1 + 0xa4),iVar1);
    if (iVar1 == 0) {
      return;
    }
    uVar2 = 0;
  }
  else {
    iVar1 = (*DAT_0097b6ec)(*(undefined4 *)(param_1 + 0xa4));
    (*DAT_0097b6e4)(*(undefined4 *)(param_1 + 0xa4),iVar1);
    if (iVar1 != 0) {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0xa8);
  }
  (*DAT_0097b6d0)(*(undefined4 *)(param_1 + 0xa4),uVar2);
  return;
}


