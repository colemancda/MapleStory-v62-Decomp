/* FUN_007afc2a - 0x007afc2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007afc2a(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar4 = 1;
  do {
    iVar2 = *(int *)(iVar1 + 0x3f7);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + -4);
    }
    if (iVar2 + -1 < iVar4) {
      iVar4 = 1;
      break;
    }
    FUN_00458c4f(unaff_EBP + -0x20,5,iVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      iVar2 = FUN_0045e2eb();
      if (iVar2 / 1000 == 0x1392) goto LAB_007afca2;
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_00449913(0);
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    iVar4 = iVar4 + 1;
  } while( true );
LAB_007afcce:
  iVar2 = *(int *)(iVar1 + 0x3f3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + -4);
  }
  if (iVar2 + -1 < iVar4) goto LAB_007afd52;
  FUN_00458c4f(unaff_EBP + -0x18,4,iVar4);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    iVar2 = FUN_0045e2eb();
    if (iVar2 / 1000 == 0x10c2) goto LAB_007afd2f;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00449913(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  iVar4 = iVar4 + 1;
  goto LAB_007afcce;
LAB_007afd2f:
  uVar3 = FUN_0045e2eb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_00449913(0);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  goto LAB_007afd52;
LAB_007afca2:
  uVar3 = FUN_0045e2eb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar3;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    FUN_00449913(0);
  }
LAB_007afd52:
  FUN_0084951d(*(undefined4 *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


