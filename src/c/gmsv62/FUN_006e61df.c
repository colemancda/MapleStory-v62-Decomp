/* FUN_006e61df - 0x006e61df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006e61df(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  int iVar2;
  int iVar3;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(unaff_EBP + -0x14) = extraout_ECX + 0xd98;
  do {
    iVar2 = 0;
    FUN_005df45d(unaff_EBP + -0x20,*(undefined4 *)(unaff_EBP + -0x10),0);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    while (*(int *)(unaff_EBP + -0x1c) != 0) {
      if (iVar2 % 0x19 == 0) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        iVar3 = unaff_EBP + -0x18;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_006eb2d7(0xffffffff);
        FUN_006eaec7(iVar3);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_006eaf37();
      }
      iVar3 = unaff_EBP + -0x20;
      FUN_005e0740(0xffffffff);
      FUN_005e04d7(iVar3);
      iVar2 = iVar2 + 1;
      uVar1 = FUN_005df45d(unaff_EBP + -0x28,*(undefined4 *)(unaff_EBP + -0x10),iVar2);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_005e04d7(uVar1);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_005e064d(0);
        *(undefined4 *)(unaff_EBP + -0x24) = 0;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_005e064d(0);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + -0x10) < 9);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


