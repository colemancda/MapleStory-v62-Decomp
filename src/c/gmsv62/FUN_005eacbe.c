/* FUN_005eacbe - 0x005eacbe in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_005eacbe(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar3 = -(uint)(*(int *)(param_1 + 0x80) != 0) & *(int *)(param_1 + 0x80) - 0xcU;
  iVar4 = *(int *)(uVar3 + 300);
  iVar1 = *(int *)(uVar3 + 0x128);
  if (*(int *)(param_1 + 0xd4) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(param_1 + 0xd4);
  iVar4 = (**(code **)(*piVar2 + 0xb4))(piVar2,(iVar1 * 3000 - iVar4) * 10 + -0x3fff8ad5);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    if (*(int *)(param_1 + 0xd4) == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar5 = FUN_004320e3();
    FUN_0043fc89(uVar5);
  }
  return;
}


