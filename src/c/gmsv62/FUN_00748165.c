/* FUN_00748165 - 0x00748165 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00748165(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  char *pcVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  cVar1 = *(char *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (cVar1 < '$') {
    if (cVar1 == '#') {
      pcVar5 = &DAT_0096b744;
    }
    else if (cVar1 == '\x11') {
      pcVar5 = &DAT_0096b748;
    }
    else if (cVar1 == '\x12') {
      pcVar5 = &DAT_0096b750;
    }
    else if (cVar1 == '!') {
      pcVar5 = s_PageUp_0096b754;
    }
    else {
      if (cVar1 != '\"') goto LAB_007481d5;
      pcVar5 = s_PageDown_0096b75c;
    }
  }
  else if (cVar1 == '$') {
    pcVar5 = &DAT_0096b734;
  }
  else if (cVar1 == '-') {
    pcVar5 = &DAT_0096b73c;
  }
  else if (cVar1 == '.') {
    pcVar5 = &DAT_0096b740;
  }
  else {
LAB_007481d5:
    pcVar5 = (char *)(unaff_EBP + 0xe);
    *(char *)(unaff_EBP + 0xe) = cVar1;
    *(undefined1 *)(unaff_EBP + 0xf) = 0;
  }
  FUN_00414edd(pcVar5,0xffffffff);
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x945);
    uVar3 = *puVar4;
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puVar4 = (undefined4 *)FUN_00434e21(unaff_EBP + -0x18,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
    FUN_0049967b(*puVar4,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (iVar2 == 1) {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x24,0x946);
    uVar3 = *puVar4;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puVar4 = (undefined4 *)FUN_00434e21(unaff_EBP + -0x14,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
    FUN_0049967b(*puVar4,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else if (iVar2 == 2) {
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x20,0x947);
    uVar3 = *puVar4;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    puVar4 = (undefined4 *)FUN_00434e21(unaff_EBP + 8,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
    FUN_0049967b(*puVar4,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  else {
    if (iVar2 != 3) goto LAB_0074836d;
    puVar4 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x948);
    uVar3 = *puVar4;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    puVar4 = (undefined4 *)FUN_00434e21(unaff_EBP + 0xc,uVar3,*(undefined4 *)(unaff_EBP + -0x10));
    FUN_0049967b(*puVar4,1,0);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
  }
  FUN_00414ebb();
LAB_0074836d:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


