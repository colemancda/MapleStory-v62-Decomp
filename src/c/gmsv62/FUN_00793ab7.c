/* FUN_00793ab7 - 0x00793ab7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00793ab7(void)

{
  uint uVar1;
  int iVar2;
  BYTE *pBVar3;
  BOOL BVar4;
  undefined4 *puVar5;
  int *extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  int *piStack_4c;
  int *piStack_48;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  
  FUN_00879bb8();
  uVar1 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x24) = uVar1 & 0xff;
  iStack_34 = 0x793ae3;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x20) = uVar1 & 0xff;
  iVar2 = (**(code **)(*extraout_ECX + 8))();
  if (iVar2 == 0) {
    iStack_34 = 0;
    puStack_38 = (undefined *)0x1;
    iStack_3c = 0x400;
    uStack_40 = 0x793b13;
    puStack_38 = (undefined *)FUN_00415015();
    iStack_3c = 0x793b19;
    FUN_00471777();
    iStack_34 = 0x793b26;
    FUN_004150c0();
  }
  iStack_34 = 0x400;
  puStack_38 = (undefined *)0x793b35;
  pBVar3 = (BYTE *)FUN_00415015();
  while (*pBVar3 != '\0') {
    iStack_34 = 0x793b46;
    BVar4 = IsDBCSLeadByte(*pBVar3);
    if (BVar4 == 0) {
      if (((char)*pBVar3 < ' ') || ('~' < (char)*pBVar3)) {
        *pBVar3 = ' ';
      }
      pBVar3 = pBVar3 + 1;
    }
    else {
      pBVar3[1] = ' ';
      *pBVar3 = ' ';
      pBVar3 = pBVar3 + 2;
    }
  }
  iStack_34 = 0x793b6f;
  FUN_004150c0();
  iStack_34 = 0;
  puStack_38 = (undefined *)0x793b79;
  FUN_0045ed72();
  iStack_34 = 0x793b80;
  FUN_0045ee27();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iVar2 = extraout_ECX[0x35f];
  iStack_34 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_38 = (undefined *)0x793ba0;
  puVar5 = (undefined4 *)FUN_00679d22();
  puStack_38 = (undefined *)*puVar5;
  iStack_3c = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_40 = 0x793bb4;
  iStack_34 = iVar2;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iStack_34 = 0x793bcb;
    FUN_00434e38();
  }
  iStack_34 = 0;
  puStack_38 = (undefined *)0x793bd6;
  FUN_0045ed72();
  iStack_34 = 0x793bdd;
  FUN_0045ee27();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_34 = 1;
  puStack_38 = (undefined *)0x400;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_3c = 0x793bf7;
  iStack_34 = FUN_00415015();
  puStack_38 = (undefined *)0x793bfd;
  iVar2 = FUN_00471a4c();
  iStack_34 = 0x793c0b;
  FUN_004150c0();
  if (*(int *)(unaff_EBP + -0x20) == 0) {
    iStack_34 = unaff_EBP + -0x14;
    puStack_38 = (undefined *)0x793c24;
    FUN_00471102();
  }
  if (iVar2 != 0) {
    iStack_34 = unaff_EBP + -0x18;
    puStack_38 = (undefined *)0x793c35;
    FUN_00471102();
  }
  if (extraout_ECX[0x149] == 0) {
    iStack_34 = 0x793c91;
    FUN_00432cfc();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_34 = 0x793c9e;
    iStack_34 = FUN_00793ddd();
    puStack_38 = (undefined *)0x793ca6;
    puStack_38 = (undefined *)FUN_00793def();
    iStack_3c = 1000;
    uStack_40 = 5000;
    piStack_48 = extraout_ECX + 0x34b;
    *(undefined1 **)(unaff_EBP + 8) = auStack_44;
    piStack_4c = (int *)0x793cc3;
    FUN_00433bdf();
    piStack_4c = extraout_ECX + 0x34f;
    *(int ***)(unaff_EBP + 8) = &piStack_48;
    FUN_0041160e();
    *(int ***)(unaff_EBP + 8) = &piStack_4c;
    FUN_004059fd(unaff_EBP + -0x1c);
    FUN_0046c293();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    bVar6 = DAT_00979260 != 0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (bVar6) {
      iStack_34 = 0x793d0f;
      iStack_34 = (**(code **)(extraout_ECX[1] + 0x10))();
      puStack_38 = (undefined *)0x793d17;
      FUN_005f1010();
      iStack_34 = 0x793d20;
      FUN_005f16b3();
      if ((*(int *)(unaff_EBP + -0x28) != 0) &&
         (**(int **)(*(int *)(unaff_EBP + -0x28) + 0x98) == 0x895455)) {
        iStack_34 = unaff_EBP + 8;
        puStack_38 = (undefined *)0x793d48;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 6;
        iStack_34 = 0x793d55;
        iVar2 = FUN_0045ec92();
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_00414ebb();
        if (iVar2 != 0) {
          *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffffd0;
          iStack_34 = 0xffffffff;
          puStack_38 = &DAT_0096c034;
          iStack_3c = 0x793d7b;
          FUN_00414edd();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iStack_34 = 0x793d87;
          FUN_0079d60a();
          iStack_34 = 0x793d8e;
          FUN_005ec8f3();
        }
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_005f171e();
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      FUN_004030b1();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
  }
  else {
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      iStack_34 = 0x793c53;
      FUN_00434e38();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x14) != 0) {
      iStack_34 = 0x793c67;
      FUN_00434e38();
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iStack_34 = 0x793c80;
      FUN_00434e38();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


