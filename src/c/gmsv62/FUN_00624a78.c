/* FUN_00624a78 - 0x00624a78 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00624a78(void)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  int *extraout_ECX_05;
  int unaff_EBP;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  wchar_t *pwStack_128;
  int *piStack_124;
  int *piStack_120;
  
  FUN_00879bb8();
  piStack_120 = (int *)0x624a95;
  FUN_00627d48();
  piStack_120 = (int *)0x624a9d;
  FUN_00627d48();
  piStack_120 = (int *)0x624aa5;
  FUN_00627d48();
  *(int *)(unaff_EBP + -0x48) = extraout_ECX + 0x28;
  piStack_120 = (int *)0x624ab0;
  FUN_00627dda();
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  piStack_120 = (int *)0xc31;
  piStack_124 = (int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  pwStack_128 = (wchar_t *)0x624acb;
  puVar2 = (undefined4 *)FUN_00679d86();
  piStack_124 = (int *)(uint)*(ushort *)(extraout_ECX + 0xc);
  pwStack_128 = (wchar_t *)*puVar2;
  piStack_120 = (int *)0x1;
  puStack_12c = (undefined1 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_130 = 0x624ae2;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    piStack_120 = (int *)(*(int *)(unaff_EBP + -0x18) + -0xc);
    piStack_124 = (int *)0x624af8;
    FUN_00403384();
  }
  piStack_120 = &DAT_00980690;
  piStack_124 = (int *)0x624b0a;
  FUN_00403191();
  piStack_120 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  piStack_124 = (int *)0x624b1a;
  FUN_00403191();
  piStack_120 = (int *)0x0;
  piStack_124 = (int *)0x0;
  pwStack_128 = (wchar_t *)(unaff_EBP + -0xdc);
  puStack_12c = (undefined1 *)(unaff_EBP + -0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_130 = 0x624b36;
  uVar3 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_130;
  uStack_130 = extraout_ECX_00;
  FUN_004033a1(uVar3);
  iVar4 = unaff_EBP + -0xec;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  pwStack_128 = (wchar_t *)0x624b6b;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x44) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (iVar4 != 0) {
    piStack_120 = (int *)(unaff_EBP + -0x44);
    piStack_124 = (int *)0x624b81;
    piStack_120 = (int *)FUN_00404b30();
    if (((int)piStack_120 < 0) && (piStack_120 != (int *)0x80004002)) {
      piStack_124 = (int *)0x624b92;
      FUN_00878dfb();
    }
  }
  piStack_120 = (int *)(unaff_EBP + -0xec);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_124 = (int *)0x624ba2;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    piStack_124 = (int *)0x624bad;
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0xcc);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_124 = (int *)0x624bbd;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    piStack_124 = (int *)0x624bc8;
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0xdc);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_124 = (int *)0x624bd8;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    piStack_124 = (int *)0x624be3;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x2c) == 0) {
        piStack_120 = (int *)0x80004003;
        piStack_124 = (int *)0x624bfe;
        FUN_00878dfb();
      }
      piStack_120 = (int *)0x624c06;
      uVar5 = FUN_0040cf4d();
      if (uVar5 <= *(uint *)(unaff_EBP + -0x14)) break;
      piStack_120 = (int *)0x624c17;
      FUN_0087a1b0();
      piStack_120 = (int *)0x0;
      piStack_124 = (int *)0x0;
      puStack_12c = *(undefined1 **)(unaff_EBP + -0x14);
      uStack_130 = 0x624c24;
      pwStack_128 = (wchar_t *)&stack0xfffffee4;
      puStack_12c = (undefined1 *)FUN_00412335();
      *(wchar_t ***)(unaff_EBP + -0x20) = &pwStack_128;
      uStack_130 = 0x624c30;
      FUN_004033a1();
      puStack_12c = (undefined1 *)(unaff_EBP + -0x7c);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      uStack_130 = 0x624c40;
      FUN_0040263d();
      uStack_130 = 0x624c47;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      pwStack_128 = (wchar_t *)0x624c52;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x34) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar4 != 0) {
        piStack_120 = (int *)(unaff_EBP + -0x34);
        piStack_124 = (int *)0x624c68;
        piStack_120 = (int *)FUN_00404b30();
        if (((int)piStack_120 < 0) && (piStack_120 != (int *)0x80004002)) {
          piStack_124 = (int *)0x624c79;
          FUN_00878dfb();
        }
      }
      piStack_120 = (int *)(unaff_EBP + -0x7c);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      piStack_124 = (int *)0x624c86;
      piStack_120 = (int *)FUN_00402bc3();
      if ((int)piStack_120 < 0) {
        piStack_124 = (int *)0x624c91;
        FUN_00878dfb();
      }
      piStack_120 = (int *)(unaff_EBP + -0x40);
      piStack_124 = (int *)0x624ca0;
      iVar4 = FUN_00455c59();
      piStack_120 = *(int **)(*(int *)(iVar4 + 4) + 0x3d);
      piStack_124 = (int *)(*(int *)(iVar4 + 4) + 0x39);
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      pwStack_128 = 
      L"ཙ삿橙饤\xf759跹쁍䗆෼䖉\xe8e8韕￣䶋櫨弁\xe7d3崹࿰㾄\x02樀儿쒋斉棠ళ"
      ;
      sVar1 = FUN_0045f084();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      *(int *)(unaff_EBP + -0x18) = (int)sVar1 / 100;
      piStack_120 = (int *)0x624ccd;
      FUN_0045e4a2();
      piVar7 = *(int **)(unaff_EBP + -0x18);
      if (*(int *)(unaff_EBP + -0x10) == 0) {
LAB_00624f1d:
        *(undefined1 *)(unaff_EBP + -4) = 7;
        piStack_120 = (int *)0x624f29;
        FUN_004027eb();
      }
      else {
        piStack_120 = (int *)0x3f;
        puStack_12c = (undefined1 *)&piStack_124;
        *(int ***)(unaff_EBP + -0x20) = &piStack_124;
        pwStack_128 = (wchar_t *)0xc33;
        uStack_130 = 0x624cf6;
        piStack_124 = piVar7;
        FUN_00679e4e();
        pwStack_128 = (wchar_t *)(unaff_EBP + -0x6c);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_12c = (undefined1 *)0x624d06;
        FUN_0040263d();
        puStack_12c = (undefined1 *)0x624d0d;
        piStack_124 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        pwStack_128 = (wchar_t *)0x624d17;
        uVar5 = FUN_00412550();
        if (((1 << ((byte)piVar7 & 0x1f) & 0xffffU & uVar5) != 0) ||
           (*(undefined1 *)(unaff_EBP + -0x19) = 1, *(int *)(unaff_EBP + -0x18) == 9)) {
          *(undefined1 *)(unaff_EBP + -0x19) = 0;
        }
        piStack_120 = (int *)(unaff_EBP + -0x6c);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        piStack_124 = (int *)0x624d41;
        piVar6 = (int *)FUN_00402bc3();
        piVar7 = piStack_120;
        if ((int)piVar6 < 0) {
          piStack_124 = (int *)0x624d4c;
          piStack_120 = piVar6;
          FUN_00878dfb();
          piVar7 = extraout_ECX_01;
        }
        if (*(char *)(unaff_EBP + -0x19) != '\0') goto LAB_00624f1d;
        piStack_120 = (int *)0x2;
        puStack_12c = (undefined1 *)&piStack_124;
        *(int ***)(unaff_EBP + -0x20) = &piStack_124;
        pwStack_128 = (wchar_t *)0xc50;
        uStack_130 = 0x624d6f;
        piStack_124 = piVar7;
        FUN_00679e4e();
        pwStack_128 = (wchar_t *)(unaff_EBP + -0xbc);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_12c = (undefined1 *)0x624d82;
        FUN_0040263d();
        puStack_12c = (undefined1 *)0x624d89;
        piStack_124 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        pwStack_128 = (wchar_t *)0x624d93;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar3;
        pwStack_128 = (wchar_t *)(unaff_EBP + -0xbc);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_12c = (undefined1 *)0x624da6;
        piStack_120 = (int *)FUN_00402bc3();
        piVar7 = extraout_ECX_02;
        if ((int)piStack_120 < 0) {
          piStack_124 = (int *)0x624db3;
          FUN_00878dfb();
          piVar7 = extraout_ECX_03;
        }
        if ((*(int *)(unaff_EBP + -0x18) != 2) &&
           (piVar7 = DAT_00978368, *(int *)(unaff_EBP + -0x18) != DAT_00978368[0x80b]))
        goto LAB_00624f1d;
        piStack_120 = (int *)0x0;
        puStack_12c = (undefined1 *)&piStack_124;
        *(int ***)(unaff_EBP + -0x20) = &piStack_124;
        pwStack_128 = (wchar_t *)0x920;
        uStack_130 = 0x624de1;
        piStack_124 = piVar7;
        FUN_00679e4e();
        pwStack_128 = (wchar_t *)(unaff_EBP + -0xac);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_12c = (undefined1 *)0x624df4;
        FUN_0040263d();
        puStack_12c = (undefined1 *)0x624dfb;
        piStack_124 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x14;
        pwStack_128 = (wchar_t *)0x624e05;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar3;
        pwStack_128 = (wchar_t *)(unaff_EBP + -0xac);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_12c = (undefined1 *)0x624e18;
        piStack_120 = (int *)FUN_00402bc3();
        if ((int)piStack_120 < 0) {
          piStack_124 = (int *)0x624e25;
          FUN_00878dfb();
        }
        piStack_120 = (int *)0x0;
        puStack_12c = (undefined1 *)&piStack_124;
        *(int ***)(unaff_EBP + -0x20) = &piStack_124;
        pwStack_128 = (wchar_t *)0x3cf;
        uStack_130 = 0x624e39;
        FUN_00679e4e();
        pwStack_128 = (wchar_t *)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_12c = (undefined1 *)0x624e4c;
        FUN_0040263d();
        puStack_12c = (undefined1 *)0x624e53;
        piStack_124 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        pwStack_128 = (wchar_t *)0x624e5d;
        uVar3 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar3;
        pwStack_128 = (wchar_t *)(unaff_EBP + -0x8c);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        puStack_12c = (undefined1 *)0x624e70;
        piStack_120 = (int *)FUN_00402bc3();
        if ((int)piStack_120 < 0) {
          piStack_124 = (int *)0x624e7d;
          FUN_00878dfb();
        }
        if (0 < *(int *)(unaff_EBP + -0x24)) {
          piStack_120 = (int *)0x0;
          puStack_12c = (undefined1 *)&piStack_124;
          *(int ***)(unaff_EBP + -0x20) = &piStack_124;
          pwStack_128 = (wchar_t *)0x91f;
          uStack_130 = 0x624e9a;
          FUN_00679e4e();
          pwStack_128 = (wchar_t *)(unaff_EBP + -0x9c);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          puStack_12c = (undefined1 *)0x624ead;
          FUN_0040263d();
          puStack_12c = (undefined1 *)0x624eb4;
          piStack_124 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x18;
          pwStack_128 = (wchar_t *)0x624ebe;
          iVar4 = FUN_00412550();
          pwStack_128 = (wchar_t *)(unaff_EBP + -0x9c);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          puStack_12c = (undefined1 *)0x624ed0;
          piStack_120 = (int *)FUN_00402bc3();
          if ((int)piStack_120 < 0) {
            piStack_124 = (int *)0x624edd;
            FUN_00878dfb();
          }
          if (((iVar4 == 0) || (iVar4 < 0)) || (0 < iVar4)) {
            piStack_120 = (int *)0xffffffff;
            piStack_124 = (int *)0x624eff;
            puVar2 = (undefined4 *)FUN_00627d6a();
            *puVar2 = *(undefined4 *)(unaff_EBP + -0x28);
            puVar2[1] = *(undefined4 *)(unaff_EBP + -0x24);
          }
        }
        piStack_120 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 7;
        if (piStack_120 != (int *)0x0) {
          piStack_124 = (int *)0x624f1b;
          (**(code **)(*piStack_120 + 8))();
        }
      }
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
    }
  }
  piStack_120 = (int *)0xc32;
  piStack_124 = (int *)(unaff_EBP + -0x34);
  pwStack_128 = (wchar_t *)0x624f49;
  puVar2 = (undefined4 *)FUN_00679d86();
  piStack_124 = (int *)(uint)*(ushort *)(extraout_ECX + 0xc);
  pwStack_128 = (wchar_t *)*puVar2;
  piStack_120 = (int *)0x1;
  puStack_12c = (undefined1 *)(unaff_EBP + -0x38);
  *(undefined1 *)(unaff_EBP + -4) = 0x19;
  uStack_130 = 0x624f60;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_120 = (int *)0x624f6f;
  FUN_00402676();
  piStack_120 = &DAT_00980690;
  piStack_124 = (int *)0x624f78;
  FUN_00403191();
  piStack_120 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_124 = (int *)0x624f85;
  FUN_00403191();
  piStack_120 = (int *)0x0;
  piStack_124 = (int *)0x0;
  pwStack_128 = (wchar_t *)(unaff_EBP + -0x7c);
  puStack_12c = (undefined1 *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  uStack_130 = 0x624f9b;
  uVar3 = FUN_00411641();
  *(undefined4 **)(unaff_EBP + -0x20) = &uStack_130;
  uStack_130 = extraout_ECX_04;
  FUN_004033a1(uVar3);
  iVar4 = unaff_EBP + -0x9c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  pwStack_128 = (wchar_t *)0x624fd0;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x34) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar4 != 0) {
    piStack_120 = (int *)(unaff_EBP + -0x34);
    piStack_124 = (int *)0x624fe6;
    piStack_120 = (int *)FUN_00404b30();
    if (((int)piStack_120 < 0) && (piStack_120 != (int *)0x80004002)) {
      piStack_124 = (int *)0x624ff7;
      FUN_00878dfb();
    }
  }
  piStack_120 = (int *)(unaff_EBP + -0x9c);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  piStack_124 = (int *)0x625007;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    piStack_124 = (int *)0x625012;
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x6c);
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  piStack_124 = (int *)0x62501f;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    piStack_124 = (int *)0x62502a;
    FUN_00878dfb();
  }
  piStack_120 = (int *)(unaff_EBP + -0x7c);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_124 = (int *)0x625037;
  piStack_120 = (int *)FUN_00402bc3();
  if ((int)piStack_120 < 0) {
    piStack_124 = (int *)0x625042;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x30) == 0) {
        piStack_120 = (int *)0x80004003;
        piStack_124 = (int *)0x62505d;
        FUN_00878dfb();
      }
      piStack_120 = (int *)0x625065;
      uVar5 = FUN_0040cf4d();
      if (uVar5 <= *(uint *)(unaff_EBP + -0x18)) break;
      piStack_120 = (int *)0x625076;
      FUN_0087a1b0();
      piStack_120 = (int *)0x0;
      piStack_124 = (int *)0x0;
      puStack_12c = *(undefined1 **)(unaff_EBP + -0x18);
      uStack_130 = 0x625083;
      pwStack_128 = (wchar_t *)&stack0xfffffee4;
      puStack_12c = (undefined1 *)FUN_00412335();
      *(wchar_t ***)(unaff_EBP + -0x24) = &pwStack_128;
      uStack_130 = 0x62508f;
      FUN_004033a1();
      puStack_12c = (undefined1 *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      uStack_130 = 0x6250a2;
      FUN_0040263d();
      uStack_130 = 0x6250a9;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      pwStack_128 = (wchar_t *)0x6250b4;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x3c) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      if (iVar4 != 0) {
        piStack_120 = (int *)(unaff_EBP + -0x3c);
        piStack_124 = (int *)0x6250ca;
        piStack_120 = (int *)FUN_00404b30();
        if (((int)piStack_120 < 0) && (piStack_120 != (int *)0x80004002)) {
          piStack_124 = (int *)0x6250db;
          FUN_00878dfb();
        }
      }
      piStack_120 = (int *)(unaff_EBP + -0x8c);
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_124 = (int *)0x6250eb;
      piVar7 = (int *)FUN_00402bc3();
      piStack_124 = piStack_120;
      if ((int)piVar7 < 0) {
        piStack_124 = (int *)0x6250f6;
        piStack_120 = piVar7;
        FUN_00878dfb();
        piStack_124 = extraout_ECX_05;
      }
      *(undefined4 *)(unaff_EBP + -0x4c) = 0;
      piStack_120 = (int *)0x0;
      puStack_12c = (undefined1 *)&piStack_124;
      *(int ***)(unaff_EBP + -0x24) = &piStack_124;
      pwStack_128 = (wchar_t *)0x920;
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      uStack_130 = 0x625114;
      FUN_00679e4e();
      pwStack_128 = (wchar_t *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puStack_12c = (undefined1 *)0x625127;
      FUN_0040263d();
      puStack_12c = (undefined1 *)0x62512e;
      piStack_124 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      pwStack_128 = (wchar_t *)0x625138;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x5c) = uVar3;
      pwStack_128 = (wchar_t *)(unaff_EBP + -0xac);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puStack_12c = (undefined1 *)0x62514b;
      piStack_120 = (int *)FUN_00402bc3();
      if ((int)piStack_120 < 0) {
        piStack_124 = (int *)0x625158;
        FUN_00878dfb();
      }
      piStack_120 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_124;
      pwStack_128 = u_skillLevel_00968240;
      puStack_12c = (undefined1 *)0x625169;
      FUN_004033a1();
      pwStack_128 = (wchar_t *)(unaff_EBP + -0xbc);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puStack_12c = (undefined1 *)0x62517c;
      FUN_0040263d();
      puStack_12c = (undefined1 *)0x625183;
      piStack_124 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      pwStack_128 = (wchar_t *)0x62518d;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x58) = uVar3;
      pwStack_128 = (wchar_t *)(unaff_EBP + -0xbc);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puStack_12c = (undefined1 *)0x6251a0;
      piStack_120 = (int *)FUN_00402bc3();
      if ((int)piStack_120 < 0) {
        piStack_124 = (int *)0x6251ad;
        FUN_00878dfb();
      }
      piStack_120 = (int *)0x0;
      *(int ***)(unaff_EBP + -0x24) = &piStack_124;
      pwStack_128 = u_masterLevel_00968228;
      puStack_12c = (undefined1 *)0x6251be;
      FUN_004033a1();
      pwStack_128 = (wchar_t *)(unaff_EBP + -0x11c);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puStack_12c = (undefined1 *)0x6251d1;
      FUN_0040263d();
      puStack_12c = (undefined1 *)0x6251d8;
      piStack_124 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2c;
      pwStack_128 = (wchar_t *)0x6251e2;
      uVar3 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x54) = uVar3;
      pwStack_128 = (wchar_t *)(unaff_EBP + -0x11c);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      puStack_12c = (undefined1 *)0x6251f5;
      piStack_120 = (int *)FUN_00402bc3();
      if ((int)piStack_120 < 0) {
        piStack_124 = (int *)0x625202;
        FUN_00878dfb();
      }
      piStack_120 = (int *)0x0;
      piStack_124 = (int *)0x0;
      *(wchar_t ***)(unaff_EBP + -0x24) = &pwStack_128;
      puStack_12c = &DAT_009657d8;
      uStack_130 = 0x625214;
      FUN_004033a1();
      puStack_12c = (undefined1 *)(unaff_EBP + -0x10c);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      uStack_130 = 0x625227;
      FUN_0040263d();
      uStack_130 = 0x62522e;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x2e;
      pwStack_128 = (wchar_t *)0x625239;
      iVar4 = FUN_004032b4();
      *(int *)(unaff_EBP + -0x20) = iVar4;
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      if (iVar4 != 0) {
        piStack_120 = (int *)(unaff_EBP + -0x20);
        piStack_124 = (int *)0x62524f;
        piStack_120 = (int *)FUN_00404b30();
        if (((int)piStack_120 < 0) && (piStack_120 != (int *)0x80004002)) {
          piStack_124 = (int *)0x625260;
          FUN_00878dfb();
        }
      }
      piStack_120 = (int *)(unaff_EBP + -0x10c);
      *(undefined1 *)(unaff_EBP + -4) = 0x30;
      piStack_124 = (int *)0x625270;
      piStack_120 = (int *)FUN_00402bc3();
      if ((int)piStack_120 < 0) {
        piStack_124 = (int *)0x62527b;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        piVar7 = (int *)0x0;
        while( true ) {
          if (*(int *)(unaff_EBP + -0x10) == 0) {
            piStack_120 = (int *)0x80004003;
            piStack_124 = (int *)0x625295;
            FUN_00878dfb();
          }
          piStack_120 = (int *)0x62529d;
          piVar6 = (int *)FUN_0040cf4d();
          if (piVar6 <= piVar7) break;
          piStack_120 = (int *)0x6252a9;
          FUN_0087a1b0();
          pwStack_128 = (wchar_t *)0x6252b2;
          piStack_124 = piVar7;
          piStack_120 = (int *)&stack0xfffffee4;
          piStack_124 = (int *)FUN_00412335();
          *(int ***)(unaff_EBP + -0x24) = &piStack_120;
          pwStack_128 = (wchar_t *)0x6252c0;
          FUN_00402e8e();
          piStack_124 = (int *)(unaff_EBP + -0xfc);
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          pwStack_128 = (wchar_t *)0x6252d3;
          FUN_0040263d();
          pwStack_128 = (wchar_t *)0x6252da;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x32;
          piStack_120 = (int *)0x6252e5;
          uVar3 = FUN_00403213();
          piStack_120 = (int *)0xffffffff;
          piStack_124 = (int *)0x6252f1;
          puVar2 = (undefined4 *)FUN_0045f1e3();
          *puVar2 = uVar3;
          piStack_120 = (int *)(unaff_EBP + -0xfc);
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          piStack_124 = (int *)0x625303;
          piStack_120 = (int *)FUN_00402bc3();
          if ((int)piStack_120 < 0) {
            piStack_124 = (int *)0x62530e;
            FUN_00878dfb();
          }
          piVar7 = (int *)((int)piVar7 + 1);
        }
      }
      piStack_120 = (int *)(unaff_EBP + -0x5c);
      piStack_124 = (int *)0xffffffff;
      pwStack_128 = (wchar_t *)0x625322;
      FUN_00627e17();
      piStack_124 = (int *)0x625329;
      FUN_00627c78();
      piStack_120 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      if (piStack_120 != (int *)0x0) {
        piStack_124 = (int *)0x62533a;
        (**(code **)(*piStack_120 + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_120 = (int *)0x625346;
      FUN_00445a30();
      piStack_120 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      if (piStack_120 != (int *)0x0) {
        piStack_124 = (int *)0x625357;
        (**(code **)(*piStack_120 + 8))();
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 1;
    }
  }
  piStack_120 = *(int **)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (piStack_120 != (int *)0x0) {
    piStack_124 = (int *)0x625370;
    (**(code **)(*piStack_120 + 8))();
  }
  piStack_120 = *(int **)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_120 != (int *)0x0) {
    piStack_124 = (int *)0x625380;
    (**(code **)(*piStack_120 + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_120 = (int *)0x62538c;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


