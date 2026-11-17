/* FUN_00551aab - 0x00551aab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00551aab(void)

{
  int iVar1;
  undefined2 extraout_var;
  undefined2 uVar2;
  int unaff_EBP;
  ushort uVar3;
  undefined4 uStack_2c;
  int *piStack_28;
  
  FUN_00879bb8();
  piStack_28 = (int *)0x0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_2c;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar3 = 0;
  FUN_00679e4e(&uStack_2c,0x11de);
  iVar1 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar1);
  uStack_2c = FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar1 = FUN_00412550();
  *(bool *)(unaff_EBP + -0xd) = iVar1 != 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_28 = (int *)FUN_00402bc3(unaff_EBP + -0x24);
  if ((int)piStack_28 < 0) {
    uStack_2c = 0x551b1a;
    FUN_00878dfb();
  }
  if (*(char *)(unaff_EBP + -0xd) != '\0') {
    uVar3 = 0x80;
  }
  piStack_28 = (int *)0x0;
  *(undefined4 **)(unaff_EBP + -0x14) = &uStack_2c;
  FUN_00679e4e(&uStack_2c,0xdb2);
  iVar1 = unaff_EBP + -0x24;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0040263d(iVar1);
  uStack_2c = FUN_004048a4(iVar1);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iVar1 = FUN_00412550();
  *(bool *)(unaff_EBP + -0xd) = iVar1 != 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_28 = (int *)FUN_00402bc3(unaff_EBP + -0x24);
  if ((int)piStack_28 < 0) {
    uStack_2c = 0x551b77;
    FUN_00878dfb();
  }
  if (*(char *)(unaff_EBP + -0xd) != '\0') {
    uVar3 = uVar3 | 0x100;
  }
  piStack_28 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uVar2 = 0;
  if (piStack_28 != (int *)0x0) {
    uStack_2c = 0x551b93;
    (**(code **)(*piStack_28 + 8))();
    uVar2 = extraout_var;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return CONCAT22(uVar2,uVar3);
}


