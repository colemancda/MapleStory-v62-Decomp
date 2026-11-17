/* FUN_0084afb7 - 0x0084afb7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084afb7(void)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  int unaff_EBP;
  bool bVar3;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  bVar3 = DAT_00979178 == 0;
  *(undefined4 *)(unaff_EBP + -0x14) = extraout_ECX;
  if (bVar3) {
    iStack_34 = 0x84b00b;
    iVar1 = FUN_007b3c5d();
    if (iVar1 != 0) goto LAB_0084b1e8;
    iStack_34 = 0x84b018;
    iVar1 = FUN_00429303();
    if (*(int *)(iVar1 + 0x11c) != 0) {
      iStack_34 = 0;
      iStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      *(undefined1 **)(unaff_EBP + 8) = auStack_44;
      FUN_00679d22(auStack_44,0x122);
      FUN_007db3ad();
      goto LAB_0084b1e8;
    }
    iStack_34 = 0x84b04c;
    iVar1 = FUN_00429303();
    uVar2 = *(uint *)(iVar1 + 0x108) >> 0x10 & 1;
    *(uint *)(unaff_EBP + -0x18) = uVar2;
    if (uVar2 != 0) {
      iStack_34 = 0xc1c;
      iStack_38 = unaff_EBP + 0xc;
      uStack_3c = 0x84b072;
      iStack_38 = FUN_00679d22();
      iStack_34 = 0xc;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uStack_3c = 0x84b07d;
      FUN_00471102();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_34 = *(int *)(unaff_EBP + 0xc);
      goto LAB_0084b129;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_34 = 0x8c;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iStack_38 = 0x84b0a4;
    iVar1 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iStack_34 = 0x84b0b6;
      iVar1 = FUN_0084b1f9();
    }
    uVar2 = -(uint)(iVar1 != 0) & iVar1 + 8U;
    *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar2 != 0) & uVar2 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_34 = 0x84b0dd;
    FUN_0084ec82();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_34 = 0x84b0e9;
    iVar1 = FUN_004bc6a2();
    if (iVar1 == 1) {
      iStack_34 = unaff_EBP + -0x10;
      iStack_38 = 0x84b0f9;
      FUN_0084b27d();
      iStack_34 = *(int *)(unaff_EBP + -0x10);
      iStack_38 = 0x84b107;
      iVar1 = FUN_007c0ccd();
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x528) < 1) {
          iStack_34 = 0x84b150;
          uVar2 = FUN_0043f6fe();
          if (uVar2 < 0x80000000) goto LAB_0084b176;
          iStack_34 = 0x84b15c;
          iVar1 = FUN_007a5c95();
          if (iVar1 == 0) {
            iStack_34 = 0x84b167;
            iVar1 = FUN_004865cc();
            if (iVar1 == 0) goto LAB_0084b176;
          }
          iStack_34 = 1;
          iStack_38 = 0x84b174;
          FUN_0084b56f();
        }
        else {
LAB_0084b176:
          iStack_34 = 0;
          iStack_38 = 0;
          uStack_3c = 0x5f;
          uStack_40 = 0x84b182;
          FUN_0060142b();
          iStack_38 = unaff_EBP + -0x10;
          *(int **)(unaff_EBP + -0x18) = &iStack_34;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_34 = 0;
          uStack_3c = 0x84b197;
          FUN_00414f8b();
          iStack_38 = 0x84b19f;
          FUN_00459cb5();
          iStack_34 = *(int *)(unaff_EBP + 8);
          iStack_38 = 0x84b1aa;
          FUN_0045d247();
          iStack_34 = *(int *)(unaff_EBP + 0xc);
          iStack_38 = 0x84b1b5;
          FUN_00457d37();
          iStack_34 = unaff_EBP + -0x30;
          iStack_38 = 0x84b1c4;
          FUN_004751b2();
          *(undefined1 *)(unaff_EBP + -4) = 4;
          iStack_34 = 0x84b1d0;
          FUN_0045ebca();
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_34 = 0x84b1dc;
        FUN_0084ec9f();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_34 = 0x84b1e8;
        FUN_00414ebb();
        goto LAB_0084b1e8;
      }
      iStack_34 = 0;
      iStack_38 = 0x84b116;
      FUN_0084b56f();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_34 = 0x84b122;
    FUN_0084ec9f();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_34 = *(int *)(unaff_EBP + -0x10);
  }
  else {
    iStack_34 = 0x9a;
    iStack_38 = unaff_EBP + 8;
    uStack_3c = 0x84afe7;
    iStack_38 = FUN_00679d22();
    iStack_34 = 0xc;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uStack_3c = 0x84aff2;
    FUN_00471102();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iStack_34 = *(int *)(unaff_EBP + 8);
  }
LAB_0084b129:
  if (iStack_34 != 0) {
    iStack_34 = iStack_34 + -0xc;
    iStack_38 = 0x84b13a;
    FUN_00434e38();
  }
LAB_0084b1e8:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


