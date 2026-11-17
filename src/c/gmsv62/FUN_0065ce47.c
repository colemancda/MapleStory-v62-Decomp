/* FUN_0065ce47 - 0x0065ce47 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065ce47(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBP;
  
  FUN_00879bb8();
  FUN_00428e0b();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar1 = (int)DAT_009796d4;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  DAT_009796d4 = (int *)0x0;
  FUN_00475ae3();
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 0xcU;
  piVar4 = (int *)(-(uint)(uVar2 != 0) & uVar2 - 0xc);
  *(int **)(unaff_EBP + -0x18) = piVar4;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))();
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 0) {
LAB_0065cf62:
    iVar3 = FUN_00455c59(unaff_EBP + -0x14);
    *(bool *)(unaff_EBP + 0xb) = *(int *)(iVar3 + 4) != 0;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
    }
    if (*(char *)(unaff_EBP + 0xb) != '\0') {
      FUN_00831151();
    }
  }
  else {
    piVar4 = (int *)(iVar1 + 4);
    iVar3 = (**(code **)(*(int *)(iVar1 + 4) + 0x48))(&DAT_0097929c);
    if (iVar3 != 0) {
      iVar3 = FUN_00455c59(unaff_EBP + -0x14);
      *(bool *)(unaff_EBP + 0xb) = *(int *)(iVar3 + 4) != 0;
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        FUN_0045e7c2(0);
      }
      if (*(char *)(unaff_EBP + 0xb) != '\0') {
        FUN_00830f68();
      }
      goto LAB_0065cf99;
    }
    iVar3 = (**(code **)(*piVar4 + 0x48))(&DAT_00979240);
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*piVar4 + 0x48))(&DAT_00978498);
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*piVar4 + 0x48))(&DAT_009792a0);
        if (iVar3 == 0) goto LAB_0065cf62;
      }
    }
    iVar3 = FUN_00455c59(unaff_EBP + -0x14);
    iVar3 = *(int *)(iVar3 + 4);
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      FUN_0045e7c2(0);
    }
    if (iVar3 == 0) {
      FUN_008309fb();
    }
  }
LAB_0065cf99:
  if (iVar1 != 0) {
    FUN_0065d0c6(iVar1);
    (**(code **)(*DAT_009796d4 + 4))(*(undefined4 *)(unaff_EBP + 0xc));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00475ae3();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


