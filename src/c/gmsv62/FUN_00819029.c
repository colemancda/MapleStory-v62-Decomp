/* FUN_00819029 - 0x00819029 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00819029(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar1 = FUN_004320e3();
  piVar3 = DAT_0097c274;
  if (DAT_0097c274 != (int *)0x0) {
    do {
      iVar2 = *(int *)((-(uint)(piVar3 != (int *)0x0) & (uint)(piVar3 + -4)) + 4);
      piVar4 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
      if (*(int *)(*piVar3 + 0x18) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar2 = FUN_004320e3();
    } while ((iVar2 <= iVar1) && (piVar3 = piVar4, piVar4 != (int *)0x0));
    if (piVar4 != (int *)0x0) {
      piVar3 = (int *)FUN_00819664(piVar4);
      goto LAB_008190b1;
    }
  }
  piVar3 = (int *)FUN_00819626();
LAB_008190b1:
  *piVar3 = param_1;
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = *(int **)(param_1 + 0x18);
  iVar1 = (**(code **)(*piVar3 + 0xb4))(piVar3,iVar1);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,piVar3,&DAT_00963df8);
  }
  return;
}


