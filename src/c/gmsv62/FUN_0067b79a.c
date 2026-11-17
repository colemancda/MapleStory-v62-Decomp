/* FUN_0067b79a - 0x0067b79a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0067b79a(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = -(uint)(*(int *)(param_1 + 0x134) != 0) & *(int *)(param_1 + 0x134) - 0xcU;
  iVar3 = FUN_00654380(*(undefined4 *)(param_1 + 0xa0));
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xac) == 0) {
      iVar3 = (*(int *)(uVar4 + 0x128) * 3000 - *(int *)(uVar4 + 300)) * 10 + -0x3fff8ad9;
    }
    else {
      iVar3 = -0x3ffbe0ec;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(param_1 + 0xc0);
    iVar3 = (**(code **)(*piVar2 + 0xb4))(piVar2,iVar3);
  }
  else {
    iVar3 = *(int *)(uVar4 + 300);
    iVar1 = *(int *)(uVar4 + 0x128);
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar2 = *(int **)(param_1 + 0xc0);
    iVar3 = (**(code **)(*piVar2 + 0xb4))(piVar2,(iVar1 * 3000 - iVar3) * 10 + -0x3fff8ad8);
  }
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar2,&DAT_00963df8);
  }
  return;
}


