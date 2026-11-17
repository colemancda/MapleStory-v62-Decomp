/* FUN_00402b41 - 0x00402b41 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00402b41(int param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  uVar2 = param_2[-1];
  if ((int)uVar2 < 0) {
    uVar2 = ~uVar2;
  }
  if (uVar2 < 0x21) {
    uVar2 = (uint)(0x10 < uVar2);
  }
  else {
    if (uVar2 < 0x41) {
      uVar2 = 2;
      goto LAB_00402b76;
    }
    uVar2 = (-(uint)(0x80 < uVar2) & 0xfffffffc) + 3;
  }
  if ((int)uVar2 < 0) {
    uVar3 = (*DAT_0097b424)(0,param_2 + -1);
    (*DAT_0097b420)(uVar3);
    return;
  }
LAB_00402b76:
  FUN_00402aba();
  *param_2 = *(undefined4 *)(param_1 + 0xc + uVar2 * 4);
  *(undefined4 **)(param_1 + 0xc + uVar2 * 4) = param_2;
  piVar1 = (int *)(param_1 + 8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


