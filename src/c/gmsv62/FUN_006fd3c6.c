/* FUN_006fd3c6 - 0x006fd3c6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006fd3c6(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_5cc [4];
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  int iStack_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xa4) == 0) {
    uStack_5b0 = 0x80004003;
    uStack_5b4 = 0x6fd3ee;
    FUN_00878dfb();
  }
  uStack_5b0 = 0x6fd3f9;
  iVar1 = FUN_0042fb0a();
  iVar2 = *(int *)(extraout_ECX + 0xa4);
  *(int *)(unaff_EBP + -0x1c) = 0xf2 - iVar1 / 2;
  if (iVar2 == 0) {
    uStack_5b0 = 0x80004003;
    uStack_5b4 = 0x6fd41d;
    FUN_00878dfb();
  }
  uStack_5b0 = 0x6fd428;
  iVar1 = FUN_0042fb34();
  iVar2 = *(int *)(extraout_ECX + 0xa4);
  *(int *)(unaff_EBP + -0x18) = 100 - iVar1;
  if (iVar2 == 0) {
    uStack_5b0 = 0x80004003;
    uStack_5b4 = 0x6fd445;
    FUN_00878dfb();
  }
  uStack_5b0 = 0x6fd450;
  iVar2 = FUN_0042fb0a();
  uStack_5b0 = *(undefined4 *)(unaff_EBP + 0x14);
  uStack_5b4 = *(undefined4 *)(unaff_EBP + 0x10);
  *(int *)(unaff_EBP + -0x14) = iVar2 / 2 + 0xf2;
  iStack_5b8 = unaff_EBP + -0x1c;
  *(undefined4 *)(unaff_EBP + -0x10) = 100;
  uStack_5bc = 0x6fd46d;
  iVar2 = (*DAT_0097b57c)();
  if (((iVar2 != 0) && (*(int *)(*(int *)(extraout_ECX + 100) + 0x588) == 0)) &&
     (*(int *)(unaff_EBP + 8) == 0x203)) {
    uStack_5bc = 0x6fd494;
    iVar2 = FUN_00429303();
    if (iVar2 != 0) {
      uStack_5bc = 0x6fd4a5;
      FUN_0081be45();
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_5bc = 0x6fd4b3;
      uStack_5c0 = FUN_004f162d();
      uStack_5bc = *(undefined4 *)(extraout_ECX + 0x9c);
      uStack_5c4 = 0x6fd4c5;
      iVar2 = FUN_0081d7f3();
      if (iVar2 == 0) {
        uStack_5bc = 0;
        uStack_5c0 = 0;
        uStack_5c4 = 0;
        uStack_5c8 = 0;
        *(undefined1 **)(unaff_EBP + 0x14) = auStack_5cc;
        FUN_00679d22(auStack_5cc,0x11b);
        FUN_007db3ad();
      }
      else {
        uStack_5bc = 0x6fd4d4;
        FUN_004bc6a2();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_5bc = 0x6fd507;
      FUN_0081bf02();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


