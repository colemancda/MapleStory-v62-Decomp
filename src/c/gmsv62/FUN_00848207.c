/* FUN_00848207 - 0x00848207 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00848207(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  
  iVar2 = FUN_0042459a();
  iVar3 = FUN_0042459a();
  iVar6 = 0;
  iVar5 = 0;
  if ((iVar2 != 999999999) && (iVar3 != 999999999)) {
    sVar1 = FUN_00424561();
    iVar6 = (int)sVar1;
    sVar1 = FUN_00424561();
    iVar5 = (int)sVar1;
  }
  piVar7 = (int *)(param_1 + 0x2b2c);
  *piVar7 = iVar2;
  *(int *)(param_1 + 0x2b34) = iVar6;
  *(int *)(param_1 + 0x2b30) = iVar3;
  *(int *)(param_1 + 0x2b38) = iVar5;
  iVar2 = FUN_00429303();
  if (iVar2 != 0) {
    uVar8 = 1;
    iVar2 = param_1 + 0x2b44;
    uVar4 = (uint)(*(int *)(param_1 + 0x2b40) != 0);
    FUN_00429303(uVar4,iVar2,piVar7,1);
    FUN_004efb2d(uVar4,iVar2,piVar7,uVar8);
  }
  return;
}


