/* FUN_0071b598 - 0x0071b598 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0071b598(void)

{
  byte bVar1;
  int *extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_38 = 0x71b5ba;
  bVar1 = FUN_0042452b();
  if (bVar1 < 5) {
    if (bVar1 == 4) {
      uStack_38 = 0x19b;
      iStack_3c = unaff_EBP + -0x1c;
      uStack_40 = 0x71b6b2;
      uStack_38 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_3c = 0x71b6bf;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      goto LAB_0071b7ad;
    }
    if (bVar1 == 0) {
      uStack_38 = 1;
      iStack_3c = 0x71b69a;
      (**(code **)(*extraout_ECX + 0x34))();
      goto LAB_0071b7cd;
    }
    if (bVar1 != 1) {
      if (bVar1 == 2) {
        uStack_38 = 0x199;
        iStack_3c = unaff_EBP + -0x14;
        uStack_40 = 0x71b61f;
        uStack_38 = FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_3c = 0x71b62c;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      else {
        if (bVar1 != 3) goto LAB_0071b6e4;
        uStack_38 = 0x19a;
        iStack_3c = unaff_EBP + 8;
        uStack_40 = 0x71b5f4;
        uStack_38 = FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_3c = 0x71b601;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      goto LAB_0071b7ad;
    }
    uStack_38 = 0x198;
    iStack_3c = unaff_EBP + -0x18;
    uStack_40 = 0x71b64a;
    uStack_38 = FUN_00679d22();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_3c = 0x71b657;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_38 = 0x71b662;
    FUN_00414ebb();
    *(undefined1 *)(extraout_ECX[0x3b] + 0x20) = 0xff;
    if (extraout_ECX[0x3b] != 0) {
      uStack_38 = 0;
      iStack_3c = 0x71b682;
      FUN_0071bbfc();
      extraout_ECX[0x3b] = 0;
    }
    uStack_38 = 0x71b68c;
    FUN_0071b38c();
  }
  else {
    if (bVar1 == 7) {
      uStack_38 = 0x19e;
      iStack_3c = unaff_EBP + -0x30;
      uStack_40 = 0x71b79a;
      uStack_38 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_3c = 0x71b7a7;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else if (bVar1 == 0xf) {
      uStack_38 = 0x1ba;
      iStack_3c = unaff_EBP + -0x2c;
      uStack_40 = 0x71b772;
      uStack_38 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_3c = 0x71b77f;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else if (bVar1 == 0x10) {
      uStack_38 = 0xd46;
      iStack_3c = unaff_EBP + -0x28;
      uStack_40 = 0x71b74a;
      uStack_38 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_3c = 0x71b757;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else if (bVar1 == 0x15) {
      uStack_38 = 0xdee;
      iStack_3c = unaff_EBP + -0x24;
      uStack_40 = 0x71b722;
      uStack_38 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_3c = 0x71b72f;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
    else {
LAB_0071b6e4:
      uStack_38 = 0x141;
      iStack_3c = unaff_EBP + -0x20;
      uStack_40 = 0x71b6f7;
      uStack_38 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_3c = 0x71b704;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0;
    }
LAB_0071b7ad:
    uStack_38 = 0x71b7b2;
    FUN_00414ebb();
  }
  uStack_38 = 0;
  iStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  *(undefined1 **)(unaff_EBP + -0x34) = auStack_48;
  FUN_00450368(unaff_EBP + -0x10);
  FUN_007db3ad();
LAB_0071b7cd:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_38 = 0x71b7d9;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


