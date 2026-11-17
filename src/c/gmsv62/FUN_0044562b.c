/* FUN_0044562b - 0x0044562b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0044562b(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  int iVar3;
  
  iVar3 = (-(uint)(param_2 != 0) & 0xff000000) + 0xffffff;
  if (*(int *)(param_1 + 0xccc) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0xccc);
  iVar2 = (**(code **)(*piVar1 + 0xe0))(piVar1,iVar3);
  if (iVar2 < 0) {
    FUN_00878e09(iVar2,piVar1,&DAT_00963df8);
  }
  if (*(int *)(param_1 + 0xcd0) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar1 = *(int **)(param_1 + 0xcd0);
  iVar3 = (**(code **)(*piVar1 + 0xe0))(piVar1,iVar3);
  if (iVar3 < 0) {
    FUN_00878e09(iVar3,piVar1,&DAT_00963df8);
  }
  *(uint *)(param_1 + 0x480) = (uint)(unaff_ESI == 0);
  return;
}


