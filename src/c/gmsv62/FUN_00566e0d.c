/* FUN_00566e0d - 0x00566e0d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00566e0d(void)

{
  byte bVar1;
  short sVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  short *psVar8;
  undefined4 uVar9;
  int extraout_ECX;
  undefined4 *extraout_ECX_00;
  undefined4 *extraout_ECX_01;
  undefined4 *extraout_ECX_02;
  undefined4 *extraout_ECX_03;
  undefined4 *extraout_ECX_04;
  undefined1 *puVar10;
  int unaff_EBP;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_118 [4];
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int iStack_104;
  undefined1 *puStack_100;
  int iStack_fc;
  undefined4 *puStack_f8;
  uint uStack_f4;
  undefined1 *puStack_f0;
  char *pcStack_ec;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x14) = extraout_ECX;
  *(undefined4 *)(extraout_ECX + 0x144) = 0;
  uVar4 = FUN_0042452b();
  uVar4 = uVar4 & 0xff;
  *(uint *)(unaff_EBP + -0x24) = uVar4;
  uVar3 = FUN_0042452b();
  *(undefined1 *)(extraout_ECX + 0x180) = uVar3;
  FUN_0042459a();
  puVar6 = (undefined4 *)0x0;
  if (DAT_00979430 != 0) {
    pcStack_ec = (char *)0x566e62;
    FUN_0058ae08();
    puVar6 = extraout_ECX_00;
  }
  if (uVar4 == 2) {
    uVar5 = FUN_0042452b();
    *(uint *)(unaff_EBP + -0x10) = uVar5 & 0xff;
    pcStack_ec = (char *)(unaff_EBP + -0x5c);
    puStack_f0 = (undefined1 *)0x566e8c;
    FUN_004245d2();
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      if ((0x14 < *(int *)(unaff_EBP + -0x10)) && (*(int *)(unaff_EBP + -0x10) < 0x1e)) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0xc;
      }
      pcStack_ec = (char *)(unaff_EBP + -0x5c);
      puStack_f0 = (undefined1 *)0x566eb6;
      (*DAT_0097b4b0)();
      puStack_f0 = (undefined1 *)(unaff_EBP + -0xd4);
      uStack_f4 = 0x566ec3;
      (*DAT_0097b4a8)();
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if ((int)((uint)*(ushort *)(unaff_EBP + -0x3c) - (uint)*(ushort *)(unaff_EBP + -0xd4)) < 3) {
        if (*(ushort *)(unaff_EBP + -0x34) < 0xd) {
          puVar10 = (undefined1 *)(uint)*(ushort *)(unaff_EBP + -0x34);
        }
        else {
          puVar10 = (undefined1 *)((uint)*(ushort *)(unaff_EBP + -0x34) % 0xc);
        }
        pcStack_ec = (char *)(unaff_EBP + -0x18);
        puStack_f0 = (undefined1 *)0x566f04;
        puVar6 = (undefined4 *)FUN_00679d22();
        puStack_100 = (undefined1 *)*puVar6;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        pcStack_ec = (char *)(uint)*(ushort *)(unaff_EBP + -0x32);
        uStack_f4 = (uint)*(ushort *)(unaff_EBP + -0x3c);
        puStack_f8 = (undefined4 *)(uint)*(ushort *)(unaff_EBP + -0x36);
        iStack_104 = unaff_EBP + -0x1c;
        iStack_fc = *(int *)(&DAT_009793d8 + ((int)(*(ushort *)(unaff_EBP + -0x3a) - 1) % 0xc) * 4);
        uStack_108 = 0x566f49;
        puStack_f0 = puVar10;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      else {
        pcStack_ec = (char *)(unaff_EBP + -0x18);
        puStack_f0 = (undefined1 *)0x566f64;
        FUN_00679d22();
        pcStack_ec = (char *)(unaff_EBP - 0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        puStack_f0 = (undefined1 *)0x566f73;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 0;
      }
      FUN_00414ebb();
      if (*(int *)(unaff_EBP + -0x10) == 99) {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        puStack_f0 = (undefined1 *)(unaff_EBP + 8);
        pcStack_ec = s_You_have_been_blocked_for_typing_009656d0;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_f4 = 0x566f9e;
        FUN_00434e21();
        pcStack_ec = (char *)0x1;
        puStack_f0 = (undefined1 *)0x0;
        uStack_f4 = 0;
        iStack_fc = unaff_EBP + 8;
        *(undefined4 ***)(unaff_EBP + -0x24) = &puStack_f8;
        puStack_100 = (undefined1 *)0x566fb5;
        puStack_f8 = extraout_ECX_01;
        FUN_00450368();
        iStack_fc = 0x566fba;
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        FUN_00414ebb();
      }
      else {
        pcStack_ec = (char *)0x566fe3;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x84));
        pcStack_ec = (char *)(unaff_EBP + -0x84);
        puStack_f0 = (undefined1 *)0x566ff4;
        iVar7 = FUN_00402e32();
        if (iVar7 < 0) {
          pcStack_ec = (char *)0x567000;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        pcStack_ec = (char *)0x56700a;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x6c));
        pcStack_ec = (char *)(unaff_EBP + -0x6c);
        puVar6 = &DAT_00980690;
        puStack_f0 = (undefined1 *)0x567018;
        iVar7 = FUN_00402e32();
        if (iVar7 < 0) {
          pcStack_ec = (char *)0x567024;
          FUN_00878dfb();
          puVar6 = extraout_ECX_02;
        }
        pcStack_ec = (char *)0x0;
        puStack_f0 = (undefined1 *)(unaff_EBP + -0x84);
        uStack_f4 = unaff_EBP + -0x6c;
        puStack_100 = (undefined1 *)&puStack_f8;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_f8;
        iStack_fc = 0xacc;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        iStack_104 = 0x567048;
        puStack_f8 = puVar6;
        FUN_00679e4e();
        iStack_fc = unaff_EBP + -0xb4;
        *(undefined1 *)(unaff_EBP + -4) = 5;
        puStack_100 = (undefined1 *)0x567058;
        FUN_00405a1d();
        puStack_100 = (undefined1 *)0x56705f;
        FUN_00402660();
        puStack_100 = (undefined1 *)0x567066;
        FUN_00404a02();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puStack_f0 = (undefined1 *)0x567071;
        iVar7 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x18) = iVar7;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        if (iVar7 != 0) {
          pcStack_ec = (char *)0x56708c;
          iVar7 = FUN_00404b30();
          if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
            pcStack_ec = (char *)0x56709a;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        pcStack_ec = (char *)0x5670aa;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_ec = (char *)0x5670b5;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 10;
        pcStack_ec = (char *)0x5670c2;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_ec = (char *)0x5670cd;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        pcStack_ec = (char *)0x5670dd;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_ec = (char *)0x5670e8;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00414ebb();
          uVar4 = *(uint *)(unaff_EBP + -0x24);
          puVar6 = extraout_ECX_04;
          goto LAB_0056726e;
        }
        FUN_0087a1b0();
        pcStack_ec = (char *)0x0;
        uStack_f4 = *(undefined4 *)(unaff_EBP + -0x10);
        puStack_f8 = (undefined4 *)0x567106;
        puStack_f0 = &stack0xffffff1c;
        uStack_f4 = FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_f0;
        puStack_f8 = (undefined4 *)0x567112;
        FUN_004033a1();
        uStack_f4 = unaff_EBP + -0xc4;
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_f8 = (undefined4 *)0x567125;
        FUN_0040263d();
        puStack_f8 = (undefined4 *)0x56712c;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_f0 = (undefined1 *)0x567137;
        iVar7 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x10) = iVar7;
        *(undefined4 *)(unaff_EBP + 8) = 0;
        if (iVar7 != 0) {
          pcStack_ec = (char *)0x56714d;
          iVar7 = FUN_00404b30();
          if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
            pcStack_ec = (char *)0x56715b;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        pcStack_ec = (char *)0x56716b;
        iVar7 = FUN_00402bc3();
        if (iVar7 < 0) {
          pcStack_ec = (char *)0x567176;
          FUN_00878dfb();
        }
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        if (*(int *)(unaff_EBP + 8) != 0) {
          puStack_f0 = &stack0xffffff18;
          *(undefined1 **)(unaff_EBP + -0x28) = &stack0xffffff18;
          pcStack_ec = (char *)0x638;
          uStack_f4 = 0x567195;
          FUN_00679e4e();
          pcStack_ec = (char *)(unaff_EBP + -0xe4);
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          puStack_f0 = (undefined1 *)0x5671a8;
          FUN_0040263d();
          puStack_f0 = (undefined1 *)0x5671af;
          psVar8 = (short *)FUN_004048a4();
          sVar2 = *psVar8;
          *(undefined1 *)(unaff_EBP + -4) = 0x12;
          if (sVar2 == 8) {
            pcStack_ec = *(char **)(psVar8 + 4);
          }
          else {
            pcStack_ec = &DAT_0097812c;
          }
          puStack_f0 = (undefined1 *)0x5671ce;
          FUN_00454081();
          *(undefined1 *)(unaff_EBP + -4) = 0x10;
          pcStack_ec = (char *)0x5671de;
          iVar7 = FUN_00402bc3();
          if (iVar7 < 0) {
            pcStack_ec = (char *)0x5671e9;
            FUN_00878dfb();
          }
        }
        pcStack_ec = (char *)0x1;
        puStack_f0 = (undefined1 *)0x0;
        uStack_f4 = 0;
        puStack_f8 = (undefined4 *)&DAT_00964314;
        iStack_fc = unaff_EBP + -0x24;
        puStack_100 = (undefined1 *)0x5671ff;
        FUN_004653c5();
        puStack_100 = (undefined1 *)&puStack_f8;
        *(undefined4 ***)(unaff_EBP + -0x28) = &puStack_f8;
        iStack_fc = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_104 = 0x567215;
        puStack_f8 = extraout_ECX_03;
        FUN_0045e02d();
        iStack_fc = 0x56721a;
        FUN_007db3ad();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        FUN_00414ebb();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          pcStack_ec = (char *)0x567246;
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x20) != (int *)0x0) {
          pcStack_ec = (char *)0x56725a;
          (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
        }
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      goto LAB_00567417;
    }
LAB_00567311:
    switch(uVar4) {
    default:
      goto switchD_0056731d_caseD_0;
    case 2:
    case 3:
      pcStack_ec = (char *)0x10;
      break;
    case 4:
      pcStack_ec = (char *)0x3;
      break;
    case 5:
      pcStack_ec = (char *)0x14;
      break;
    case 7:
      pcStack_ec = (char *)0x0;
      puStack_f0 = (undefined1 *)0x56734e;
      FUN_005697ac();
      pcStack_ec = (char *)0x11;
      break;
    case 10:
      pcStack_ec = (char *)0x13;
      break;
    case 0xffffffff:
    case 6:
    case 8:
    case 9:
      pcStack_ec = (char *)0xf;
    }
LAB_00567424:
    puStack_f0 = (undefined1 *)0x567429;
    FUN_0057a546();
switchD_0056731d_caseD_0:
    if (((uVar4 != 0) && (uVar4 != 0xc)) && (uVar4 != 0x17)) goto LAB_00567736;
    bVar1 = *(byte *)(*(int *)(unaff_EBP + -0x14) + 0x180);
    if (bVar1 < 2) {
      if (DAT_00979430 != 0) {
        pcStack_ec = (char *)0x5674ae;
        FUN_0058ae08();
      }
      if (uVar4 == 0x17) {
        pcStack_ec = (char *)0x5674c2;
        iVar7 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar7;
        *(undefined4 *)(unaff_EBP + -4) = 0x19;
        if (iVar7 != 0) {
          pcStack_ec = (char *)0x5674de;
          FUN_0058aefd();
        }
        goto LAB_00567736;
      }
      uVar9 = FUN_0042459a();
      *(undefined4 *)(unaff_EBP + 8) = uVar9;
      uVar4 = FUN_0042452b();
      *(uint *)(unaff_EBP + -0x24) = uVar4 & 0xff;
      uVar3 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x18) = uVar3;
      uVar3 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x1c) = uVar3;
      pcStack_ec = (char *)0x56751c;
      FUN_0045cdbc();
      *(undefined4 *)(unaff_EBP + -4) = 0x1a;
      uVar3 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x10) = uVar3;
      uVar3 = FUN_0042452b();
      *(undefined1 *)(unaff_EBP + -0x20) = uVar3;
      pcStack_ec = (char *)(unaff_EBP + -0x74);
      puStack_f0 = (undefined1 *)0x567544;
      FUN_004245d2();
      pcStack_ec = (char *)(unaff_EBP + -0x74);
      puStack_f0 = (undefined1 *)0x567555;
      (*DAT_0097b4b0)();
      puStack_f0 = (undefined1 *)0x8;
      uStack_f4 = unaff_EBP + -0x54;
      puStack_f8 = (undefined4 *)0x567562;
      FUN_004245d2();
      puStack_f0 = (undefined1 *)(unaff_EBP + -0x94);
      uStack_f4 = unaff_EBP + -0x54;
      puStack_f8 = (undefined4 *)0x567573;
      (*DAT_0097b4b0)();
      uVar9 = FUN_0042459a();
      if ((uVar4 & 0xff) == 10) {
        if (DAT_00979430 != 0) {
          pcStack_ec = (char *)0x567596;
          FUN_0058ae08();
        }
        if (DAT_0097943c == 0) {
          pcStack_ec = (char *)0x5675ad;
          iVar7 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x28) = iVar7;
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          if (iVar7 != 0) {
            pcStack_ec = (char *)0x5675c2;
            FUN_0057dc2c();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        }
        *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffff18;
        pcStack_ec = (char *)0xffffffff;
        puStack_f0 = &DAT_00978474;
        uStack_f4 = 0x5675da;
        FUN_00414edd();
        iStack_fc = *(int *)(unaff_EBP + -0x94);
        puStack_f8 = *(undefined4 **)(unaff_EBP + -0x90);
        uStack_f4 = *(int *)(unaff_EBP + -0x8c);
        puStack_f0 = *(undefined1 **)(unaff_EBP + -0x88);
        uStack_110 = *(undefined4 *)(unaff_EBP + -0x20);
        uStack_114 = *(undefined4 *)(unaff_EBP + -0x10);
        uStack_10c = *(undefined4 *)(unaff_EBP + -0xa4);
        uStack_108 = *(undefined4 *)(unaff_EBP + -0xa0);
        iStack_104 = *(int *)(unaff_EBP + -0x9c);
        *(undefined1 **)(unaff_EBP + -0x20) = auStack_118;
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        puStack_100 = *(undefined1 **)(unaff_EBP + -0x98);
        pcStack_ec = (char *)uVar9;
        FUN_00450368(unaff_EBP + -0x2c);
        uVar9 = *(undefined4 *)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        uVar13 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar12 = 10;
        uVar11 = *(undefined4 *)(unaff_EBP + 8);
        FUN_004e21db(uVar11,10,uVar13,uVar9);
        FUN_0056777d(uVar11,uVar12,uVar13,uVar9);
      }
      else {
        if ((DAT_0097943c != 0) && (FUN_00815de9(), DAT_0097943c != 0)) {
          pcStack_ec = (char *)0x56765a;
          (*(code *)**(undefined4 **)(DAT_0097943c + 8))();
        }
        *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff18;
        pcStack_ec = (char *)0xffffffff;
        puStack_f0 = &DAT_00978474;
        uStack_f4 = 0x56766e;
        FUN_00414edd();
        iStack_fc = *(int *)(unaff_EBP + -0x94);
        puStack_f8 = *(undefined4 **)(unaff_EBP + -0x90);
        uStack_f4 = *(undefined4 *)(unaff_EBP + -0x8c);
        puStack_f0 = *(undefined1 **)(unaff_EBP + -0x88);
        uStack_110 = *(undefined4 *)(unaff_EBP + -0x20);
        uStack_114 = *(undefined4 *)(unaff_EBP + -0x10);
        uStack_10c = *(undefined4 *)(unaff_EBP + -0xa4);
        uStack_108 = *(undefined4 *)(unaff_EBP + -0xa0);
        iStack_104 = *(int *)(unaff_EBP + -0x9c);
        *(undefined1 **)(unaff_EBP + -0x20) = auStack_118;
        *(undefined1 *)(unaff_EBP + -4) = 0x1e;
        puStack_100 = *(undefined1 **)(unaff_EBP + -0x98);
        pcStack_ec = (char *)uVar9;
        FUN_00450368(unaff_EBP + -0x2c);
        uVar9 = *(undefined4 *)(unaff_EBP + -0x1c);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        uVar13 = *(undefined4 *)(unaff_EBP + -0x18);
        uVar11 = *(undefined4 *)(unaff_EBP + -0x24);
        uVar12 = *(undefined4 *)(unaff_EBP + 8);
        FUN_004e21db(uVar12,uVar11,uVar13,uVar9);
        FUN_0056777d(uVar12,uVar11,uVar13,uVar9);
        pcStack_ec = (char *)0x0;
        puStack_f0 = (undefined1 *)0x9;
        uStack_f4 = 0x5676ce;
        FUN_0060142b();
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        pcStack_ec = (char *)0x5676dc;
        FUN_00457cda();
        pcStack_ec = (char *)0x5676e6;
        FUN_00457cda();
        pcStack_ec = (char *)0x5676f1;
        FUN_00457d37();
        *(undefined1 **)(unaff_EBP + 8) = &stack0xffffff18;
        pcStack_ec = (char *)0xffffffff;
        puStack_f0 = &DAT_00978474;
        uStack_f4 = 0x567705;
        FUN_00414edd();
        pcStack_ec = (char *)0x56770d;
        FUN_00459cb5();
        pcStack_ec = (char *)0x56771c;
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        FUN_0045ebca();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      if (3 < bVar1) {
        pcStack_ec = (char *)0xf;
LAB_0056772f:
        puStack_f0 = (undefined1 *)0x567734;
        FUN_0057a546();
        goto LAB_00567736;
      }
      pcStack_ec = (char *)0x1f;
      puStack_f0 = (undefined1 *)0x56745a;
      iVar7 = FUN_00579f8f();
      if ((iVar7 == 0) || (*(int *)(*(int *)(unaff_EBP + -0x14) + 0x13c) != 0)) goto LAB_00567736;
      pcStack_ec = (char *)(unaff_EBP + -0x28);
      puStack_f0 = (undefined1 *)0x567480;
      puVar6 = (undefined4 *)FUN_00679d22();
      pcStack_ec = (char *)*puVar6;
      *(undefined4 *)(unaff_EBP + -4) = 0x18;
      puStack_f0 = (undefined1 *)0x567490;
      FUN_007d299b();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
  }
  else {
LAB_0056726e:
    if (uVar4 == 0x1b) {
      pcStack_ec = (char *)0x0;
      puStack_f0 = (undefined1 *)0x0;
      uStack_f4 = 0;
      puStack_100 = (undefined1 *)&puStack_f8;
      *(undefined4 ***)(unaff_EBP + 8) = &puStack_f8;
      iStack_fc = 0x11d3;
      iStack_104 = 0x56728e;
      puStack_f8 = puVar6;
      FUN_00679d22();
      iStack_fc = 0x567293;
      iVar7 = FUN_007db791();
      if (iVar7 == 6) {
        pcStack_ec = (char *)(unaff_EBP + 8);
        puStack_f0 = (undefined1 *)0x5672a8;
        puVar6 = (undefined4 *)FUN_00679d22();
        pcStack_ec = (char *)*puVar6;
        *(undefined4 *)(unaff_EBP + -4) = 0x14;
        puStack_f0 = (undefined1 *)0x5672b8;
        FUN_007d299b();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -0x28) = 0x2200000a;
        *(undefined4 *)(unaff_EBP + 8) = 0x2200000a;
        pcStack_ec = (char *)(unaff_EBP + 8);
        *(undefined4 *)(unaff_EBP + -4) = 0x15;
                    /* WARNING: Subroutine does not return */
        puStack_f0 = (undefined1 *)0x5672e6;
        __CxxThrowException_8();
      }
      pcStack_ec = (char *)0x0;
      puStack_f0 = (undefined1 *)0x0;
      uStack_f4 = 0;
      puStack_100 = (undefined1 *)&puStack_f8;
      *(undefined4 ***)(unaff_EBP + 8) = &puStack_f8;
      iStack_fc = 0x11c5;
      iStack_104 = 0x5672fd;
      FUN_00679d22();
      iStack_fc = 0x567302;
      FUN_007db3ad();
      goto LAB_00567736;
    }
    if ((int)uVar4 < 0xc) {
      if (uVar4 == 0xb) {
        pcStack_ec = (char *)0xe;
        goto LAB_0056772f;
      }
      goto LAB_00567311;
    }
    if (uVar4 == 0xd) {
      pcStack_ec = (char *)0x15;
      goto LAB_00567424;
    }
    if (uVar4 != 0xe) {
      if (uVar4 == 0xf) {
        pcStack_ec = (char *)0x5673aa;
        iVar7 = FUN_0057a1a7();
        if (iVar7 == 0) goto LAB_00567736;
        pcStack_ec = (char *)(unaff_EBP + -0x24);
        puStack_f0 = (undefined1 *)0x5673c3;
        puVar6 = (undefined4 *)FUN_00679d22();
        pcStack_ec = (char *)*puVar6;
        *(undefined4 *)(unaff_EBP + -4) = 0x17;
        puStack_f0 = (undefined1 *)0x5673d3;
        FUN_007d299b();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        goto LAB_00567417;
      }
      if (uVar4 == 0x10) {
LAB_0056739b:
        pcStack_ec = (char *)0x21;
      }
      else {
        if (uVar4 != 0x11) {
          if (uVar4 == 0x15) goto LAB_0056739b;
          if (uVar4 == 0x19) {
            pcStack_ec = (char *)0x28;
            goto LAB_0056772f;
          }
          goto switchD_0056731d_caseD_0;
        }
        pcStack_ec = (char *)0x1b;
      }
      goto LAB_0056772f;
    }
    pcStack_ec = (char *)0x5673e5;
    iVar7 = FUN_0057a1a7();
    if (iVar7 == 0) goto LAB_00567736;
    pcStack_ec = (char *)(unaff_EBP + -0x18);
    puStack_f0 = (undefined1 *)0x5673fe;
    puVar6 = (undefined4 *)FUN_00679d22();
    pcStack_ec = (char *)*puVar6;
    *(undefined4 *)(unaff_EBP + -4) = 0x16;
    puStack_f0 = (undefined1 *)0x56740e;
    FUN_007d299b();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  }
LAB_00567417:
  FUN_00414ebb();
LAB_00567736:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


