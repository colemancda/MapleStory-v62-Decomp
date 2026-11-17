/* FUN_00705008 - 0x00705008 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00705008(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((short)param_2 != 0) {
    uVar3 = param_2 & 0xffff;
    param_2 = uVar3;
    iVar1 = FUN_006defab(&param_2,0);
    if (iVar1 != 0) {
      param_2 = uVar3;
      iVar1 = FUN_006deffb(&param_2,0);
      uVar2 = (*DAT_0097b704)();
      *(undefined4 *)(iVar1 + 0xc) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_008161f1(0);
  }
  return;
}


