/* FUN_0046350f - 0x0046350f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0046350f(void)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int unaff_EBP;
  int iVar5;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  uint uStack_50;
  undefined *puStack_4c;
  
  FUN_00879bb8();
  puStack_4c = (undefined *)(unaff_EBP + -0x3c);
  uStack_50 = 0x46352b;
  FUN_0045cdbc();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puStack_4c = (undefined *)0x463538;
  uVar2 = FUN_0042452b();
  uVar2 = uVar2 & 0xff;
  *(uint *)(unaff_EBP + -0x38) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  puStack_4c = (undefined *)0x256;
  uStack_50 = unaff_EBP + -0x34;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_54 = 0x46356c;
  puVar3 = (undefined4 *)FUN_00679d22();
  puStack_4c = *(undefined **)(unaff_EBP + -0x3c);
  uStack_50 = *puVar3;
  iStack_54 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_58 = 0x46357f;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int *)(unaff_EBP + -0x34) != 0) {
    puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x34) + -0xc);
    uStack_50 = 0x463596;
    FUN_00434e38();
  }
  puStack_4c = (undefined *)(unaff_EBP + -0xd);
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iStack_54 = 0x4635a7;
  uStack_50 = uVar2;
  FUN_00465810();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (uVar2 != 0) {
    puStack_4c = (undefined *)(uVar2 * 0x37);
    uStack_50 = *(uint *)(unaff_EBP + -0x18);
    iStack_54 = 0x4635c4;
    FUN_004245d2();
    if (uVar2 != 0) {
      iVar5 = 0;
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x38);
      do {
        puStack_4c = *(undefined **)(iVar5 + 0x10 + *(int *)(unaff_EBP + -0x18));
        uStack_50 = unaff_EBP + -0x40;
        iStack_54 = 0x4635ea;
        puStack_4c = (undefined *)FUN_0045a1d8();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        uStack_50 = 0x4635f7;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + -0x40) != 0) {
          puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x40) + -0xc);
          uStack_50 = 0x46360b;
          FUN_00434e38();
        }
        *(uint *)(unaff_EBP + -0x44) = (uint)*(ushort *)(iVar5 + 0x18 + *(int *)(unaff_EBP + -0x18))
        ;
        puStack_4c = (undefined *)0x253;
        uStack_50 = unaff_EBP + -0x48;
        iStack_54 = 0x463627;
        puVar3 = (undefined4 *)FUN_00679d22();
        puStack_4c = *(undefined **)(unaff_EBP + -0x20);
        iStack_54 = *puVar3;
        uStack_50 = *(undefined4 *)(unaff_EBP + -0x44);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        iStack_58 = unaff_EBP + -0x24;
        iStack_5c = 0x46363d;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_4c = (undefined *)0x46364c;
        FUN_00414ebb();
        uStack_50 = *(uint *)(unaff_EBP + -0x24);
        if (uStack_50 == 0) {
          puStack_4c = (undefined *)0x0;
        }
        else {
          puStack_4c = *(undefined **)(uStack_50 - 4);
        }
        iStack_54 = 0x463664;
        FUN_0045efbb();
        iVar5 = iVar5 + 0x37;
        piVar1 = (int *)(unaff_EBP + -0x34);
        *piVar1 = *piVar1 + -1;
      } while (*piVar1 != 0);
      uVar2 = *(uint *)(unaff_EBP + -0x38);
    }
  }
  puStack_4c = (undefined *)0x46367b;
  uVar4 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar4;
  if ((int)uVar2 < 1) {
LAB_004636ef:
    if (*(int *)(unaff_EBP + 8) != 0) {
      puStack_4c = (undefined *)0x254;
      uStack_50 = unaff_EBP + -0x48;
      iStack_54 = 0x463708;
      puVar3 = (undefined4 *)FUN_00679d22();
      uStack_50 = *puVar3;
      puStack_4c = *(undefined **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_54 = unaff_EBP + -0x2c;
      iStack_58 = 0x46371b;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_4c = (undefined *)0x46372a;
      FUN_00414ebb();
      puStack_4c = (undefined *)(unaff_EBP + -0x2c);
      uStack_50 = unaff_EBP + 8;
      iStack_54 = 0x46373a;
      puStack_4c = (undefined *)FUN_0045e02d();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_50 = 0x463747;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + 8) != 0) {
        puStack_4c = (undefined *)(*(int *)(unaff_EBP + 8) + -0xc);
        uStack_50 = 0x46375b;
        FUN_00434e38();
      }
      puStack_4c = (undefined *)0x259;
      uStack_50 = unaff_EBP + 8;
      iStack_54 = 0x46376c;
      puStack_4c = (undefined *)FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      uStack_50 = 0x463779;
      FUN_00414f8b();
      iVar5 = *(int *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      goto LAB_004637a6;
    }
  }
  else {
    puStack_4c = (undefined *)(unaff_EBP + -0x30);
    uStack_50 = 0x46368e;
    FUN_00414f8b();
    if (*(int *)(unaff_EBP + 8) != 0) {
      puStack_4c = (undefined *)0x251;
      uStack_50 = unaff_EBP + -0x44;
      iStack_54 = 0x4636a7;
      puStack_4c = (undefined *)FUN_00679d22();
      uStack_50 = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_54 = 0x4636b8;
      puStack_4c = (undefined *)FUN_0045e02d();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uStack_50 = 0x4636c5;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int *)(unaff_EBP + -0x48) != 0) {
        puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x48) + -0xc);
        uStack_50 = 0x4636d9;
        FUN_00434e38();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -0x44) != 0) {
        puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x44) + -0xc);
        uStack_50 = 0x4636ee;
        FUN_00434e38();
      }
      goto LAB_004636ef;
    }
  }
  puStack_4c = (undefined *)0x259;
  uStack_50 = unaff_EBP + 8;
  iStack_54 = 0x463792;
  puStack_4c = (undefined *)FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  uStack_50 = 0x46379f;
  FUN_00414f8b();
  iVar5 = *(int *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 9;
LAB_004637a6:
  if (iVar5 != 0) {
    puStack_4c = (undefined *)(iVar5 + -0xc);
    uStack_50 = 0x4637b3;
    FUN_00434e38();
  }
  puStack_4c = (undefined *)0x250;
  uStack_50 = unaff_EBP + -0x38;
  iStack_54 = 0x4637c4;
  FUN_00679d22();
  puStack_4c = (undefined *)(unaff_EBP + -0x28);
  uStack_50 = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  iStack_54 = 0x4637d7;
  FUN_0045e02d();
  puStack_4c = &DAT_00964314;
  uStack_50 = unaff_EBP + -0x44;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iStack_54 = 0x4637eb;
  FUN_004653c5();
  puStack_4c = (undefined *)(unaff_EBP + -0x14);
  uStack_50 = unaff_EBP + -0x48;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  iStack_54 = 0x4637fe;
  FUN_0045e02d();
  puStack_4c = (undefined *)(unaff_EBP + -0x1c);
  uStack_50 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  iStack_54 = 0x463811;
  puStack_4c = (undefined *)FUN_0045e02d();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uStack_50 = 0x46381e;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x15;
  if (*(int *)(unaff_EBP + 8) != 0) {
    puStack_4c = (undefined *)(*(int *)(unaff_EBP + 8) + -0xc);
    uStack_50 = 0x463832;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x48) + -0xc);
    uStack_50 = 0x463847;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  if (*(int *)(unaff_EBP + -0x44) != 0) {
    puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x44) + -0xc);
    uStack_50 = 0x46385c;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (*(int *)(unaff_EBP + -0x40) != 0) {
    puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x40) + -0xc);
    uStack_50 = 0x463871;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + -0x38) != 0) {
    puStack_4c = (undefined *)(*(int *)(unaff_EBP + -0x38) + -0xc);
    uStack_50 = 0x463886;
    FUN_00434e38();
  }
  puStack_4c = (undefined *)0x0;
  uStack_50 = 0;
  iStack_54 = 0;
  iStack_58 = 0x4d5;
  iStack_5c = unaff_EBP + 8;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_58 = 0x4638a5;
  iStack_58 = FUN_00411641();
  *(int **)(unaff_EBP + -0x48) = &iStack_5c;
  FUN_00450368(unaff_EBP + -0x14);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + 8) != 0) {
    puStack_4c = (undefined *)(*(int *)(unaff_EBP + 8) + -0xc);
    uStack_50 = 0x4638d1;
    FUN_00403384();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_4c = (undefined *)0x4638de;
  FUN_0045f6a5();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_4c = (undefined *)0x4638ea;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  puStack_4c = (undefined *)0x4638f6;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_4c = (undefined *)0x463902;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_4c = (undefined *)0x46390e;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puStack_4c = (undefined *)0x46391a;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  puStack_4c = (undefined *)0x463926;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_4c = (undefined *)0x463931;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puStack_4c = (undefined *)0x46393d;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


