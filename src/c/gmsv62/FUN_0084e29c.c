/* FUN_0084e29c - 0x0084e29c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084e29c(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBP;
  undefined1 auStack_20 [4];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  
  FUN_00879bb8();
  iStack_10 = 0x84e2b1;
  uVar2 = FUN_0042452b();
  if ((uVar2 & 0xff) == 0) {
    iStack_10 = 0x80;
    uStack_14 = 0x84e2c9;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iStack_10 = 0;
      uStack_14 = 0x84e2db;
      iVar3 = FUN_007e1328();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar2 != 0) & uVar2 - 8;
    iStack_10 = 0x84e302;
    FUN_0084ed1b();
    *(undefined4 *)(unaff_EBP + -4) = 1;
    iStack_10 = 0x84e311;
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  else {
    if ((uVar2 & 0xff) != 0xffffffff) {
      iStack_10 = 0x84e394;
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
        uStack_14 = 0x84e3a7;
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
        iStack_10 = 0x84e3d6;
        FUN_00414ebb();
      }
      goto LAB_0084e3fa;
    }
    iStack_10 = 0x80;
    uStack_14 = 0x84e336;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar3;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iStack_10 = 1;
      uStack_14 = 0x84e34d;
      iVar3 = FUN_007e1328();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uVar2 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x10) = -(uint)(uVar2 != 0) & uVar2 - 8;
    iStack_10 = 0x84e374;
    FUN_0084ed1b();
    *(undefined4 *)(unaff_EBP + -4) = 3;
    iStack_10 = 0x84e383;
    FUN_004bc6a2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
  iStack_10 = 0x84e31d;
  FUN_0084ed38();
LAB_0084e3fa:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


