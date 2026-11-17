/* FUN_0047b671 - 0x0047b671 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0047b671(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xa0) != 0) {
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x994);
    uVar3 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    uVar3 = FUN_0047c69a(2,uVar3,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x995);
    uVar3 = *puVar2;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar3 = FUN_0047c69a(2,uVar3,1);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    *(undefined4 *)(unaff_EBP + -0x2c) = uVar3;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    *(undefined4 *)(unaff_EBP + -0x20) = 0x104;
    uVar3 = 0;
    while( true ) {
      iVar4 = (*DAT_0097b6b4)(*(undefined4 *)(extraout_ECX + 0xa0),uVar3,unaff_EBP + -0x134,
                              unaff_EBP + -0x20,0,0,0,0);
      if (iVar4 != 0) break;
      *(undefined1 *)(unaff_EBP + -0x134 + *(int *)(unaff_EBP + -0x20)) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_00414edd(unaff_EBP + -0x134,0xffffffff);
      iVar4 = unaff_EBP + -0x14;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_004655d4(0xffffffff);
      FUN_00414f8b(iVar4);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      uVar3 = *(undefined4 *)(unaff_EBP + -0x1c);
      *(undefined4 *)(unaff_EBP + -0x20) = 0x104;
    }
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    uVar5 = 0;
    while ((iVar4 = *(int *)(unaff_EBP + -0x24), iVar4 != 0 && (uVar5 < *(uint *)(iVar4 + -4)))) {
      (*DAT_0097b6b0)(*(undefined4 *)(extraout_ECX + 0xa0),*(undefined4 *)(iVar4 + uVar5 * 4));
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      uVar5 = *(uint *)(unaff_EBP + -0x14);
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    do {
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x1c,0x97a);
      uVar3 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00434e21(unaff_EBP + -0x18,uVar3,*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      FUN_0047c874(0,*(undefined4 *)(unaff_EBP + -0x18),
                   *(undefined4 *)(extraout_ECX + 0xa4 + *(int *)(unaff_EBP + -0x14) * 4));
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x30,0x97b);
      uVar3 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00434e21(unaff_EBP + -0x18,uVar3,*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      FUN_0047c874(0,*(undefined4 *)(unaff_EBP + -0x18),
                   *(undefined4 *)(extraout_ECX + 0x100 + *(int *)(unaff_EBP + -0x14) * 4));
      puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x97c);
      uVar3 = *puVar2;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00434e21(unaff_EBP + -0x18,uVar3,*(undefined4 *)(unaff_EBP + -0x14));
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_00414ebb();
      FUN_0047c874(0,*(undefined4 *)(unaff_EBP + -0x18),
                   *(undefined4 *)(extraout_ECX + 0x15c + *(int *)(unaff_EBP + -0x14) * 4));
      if (*(int *)(unaff_EBP + -0x14) == 6) {
        FUN_00434e21(unaff_EBP + -0x18,s_uiBin_d_009647a4,6);
        FUN_0047c938(0,*(undefined4 *)(unaff_EBP + -0x18),extraout_ECX + 0x1b8);
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    } while (*(int *)(unaff_EBP + -0x14) < 0x17);
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x982);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x20);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x983);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x24);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x984);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x28);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x985);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x2c);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x986);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x30);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x989);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x34);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x987);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x38);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x988);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x3c);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    FUN_0047c6e5(2,s_goAllianceINVITE_00964790,*(undefined4 *)(extraout_ECX + 0x40));
    FUN_0047c6e5(2,s_goAllianceTALK_00964780,*(undefined4 *)(extraout_ECX + 0x44));
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x98b);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x4c);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_0047c874(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xb02);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_0047c874(2,uVar3,*(undefined4 *)(extraout_ECX + 0x54));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xafd);
    uVar3 = *(undefined4 *)(extraout_ECX + 0x50);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    FUN_0047c6e5(2,uVar1,uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    FUN_0047bda0();
    FUN_0047c06f();
    FUN_0047c23a();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0x994);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    FUN_0047c6e5(2,uVar3,*(undefined4 *)(unaff_EBP + -0x28));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x28,0x995);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_0047c6e5(2,uVar3,*(undefined4 *)(unaff_EBP + -0x2c));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    puVar2 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x10,0xafe);
    uVar3 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    FUN_0047c874(2,uVar3,0x3e);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_00414ebb();
    *(undefined4 *)(extraout_ECX + 0x37c) = 0x3e;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0045f10c();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


