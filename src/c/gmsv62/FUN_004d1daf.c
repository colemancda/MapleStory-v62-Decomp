/* FUN_004d1daf - 0x004d1daf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004d1daf(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = -(uint)(*(int *)(param_1 + 0x90) != 0) & *(int *)(param_1 + 0x90) - 0xcU;
  iVar4 = *(int *)(uVar3 + 300);
  iVar1 = *(int *)(uVar3 + 0x128);
  if (*(int *)(param_1 + 0x8c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar2 = *(int **)(param_1 + 0x8c);
  iVar4 = (**(code **)(*piVar2 + 0xb4))(piVar2,(iVar1 * 3000 - iVar4) * 10 + -0x3fff8ad5);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar2,&DAT_00963df8);
  }
  return;
}


