/* FUN_0065bbf0 - 0x0065bbf0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0065bbf0(void)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  short *psVar13;
  undefined4 extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  int unaff_EBP;
  undefined4 *puStack_c4;
  uint uStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined4 *puStack_b0;
  undefined4 *puStack_ac;
  
  FUN_00879bb8();
  iVar3 = DAT_00978368;
  uVar8 = *(undefined4 *)(DAT_00978368 + 0x204c);
  puVar12 = *(undefined4 **)(unaff_EBP + 8);
  piVar10 = (int *)(DAT_00978368 + 0x204c);
  *(undefined4 *)(unaff_EBP + -0x48) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = uVar8;
  puStack_ac = (undefined4 *)0x65bc25;
  iVar6 = FUN_0042459a();
  iVar9 = *(int *)(unaff_EBP + -0x10);
  *piVar10 = iVar6;
  if (iVar9 != iVar6) {
    *(undefined4 *)(iVar3 + 0x2c98) = 1;
  }
  puStack_ac = (undefined4 *)0x65bc3d;
  uVar4 = FUN_0042452b();
  *(undefined1 *)(unaff_EBP + -0x1d) = uVar4;
  puStack_ac = (undefined4 *)0x65bc47;
  uVar7 = FUN_0042452b();
  *(uint *)(unaff_EBP + -0x24) = uVar7 & 0xff;
  puStack_ac = (undefined4 *)0x65bc54;
  uVar7 = FUN_00424561();
  puStack_ac = (undefined4 *)0xffffffff;
  puStack_b0 = (undefined4 *)&DAT_00978474;
  *(uint *)(unaff_EBP + -0x28) = uVar7 & 0xffff;
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  FUN_00414edd();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    puStack_ac = (undefined4 *)(unaff_EBP + -0x10);
    puStack_b0 = (undefined4 *)0x65bc88;
    puStack_ac = (undefined4 *)FUN_0045cdbc();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    puStack_b0 = (undefined4 *)0x65bc95;
    FUN_00414f8b();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      puStack_ac = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
      puStack_b0 = (undefined4 *)0x65bca9;
      FUN_00434e38();
    }
    if (0 < *(int *)(unaff_EBP + -0x28)) {
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x28);
      do {
        puStack_ac = (undefined4 *)(unaff_EBP + -0x10);
        puStack_b0 = (undefined4 *)0x65bcbf;
        FUN_0045cdbc();
        puStack_ac = (undefined4 *)(unaff_EBP + -0x10);
        puStack_b0 = (undefined4 *)0xffffffff;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        FUN_004655d4();
        puStack_b0 = (undefined4 *)0x65bcd8;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          puStack_ac = (undefined4 *)(*(int *)(unaff_EBP + -0x10) + -0xc);
          puStack_b0 = (undefined4 *)0x65bcec;
          FUN_00434e38();
        }
        piVar10 = (int *)(unaff_EBP + -0x14);
        *piVar10 = *piVar10 + -1;
      } while (*piVar10 != 0);
    }
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -0x24) == 0) {
    if ((*(uint *)(DAT_00978358 + 0x52c) & 0xfffffffe) == 0x12) {
      puStack_ac = (undefined4 *)0x65bd73;
      FUN_00848297();
    }
    puStack_ac = (undefined4 *)(unaff_EBP + -0x34);
    puStack_b0 = (undefined4 *)0x65bd7e;
    iVar9 = FUN_00455c59();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    puStack_ac = (undefined4 *)0x65bd8b;
    FUN_0045e485();
    puStack_ac = (undefined4 *)0x65bd93;
    FUN_0045e4a2();
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(iVar9 + 4);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_ac = (undefined4 *)0x65bda5;
    FUN_0045e4a2();
    iVar9 = *(int *)(unaff_EBP + -0x18);
    puStack_ac = (undefined4 *)0x65bdb0;
    FUN_0042459a();
    puStack_ac = (undefined4 *)0x65bdbd;
    uVar8 = FUN_004b8ce9();
    *(undefined4 *)(iVar9 + 0xc5) = uVar8;
    iVar9 = *(int *)(unaff_EBP + -0x18);
    puStack_ac = (undefined4 *)0x65bdce;
    uVar4 = FUN_0042452b();
    *(undefined1 *)(iVar9 + 0xc9) = uVar4;
    iVar9 = *(int *)(unaff_EBP + -0x18);
    puStack_ac = (undefined4 *)0x65bddf;
    FUN_00424561();
    puStack_ac = (undefined4 *)0x65bde9;
    uVar8 = FUN_004b8c34();
    *(undefined4 *)(iVar9 + 0x65) = uVar8;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    puStack_ac = (undefined4 *)0x65bdf7;
    uVar7 = FUN_0042452b();
    *(uint *)(iVar3 + 0x18) = uVar7 & 0xff;
    if ((uVar7 & 0xff) != 0) {
      puStack_ac = (undefined4 *)0x65be09;
      uVar8 = FUN_0042459a();
      *(undefined4 *)(iVar3 + 0x10) = uVar8;
      puStack_ac = (undefined4 *)0x65be14;
      uVar8 = FUN_0042459a();
      *(undefined4 *)(iVar3 + 0x14) = uVar8;
    }
  }
  else {
    puStack_ac = (undefined4 *)0x65bd05;
    uVar8 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + -0x10) = uVar8;
    puStack_ac = (undefined4 *)0x65bd0f;
    uVar8 = FUN_0042459a();
    *(undefined4 *)(unaff_EBP + 8) = uVar8;
    puStack_ac = (undefined4 *)0x65bd19;
    puStack_ac = (undefined4 *)FUN_0042459a();
    puStack_b0 = *(undefined4 **)(unaff_EBP + 8);
    *(undefined4 **)(unaff_EBP + -0x14) = puStack_ac;
    puStack_b8 = (undefined1 *)0x65bd2e;
    FUN_0066c0f0();
    puStack_ac = *(undefined4 **)(unaff_EBP + -0x14);
    puStack_b0 = *(undefined4 **)(unaff_EBP + 8);
    puStack_b8 = (undefined1 *)0x65bd42;
    FUN_0063439e();
    puStack_ac = (undefined4 *)0x65bd4a;
    FUN_0065d116();
    puStack_ac = (undefined4 *)0x0;
    puStack_b0 = puVar12;
    FUN_004b75f1();
  }
  puStack_ac = &DAT_0097929c;
  puStack_b0 = (undefined4 *)0x65be2c;
  iVar9 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))();
  if (iVar9 == 0) {
    puStack_b0 = (undefined4 *)0x18;
    iVar9 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar9;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar9 != 0) {
      puStack_b0 = (undefined4 *)0x65be4e;
      FUN_0052899a();
    }
    puStack_b0 = (undefined4 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    puStack_b8 = (undefined1 *)0x65be5d;
    FUN_0065ce47();
  }
  *(undefined4 *)(unaff_EBP + -100) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_b0 = (undefined4 *)0x65be6e;
  FUN_0045e485();
  puStack_b0 = (undefined4 *)0x65be76;
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -100) = *(undefined4 *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -0x60) = *(undefined1 *)(unaff_EBP + -0x1d);
  puStack_b0 = (undefined4 *)0x8;
  puStack_b8 = (undefined1 *)0x65be8f;
  FUN_004245d2();
  puStack_b0 = *(undefined4 **)(*(int *)(unaff_EBP + -0x18) + 0xc5);
  puStack_b8 = (undefined1 *)0x65bea3;
  puStack_b8 = (undefined1 *)FUN_004b8c9b();
  puStack_bc = (undefined1 *)(unaff_EBP + -0x34);
  uStack_c0 = 0x65bead;
  iVar9 = FUN_004e4c4d();
  puStack_c4 = *(undefined4 **)(iVar9 + 4);
  uStack_c0 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  FUN_0065ce47();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  puStack_b0 = (undefined4 *)0x65becd;
  FUN_0065d149();
  puStack_b0 = (undefined4 *)0x65bed8;
  FUN_0083cb3e();
  if (*(int *)(unaff_EBP + -0x24) != 0) {
    puStack_b0 = (undefined4 *)0x65beec;
    FUN_0047cbbf();
    puStack_b0 = (undefined4 *)0x65bef7;
    FUN_005d10de();
    piVar10 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x42f);
    if (piVar10 != (int *)0x0) {
      piVar1 = piVar10 + *(int *)(*(int *)(unaff_EBP + -0x18) + 0x433);
      for (; piVar10 < piVar1; piVar10 = piVar10 + 1) {
        if (*piVar10 != 0) {
          iVar9 = *piVar10;
          goto LAB_0065bf20;
        }
      }
    }
    iVar9 = 0;
LAB_0065bf20:
    *(int *)(unaff_EBP + -0x10) = iVar9;
    while (iVar9 != 0) {
      puStack_b0 = (undefined4 *)(unaff_EBP + 10);
      puStack_b8 = (undefined1 *)0x65bf3f;
      FUN_004b91c9();
      puStack_b0 = (undefined4 *)0x65bf47;
      DVar11 = timeGetTime();
      puStack_b0 = (undefined4 *)(DVar11 + (uint)*(ushort *)(unaff_EBP + 10) * 1000);
      puStack_b8 = (undefined1 *)0x65bf5c;
      FUN_0083cc0f();
      iVar9 = *(int *)(unaff_EBP + -0x10);
    }
    puStack_b0 = (undefined4 *)0x1;
    FUN_0084d336();
  }
  piVar10 = (int *)(*(int *)(unaff_EBP + -0x48) + 4);
  iVar9 = *piVar10;
  puStack_b0 = &DAT_00979408;
  *(int **)(unaff_EBP + -0x50) = piVar10;
  iVar9 = (**(code **)(iVar9 + 0x48))();
  if (iVar9 != 0) {
    *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + -0x18);
    puStack_b8 = (undefined1 *)(*(int *)(unaff_EBP + -0x18) + 0x33);
    puStack_bc = (undefined1 *)0x65bf97;
    cVar5 = FUN_0045f03e();
    if (cVar5 == '\x01') {
      puStack_b8 = (undefined1 *)(*(int *)(unaff_EBP + 8) + 0x91);
      puStack_bc = (undefined1 *)0x65bfba;
      iVar9 = FUN_00413367();
      if (iVar9 == 0) {
        puStack_b8 = (undefined1 *)0x65bfd3;
        iVar9 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar9;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (iVar9 == 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = FUN_007e62e9();
        }
        uVar7 = -(uint)(iVar9 != 0) & iVar9 + 8U;
        *(uint *)(unaff_EBP + -0x30) = -(uint)(uVar7 != 0) & uVar7 - 8;
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_004c26c4();
        puStack_b8 = (undefined1 *)0x0;
        puStack_c4 = &puStack_bc;
        *(undefined1 ***)(unaff_EBP + 8) = &puStack_bc;
        uStack_c0 = 0x38a;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_00679d22();
        uStack_c0 = 0x897b50;
        puStack_c4 = (undefined4 *)0x0;
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_004c2677();
        FUN_007eddac();
        puStack_b8 = (undefined1 *)0x0;
        puStack_bc = (undefined1 *)0x65c048;
        FUN_007edf11();
        FUN_007e6e3c();
        FUN_004bc6a2();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        FUN_004c26e1();
      }
    }
    if (*(int *)(iVar3 + 0x2050) != 0) {
      puStack_b8 = &DAT_00978474;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      puStack_bc = (undefined1 *)0x65c082;
      FUN_00414edd();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      DVar11 = GetVersion();
      if (0x7fffffff < DVar11) {
        puStack_b8 = (undefined1 *)(unaff_EBP + -0x10);
        puStack_bc = (undefined1 *)0x65c0a3;
        FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_b8 = (undefined1 *)0x65c0b0;
        FUN_00414f8b();
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        FUN_00414ebb();
      }
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x10);
      puStack_bc = (undefined1 *)0x65c0cc;
      puVar12 = (undefined4 *)FUN_00679d22();
      puStack_b8 = (undefined1 *)*puVar12;
      puStack_bc = (undefined1 *)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_c0 = 0x65c0df;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      FUN_00414ebb();
      puStack_b8 = (undefined1 *)0x0;
      puStack_bc = (undefined1 *)0x0;
      uStack_c0 = 0;
      *(undefined4 ***)(unaff_EBP + -0x2c) = &puStack_c4;
      puStack_c4 = extraout_ECX_00;
      FUN_00450368(unaff_EBP + 8);
      FUN_007db3ad();
      puStack_b8 = *(undefined1 **)(iVar3 + 0x2054);
      puStack_bc = (undefined1 *)0x65c118;
      FUN_0084bb67();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414ebb();
    }
    cVar5 = *(char *)(iVar3 + 0x2058);
    *(char *)(unaff_EBP + 0xb) = cVar5;
    if (cVar5 != '\0') {
      *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar3 + 0x205a);
      *(undefined4 *)(unaff_EBP + -0x38) = *(undefined4 *)(iVar3 + 0x205e);
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar3 + 0x2062);
      *(undefined4 *)(unaff_EBP + -0x30) = *(undefined4 *)(iVar3 + 0x2066);
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      puStack_bc = (undefined1 *)0x65c15c;
      puVar12 = (undefined4 *)FUN_00679d22();
      uStack_c0 = *puVar12;
      puStack_b8 = (undefined1 *)(uint)*(ushort *)(unaff_EBP + -0x3a);
      puStack_bc = (undefined1 *)(uint)*(ushort *)(unaff_EBP + -0x3c);
      puStack_c4 = (undefined4 *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_00414ebb();
      puStack_b8 = (undefined1 *)0x65c196;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x78));
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x78);
      puStack_bc = (undefined1 *)0x65c1a5;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        puStack_b8 = (undefined1 *)0x65c1b1;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      puStack_b8 = (undefined1 *)0x65c1be;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x88));
      puStack_b8 = (undefined1 *)(unaff_EBP + -0x88);
      puVar12 = &DAT_00980690;
      puStack_bc = (undefined1 *)0x65c1cb;
      iVar9 = FUN_00402e32();
      if (iVar9 < 0) {
        puStack_b8 = (undefined1 *)0x65c1d7;
        FUN_00878dfb();
        puVar12 = extraout_ECX_01;
      }
      puStack_b8 = (undefined1 *)0x0;
      puStack_bc = (undefined1 *)(unaff_EBP + -0x78);
      uStack_c0 = unaff_EBP + -0x88;
      *(undefined4 ***)(unaff_EBP + -0x2c) = &puStack_c4;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      puStack_c4 = puVar12;
      FUN_00679e4e(&puStack_c4,0xd01);
      iVar9 = unaff_EBP + -0xa8;
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      FUN_00405a1d(iVar9);
      FUN_00402660();
      FUN_00404a02(iVar9);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      puStack_bc = (undefined1 *)0x65c229;
      iVar9 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x54) = iVar9;
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (iVar9 != 0) {
        puStack_b8 = (undefined1 *)0x65c244;
        iVar9 = FUN_00404b30();
        if ((iVar9 < 0) && (iVar9 != -0x7fffbffe)) {
          puStack_b8 = (undefined1 *)0x65c252;
          FUN_00878dfb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      puStack_b8 = (undefined1 *)0x65c262;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        puStack_b8 = (undefined1 *)0x65c26d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      puStack_b8 = (undefined1 *)0x65c27d;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        puStack_b8 = (undefined1 *)0x65c288;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      puStack_b8 = (undefined1 *)0x65c295;
      iVar9 = FUN_00402bc3();
      if (iVar9 < 0) {
        puStack_b8 = (undefined1 *)0x65c2a0;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        FUN_0087a1b0();
        puStack_b8 = (undefined1 *)0x0;
        uStack_c0 = (uint)*(byte *)(unaff_EBP + 0xb);
        puStack_c4 = (undefined4 *)0x65c2c0;
        puStack_bc = (undefined1 *)&puStack_b0;
        uStack_c0 = FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_bc;
        puStack_c4 = (undefined4 *)0x65c2cc;
        FUN_004033a1();
        uStack_c0 = unaff_EBP + -0x98;
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        puStack_c4 = (undefined4 *)0x65c2df;
        FUN_0040263d();
        puStack_c4 = (undefined4 *)0x65c2e6;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        puStack_bc = (undefined1 *)0x65c2f1;
        iVar9 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x4c) = iVar9;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        if (iVar9 != 0) {
          puStack_b8 = (undefined1 *)0x65c307;
          iVar9 = FUN_00404b30();
          if ((iVar9 < 0) && (iVar9 != -0x7fffbffe)) {
            puStack_b8 = (undefined1 *)0x65c315;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        puStack_b8 = (undefined1 *)0x65c325;
        iVar9 = FUN_00402bc3();
        if (iVar9 < 0) {
          puStack_b8 = (undefined1 *)0x65c330;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        if (*(int *)(unaff_EBP + 8) != 0) {
          puStack_bc = &stack0xffffff4c;
          *(undefined1 **)(unaff_EBP + -0x2c) = &stack0xffffff4c;
          puStack_b8 = (undefined1 *)0x638;
          uStack_c0 = 0x65c34f;
          FUN_00679e4e();
          puStack_b8 = (undefined1 *)(unaff_EBP + -0x3c);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          puStack_bc = (undefined1 *)0x65c35f;
          FUN_0040263d();
          puStack_bc = (undefined1 *)0x65c366;
          psVar13 = (short *)FUN_004048a4();
          sVar2 = *psVar13;
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          if (sVar2 == 8) {
            puStack_b8 = *(undefined1 **)(psVar13 + 4);
          }
          else {
            puStack_b8 = &DAT_0097812c;
          }
          puStack_bc = (undefined1 *)0x65c385;
          FUN_00454081();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          puStack_b8 = (undefined1 *)0x65c392;
          iVar9 = FUN_00402bc3();
          if (iVar9 < 0) {
            puStack_b8 = (undefined1 *)0x65c39d;
            FUN_00878dfb();
          }
        }
        puStack_b8 = (undefined1 *)0x1;
        puStack_bc = (undefined1 *)0x0;
        uStack_c0 = 0;
        puStack_c4 = (undefined4 *)&DAT_00964314;
        FUN_004653c5(unaff_EBP + -0x2c);
        *(undefined4 ***)(unaff_EBP + -0x30) = &puStack_c4;
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        puStack_c4 = extraout_ECX_02;
        FUN_0045e02d(&puStack_c4,unaff_EBP + -0x10);
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 0x1d;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          puStack_b8 = (undefined1 *)0x65c3fa;
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        puStack_b8 = (undefined1 *)0x65c40b;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414ebb();
    }
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      puStack_b8 = &DAT_00978474;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      puStack_bc = (undefined1 *)0x65c432;
      FUN_00414edd();
      puStack_b8 = *(undefined1 **)(unaff_EBP + -0x40);
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_bc = (undefined1 *)0x65c44e;
      FUN_0045efbb();
      puStack_b8 = (undefined1 *)0x65c459;
      _strlen(&DAT_00964314);
      puStack_b8 = &DAT_00964314;
      puStack_bc = (undefined1 *)0x65c464;
      FUN_0045efbb();
      iVar9 = 0;
      if (0 < *(int *)(unaff_EBP + -0x28)) {
        do {
          puStack_b8 = (undefined1 *)0x65c476;
          _strlen(&DAT_00968a6c);
          puStack_b8 = &DAT_00968a6c;
          puStack_bc = (undefined1 *)0x65c481;
          FUN_0045efbb();
          puStack_b8 = *(undefined1 **)(*(int *)(unaff_EBP + -0x44) + iVar9 * 4);
          puStack_bc = (undefined1 *)0x65c49e;
          FUN_0045efbb();
          iVar9 = iVar9 + 1;
        } while (iVar9 < *(int *)(unaff_EBP + -0x28));
      }
      puStack_b8 = (undefined1 *)0x65c4b3;
      iVar9 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x30) = iVar9;
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      if (iVar9 != 0) {
        FUN_006b6843();
      }
      puStack_b8 = (undefined1 *)(unaff_EBP + 8);
      *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff4c;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_bc = (undefined1 *)0x65c4da;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      puStack_b8 = (undefined1 *)0x65c4e3;
      FUN_0065d10b();
      puStack_b8 = (undefined1 *)0x65c4ea;
      FUN_006b6f55();
      FUN_006b702b();
      FUN_006b7056();
      puStack_b8 = (undefined1 *)0x65c516;
      FUN_00817f6e();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00414ebb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int *)(unaff_EBP + -100) != 0) {
    puStack_b8 = (undefined1 *)0x65c534;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -100) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    puStack_b8 = (undefined1 *)0x65c549;
    FUN_0045e7c2();
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_0045f10c();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


