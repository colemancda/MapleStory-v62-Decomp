/* FUN_0078a218 - 0x0078a218 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0078a218(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  piVar1 = (int *)(param_1 + 4);
  if (*(int *)(param_1 + 0x554) == 6) {
    iVar5 = param_1 + 0x574;
    uVar4 = *(undefined4 *)(param_1 + 0x570);
    uVar2 = (**(code **)(*piVar1 + 0x30))(uVar4,iVar5);
    uVar3 = (**(code **)(*piVar1 + 0x2c))(uVar2);
    FUN_0047ca09(*(undefined4 *)(param_1 + 0x554),uVar3,uVar2,uVar4,iVar5);
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x570);
    uVar2 = (**(code **)(*piVar1 + 0x30))(uVar4);
    uVar3 = (**(code **)(*piVar1 + 0x2c))(uVar2);
    FUN_0047c9e1(*(undefined4 *)(param_1 + 0x554),uVar3,uVar2,uVar4);
  }
  return;
}


