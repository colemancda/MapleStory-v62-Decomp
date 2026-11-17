/* FUN_00646a76 - 0x00646a76 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00646a76(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *extraout_ECX;
  int unaff_EBP;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_00879bb8();
  iVar1 = FUN_006486c3(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0xc),
                       unaff_EBP + -0x20,unaff_EBP + -0x10);
  if (iVar1 == 0) {
    FUN_0074d6fb();
    uVar2 = 0;
    goto LAB_00646c2f;
  }
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    piVar4 = extraout_ECX + 0x32;
  }
  else if (*(int *)(extraout_ECX[0x24] + 0x3c) == 0) {
    piVar4 = extraout_ECX + 0x2e;
  }
  else {
    piVar4 = extraout_ECX + 0x2f;
  }
  iVar1 = FUN_0045e2eb();
  *(int *)(unaff_EBP + -0x1c) = iVar1;
  if (iVar1 / 1000000 == 1) {
    iVar1 = FUN_00455c59(unaff_EBP + -0x30);
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar1 + 4);
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      FUN_0045e7c2(0);
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
    }
    FUN_0044da62(*(undefined4 *)(unaff_EBP + -0x1c),
                 *(undefined1 *)(*(int *)(unaff_EBP + -0x14) + 0x11),unaff_EBP + -0x18,0);
    FUN_00458c4f(unaff_EBP + -0x28,1,-*(int *)(unaff_EBP + -0x18));
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if ((*(int *)(unaff_EBP + -0x24) == 0) ||
       ((*(int *)(unaff_EBP + -0x18) == 5 &&
        (iVar1 = FUN_0045e2eb(),
        (iVar1 / 10000 == 0x69) != (*(int *)(unaff_EBP + -0x1c) / 10000 == 0x69))))) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_00449913(0);
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
      goto LAB_00646bf7;
    }
    uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) * 0x40 + 0x38 + *piVar4);
    uVar6 = 0;
    uVar5 = *(undefined4 *)(unaff_EBP + -0x24);
    iVar1 = (**(code **)(*extraout_ECX + 0x30))(uVar5,uVar2,0);
    iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar3 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
    FUN_00750e64(iVar3 + *(int *)(unaff_EBP + 8),iVar1,uVar5,uVar2,uVar6);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      FUN_00449913(0);
    }
  }
  else {
LAB_00646bf7:
    uVar7 = 0;
    uVar2 = *(undefined4 *)(*(int *)(unaff_EBP + -0x10) * 0x40 + 0x38 + *piVar4);
    uVar6 = 0;
    uVar5 = 0;
    iVar1 = (**(code **)(*extraout_ECX + 0x30))(uVar2,0,0,0);
    iVar1 = iVar1 + 0x14 + *(int *)(unaff_EBP + 0xc);
    iVar3 = (**(code **)(*extraout_ECX + 0x2c))(iVar1);
    FUN_00759767(iVar3 + *(int *)(unaff_EBP + 8),iVar1,uVar2,uVar5,uVar6,uVar7);
  }
  uVar2 = 1;
LAB_00646c2f:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


