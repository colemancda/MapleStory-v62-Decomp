/* FUN_006ddd26 - 0x006ddd26 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006ddd26(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004031b7(0xff,3);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_00878dfb(0x80004003);
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)FUN_00448dc6(unaff_EBP + -0x14);
  iVar6 = *piVar3;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar6 == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar3 = (int *)*piVar3;
  *(int **)(unaff_EBP + -0x10) = piVar3;
  iVar4 = FUN_0040e53d();
  iVar6 = *(int *)(extraout_ECX + 0x5a8);
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 4);
  uVar5 = FUN_0040e48b();
  piVar2 = *(int **)(unaff_EBP + 0xc);
  iVar6 = (**(code **)(*piVar3 + 0x80))
                    (*(undefined4 *)(unaff_EBP + -0x10),
                     (*(int *)(extraout_ECX + 0x5a4) - (uVar5 >> 1)) + **(int **)(unaff_EBP + 8),
                     (iVar6 + iVar1) - iVar4,piVar2,*(undefined4 *)(unaff_EBP + -0x24),
                     *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                     *(undefined4 *)(unaff_EBP + -0x18));
  if (iVar6 < 0) {
    FUN_00878e09(iVar6,*(undefined4 *)(unaff_EBP + -0x10),&DAT_00963cc8);
  }
  piVar3 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar6 = FUN_00402bc3(unaff_EBP + -0x24);
  if (iVar6 < 0) {
    FUN_00878dfb(iVar6);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


