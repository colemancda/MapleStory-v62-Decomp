/* FUN_0084e409 - 0x0084e409 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084e409(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  FUN_00879bb8();
  iStack_10 = 0x84e41e;
  cVar1 = FUN_0042452b();
  if (cVar1 == '\0') {
    iStack_10 = 0x80;
    uStack_14 = 0x84e436;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iStack_10 = 2;
      uStack_14 = 0x84e449;
      iVar2 = FUN_007e1328();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar3 != 0) & uVar3 - 8;
    iStack_10 = 0x84e470;
    FUN_0084ed1b();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_10 = 0x84e47f;
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if (cVar1 != '\x01') {
      iStack_10 = 0x84e502;
      cVar1 = FUN_0042452b();
      if (cVar1 == '\0') {
        iStack_10 = 0;
        uStack_14 = 0;
        uStack_18 = 0;
        uStack_1c = 0;
        *(undefined1 **)(unaff_EBP + -0x10) = auStack_20;
        FUN_00679d22(auStack_20,0xdaa);
        FUN_007db3ad();
      }
      else {
        iStack_10 = unaff_EBP + 8;
        uStack_14 = 0x84e515;
        FUN_0045cdbc();
        iStack_10 = 0;
        uStack_14 = 1;
        uStack_18 = 0;
        uStack_1c = 0;
        *(undefined1 **)(unaff_EBP + -0x10) = auStack_20;
        *(undefined4 *)(unaff_EBP + -4) = 4;
        FUN_00450368(unaff_EBP + 8);
        FUN_007db3ad();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_10 = 0x84e544;
        FUN_00414ebb();
      }
      goto LAB_0084e568;
    }
    iStack_10 = 0x80;
    uStack_14 = 0x84e4a4;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iStack_10 = 3;
      uStack_14 = 0x84e4bb;
      iVar2 = FUN_007e1328();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar3 != 0) & uVar3 - 8;
    iStack_10 = 0x84e4e2;
    FUN_0084ed1b();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iStack_10 = 0x84e4f1;
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  iStack_10 = 0x84e48b;
  FUN_0084ed38();
LAB_0084e568:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


