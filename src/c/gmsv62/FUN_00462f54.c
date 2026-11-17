/* FUN_00462f54 - 0x00462f54 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00462f54(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int extraout_ECX;
  int iVar9;
  int unaff_EBP;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x60) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x34) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_64 = 0x462f92;
  uStack_68 = FUN_0042452b();
  uStack_68 = uStack_68 & 0xff;
  uStack_64 = unaff_EBP + -0xd;
  *(uint *)(unaff_EBP + -0x18) = uStack_68;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_6c = 0x462fa8;
  FUN_00465810();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar9 = extraout_ECX;
  if (0 < *(int *)(unaff_EBP + -0x18)) {
    uStack_64 = *(int *)(unaff_EBP + -0x18) * 0x37;
    uStack_68 = *(uint *)(unaff_EBP + -0x1c);
    iStack_6c = 0x462fcc;
    FUN_004245d2();
    if (0 < *(int *)(unaff_EBP + -0x18)) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      *(undefined4 *)(unaff_EBP + -0x40) = *(undefined4 *)(unaff_EBP + -0x18);
      do {
        uStack_64 = 0xffffffff;
        uStack_68 = 0x462ff0;
        puVar4 = (undefined4 *)FUN_00465774();
        puVar5 = (undefined4 *)(*(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x1c));
        for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = *(undefined2 *)puVar5;
        *(undefined1 *)((int)puVar4 + 2) = *(undefined1 *)((int)puVar5 + 2);
        uStack_64 = 0;
        uStack_68 = 0x463015;
        FUN_008161f1();
        uStack_64 = 0;
        uStack_68 = 0x46301e;
        FUN_00489a0e();
        iVar9 = *(int *)(unaff_EBP + -0x2c);
        uStack_64 = *(undefined4 *)(iVar9 + 0x10 + *(int *)(unaff_EBP + -0x1c));
        uStack_68 = unaff_EBP + -0x4c;
        iStack_6c = 0x463037;
        uStack_64 = FUN_0045a1d8();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        uStack_68 = 0x463044;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uStack_64 = 0x463050;
        FUN_00414ebb();
        uVar1 = *(ushort *)(iVar9 + 0x18 + *(int *)(unaff_EBP + -0x1c));
        uStack_64 = 0x253;
        uStack_68 = unaff_EBP + -0x3c;
        iStack_6c = 0x463068;
        puVar5 = (undefined4 *)FUN_00679d22();
        uStack_64 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_6c = *puVar5;
        iStack_70 = unaff_EBP + -0x24;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iStack_74 = 0x46307c;
        uStack_68 = (uint)uVar1;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 8;
        uStack_64 = 0x46308b;
        FUN_00414ebb();
        uStack_68 = *(uint *)(unaff_EBP + -0x24);
        if (uStack_68 == 0) {
          uStack_64 = 0;
        }
        else {
          uStack_64 = *(undefined4 *)(uStack_68 - 4);
        }
        iStack_6c = 0x4630a3;
        FUN_0045efbb();
        piVar8 = (int *)(unaff_EBP + -0x40);
        *piVar8 = *piVar8 + -1;
        *(int *)(unaff_EBP + -0x2c) = iVar9 + 0x37;
      } while (*piVar8 != 0);
      iVar9 = *(int *)(unaff_EBP + -0x28);
    }
  }
  uStack_64 = 4599999;
  uVar6 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x2c) = uVar6;
  uStack_64 = 0x4630ca;
  uStack_68 = FUN_0042459a();
  *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + uStack_68;
  uStack_64 = unaff_EBP + -0xe;
  *(uint *)(unaff_EBP + -0x40) = uStack_68;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  iStack_6c = 0x4630e0;
  FUN_004658da();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (0 < *(int *)(unaff_EBP + -0x40)) {
    uStack_64 = *(int *)(unaff_EBP + -0x40) << 3;
    uStack_68 = *(int *)(unaff_EBP + -0x30);
    iStack_6c = 0x4630fe;
    FUN_004245d2();
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    if (0 < *(int *)(unaff_EBP + -0x40)) {
      *(int *)(unaff_EBP + -0x50) = iVar9 + 0x940;
      *(int *)(unaff_EBP + -0x4c) = iVar9 + 0xea8;
      do {
        iVar9 = *(int *)(unaff_EBP + -0x28);
        iVar2 = *(int *)(unaff_EBP + -0x30);
        uVar3 = *(uint *)(iVar2 + iVar9 * 8);
        iVar7 = *(int *)(iVar2 + iVar9 * 8 + 4);
        *(uint *)(unaff_EBP + -0x3c) = (uint)*(ushort *)(iVar2 + iVar9 * 8);
        *(int *)(unaff_EBP + -0x54) = iVar7;
        iVar7 = iVar7 / 1000000;
        if ((((iVar7 != 2) && (iVar7 != 3)) && (iVar7 != 4)) && (*(int *)(unaff_EBP + -0x3c) == 0))
        {
          *(undefined4 *)(unaff_EBP + -0x3c) = 1;
        }
        uStack_64 = iVar7 + -1;
        uStack_68 = 0x46316d;
        FUN_004b2699();
        uStack_64 = 0;
        uStack_68 = 0x463176;
        FUN_008161f1();
        uStack_64 = 0;
        uStack_68 = 0x46317f;
        FUN_008161f1();
        uStack_68 = 0x463188;
        uStack_64 = uVar3 >> 0x10;
        FUN_0048b3d1();
        uStack_64 = *(undefined4 *)(unaff_EBP + -0x54);
        uStack_68 = unaff_EBP + -0x58;
        iStack_6c = 0x46319a;
        uStack_64 = FUN_0045a1d8();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        uStack_68 = 0x4631a7;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        uStack_64 = 0x4631b3;
        FUN_00414ebb();
        uStack_64 = 0x253;
        uStack_68 = unaff_EBP + -0x5c;
        iStack_6c = 0x4631c3;
        puVar5 = (undefined4 *)FUN_00679d22();
        uStack_64 = *(undefined4 *)(unaff_EBP + -0x20);
        iStack_6c = *puVar5;
        uStack_68 = *(undefined4 *)(unaff_EBP + -0x3c);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        iStack_70 = unaff_EBP + -0x24;
        iStack_74 = 0x4631d9;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        uStack_64 = 0x4631e8;
        FUN_00414ebb();
        uStack_68 = *(int *)(unaff_EBP + -0x24);
        if (uStack_68 == 0) {
          uStack_64 = 0;
        }
        else {
          uStack_64 = *(undefined4 *)(uStack_68 + -4);
        }
        iStack_6c = 0x463200;
        FUN_0045efbb();
        *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x28) + 1;
      } while (*(int *)(unaff_EBP + -0x28) < *(int *)(unaff_EBP + -0x40));
    }
  }
  uStack_64 = 0x463217;
  uVar6 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + 8) = uVar6;
  if (0 < *(int *)(unaff_EBP + -0x18)) {
    uStack_64 = unaff_EBP + -0x38;
    uStack_68 = 0x463230;
    FUN_00414f8b();
    if (*(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x2c) != 0) {
      uStack_64 = 0x251;
      uStack_68 = unaff_EBP + -0x58;
      iStack_6c = 0x463248;
      uStack_64 = FUN_00679d22();
      uStack_68 = unaff_EBP + -0x5c;
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_6c = 0x463259;
      uStack_64 = FUN_0045e02d();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      uStack_68 = 0x463266;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_64 = 0x463272;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_64 = 0x46327e;
      FUN_00414ebb();
    }
  }
  if (*(int *)(unaff_EBP + -0x2c) == 0) {
LAB_0046331e:
    if (*(int *)(unaff_EBP + 8) == 0) goto LAB_004634dd;
    uStack_64 = 0x255;
    uStack_68 = unaff_EBP + -0x5c;
    iStack_6c = 0x463337;
    puVar5 = (undefined4 *)FUN_00679d22();
    uStack_68 = *puVar5;
    uStack_64 = *(undefined4 *)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_6c = unaff_EBP + -0x44;
    iStack_70 = 0x46334a;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_64 = 0x463359;
    FUN_00414ebb();
    uStack_64 = unaff_EBP + -0x44;
    uStack_68 = unaff_EBP + 8;
    iStack_6c = 0x463369;
    uStack_64 = FUN_0045e02d();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    uStack_68 = 0x463376;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_64 = 0x463382;
    FUN_00414ebb();
  }
  else {
    uStack_64 = 0x254;
    uStack_68 = unaff_EBP + -0x5c;
    iStack_6c = 0x463297;
    puVar5 = (undefined4 *)FUN_00679d22();
    uStack_68 = *puVar5;
    uStack_64 = *(undefined4 *)(unaff_EBP + -0x2c);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iStack_6c = unaff_EBP + -0x48;
    iStack_70 = 0x4632aa;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_64 = 0x4632b9;
    FUN_00414ebb();
    uStack_64 = unaff_EBP + -0x48;
    uStack_68 = unaff_EBP + -0x5c;
    iStack_6c = 0x4632c9;
    uStack_64 = FUN_0045e02d();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    uStack_68 = 0x4632d6;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_64 = 0x4632e2;
    FUN_00414ebb();
    if (*(int *)(unaff_EBP + 8) != 0) {
      uStack_64 = 0x251;
      uStack_68 = unaff_EBP + -0x5c;
      iStack_6c = 0x4632f7;
      piVar8 = (int *)FUN_00679d22();
      uStack_68 = *piVar8;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (uStack_68 == 0) {
        uStack_64 = 0;
      }
      else {
        uStack_64 = *(undefined4 *)(uStack_68 + -4);
      }
      iStack_6c = 0x463312;
      FUN_0045efbb();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      uStack_64 = 0x46331e;
      FUN_00414ebb();
      goto LAB_0046331e;
    }
LAB_004634dd:
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      uStack_64 = 600;
      uStack_68 = unaff_EBP + 8;
      iStack_6c = 0x4634f6;
      uStack_64 = FUN_00679d22();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      uStack_68 = 0x463503;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      goto LAB_004633a6;
    }
  }
  uStack_64 = 599;
  uStack_68 = unaff_EBP + 8;
  iStack_6c = 0x463392;
  uStack_64 = FUN_00679d22();
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  uStack_68 = 0x46339f;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
LAB_004633a6:
  uStack_64 = 0x4633ab;
  FUN_00414ebb();
  uStack_64 = 0x250;
  uStack_68 = unaff_EBP + -0x58;
  iStack_6c = 0x4633bb;
  FUN_00679d22();
  uStack_64 = unaff_EBP + -0x14;
  uStack_68 = unaff_EBP + -0x5c;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  iStack_6c = 0x4633ce;
  FUN_0045e02d();
  uStack_64 = unaff_EBP + -0x34;
  uStack_68 = unaff_EBP + 8;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_6c = 0x4633e1;
  uStack_64 = FUN_0045e02d();
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_68 = 0x4633ee;
  FUN_00414f8b();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  uStack_64 = 0x4633fa;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  uStack_64 = 0x463406;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_64 = 0x463412;
  FUN_00414ebb();
  uStack_64 = 0;
  uStack_68 = 0;
  iStack_6c = 0;
  iStack_70 = 0x4d5;
  iStack_74 = unaff_EBP + 8;
  FUN_00679d86();
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_70 = 0x463430;
  iStack_70 = FUN_00411641();
  *(int **)(unaff_EBP + -0x5c) = &iStack_74;
  FUN_00450368(unaff_EBP + -0x14);
  FUN_007db3ad();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  uStack_64 = 0x463454;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 8;
  uStack_64 = 0x463460;
  FUN_004658b8();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  uStack_64 = 0x46346c;
  FUN_0045f6a5();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_64 = 0x463478;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  uStack_64 = 0x463484;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  uStack_64 = 0x463490;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_64 = 0x46349c;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_64 = 0x4634a8;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_64 = 0x4634b4;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_64 = 0x4634c0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_64 = 0x4634cc;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


