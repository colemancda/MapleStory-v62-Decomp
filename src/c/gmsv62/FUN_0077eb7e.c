/* FUN_0077eb7e - 0x0077eb7e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0077eb7e(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00814891(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc));
  if (*(int *)(extraout_ECX + 0x808) != 0) {
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
    iVar1 = iVar1 + 0x55;
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
    FUN_004deee3(iVar2 + 0x137,iVar1);
  }
  if (*(int *)(extraout_ECX + 0x810) != 0) {
    *(undefined4 *)(unaff_EBP + 0xc) = DAT_0097bef8;
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
    iVar1 = iVar1 + 0x55;
    iVar2 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(iVar1);
    FUN_004deee3(iVar2 + 0x137,iVar1);
  }
  if (DAT_0097befc != 0) {
    piVar3 = (int *)FUN_004489f5(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*piVar3 == 0) {
      FUN_00878dfb(0x80004003);
    }
    uVar4 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
    iVar1 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))(uVar4);
    iVar2 = FUN_0042fb0a();
    FUN_004deee3(iVar1 + iVar2,uVar4);
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))(piVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


