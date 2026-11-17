/* FUN_00626c01 - 0x00626c01 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_00626c01(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  uint extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  int unaff_EBP;
  undefined1 *puVar9;
  undefined1 *local_1b4;
  int *piStack_1b0;
  undefined1 *puStack_1ac;
  uint uStack_1a8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x28) = extraout_ECX;
  uStack_1a8 = 0x626c29;
  iVar2 = FUN_00455c59();
  *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(iVar2 + 4);
  FUN_0045e4a2();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  switch(*(undefined4 *)(unaff_EBP + 8)) {
  case 1:
    uStack_1a8 = unaff_EBP - 0x9c;
    puStack_1ac = (undefined1 *)0x626c7d;
    puVar5 = (undefined4 *)FUN_00679d86();
    uStack_1a8 = (uint)*(ushort *)(*(int *)(unaff_EBP + -0x28) + 0xc);
    puStack_1ac = (undefined1 *)*puVar5;
    piStack_1b0 = (int *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    local_1b4 = (undefined1 *)0x626c96;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + -0x9c) != 0) {
      uStack_1a8 = 0x626cb0;
      FUN_00403384();
    }
    uStack_1a8 = 0x626cbd;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    uStack_1a8 = 0x626ccd;
    FUN_00403191();
    uStack_1a8 = 0;
    puStack_1ac = (undefined1 *)(unaff_EBP + -0x110);
    piStack_1b0 = (int *)(unaff_EBP + -0x120);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    local_1b4 = (undefined1 *)0x626ce9;
    uVar6 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x2c) = &local_1b4;
    local_1b4 = extraout_ECX_01;
    FUN_004033a1(uVar6);
    iVar2 = unaff_EBP + -0x1a0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00405a1d(iVar2);
    FUN_00402660();
    FUN_00404a02(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    puStack_1ac = (undefined1 *)0x626d1e;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0xa0) = iVar2;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if (iVar2 != 0) {
      uStack_1a8 = 0x626d3a;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        uStack_1a8 = 0x626d4b;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    uStack_1a8 = 0x626d5b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_1a8 = 0x626d66;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_1a8 = 0x626d76;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_1a8 = 0x626d81;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    uStack_1a8 = 0x626d91;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_1a8 = 0x626d9c;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + 8) == 0) {
      uStack_1a8 = unaff_EBP - 0x88;
      puStack_1ac = (undefined1 *)0x626db4;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      uStack_1a8 = 0x626dc1;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + -0x88) != 0) {
        uStack_1a8 = 0x626ddc;
        FUN_00403384();
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + -0x40) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      while( true ) {
        if (*(int *)(unaff_EBP + 8) == 0) {
          uStack_1a8 = 0x626dfb;
          FUN_00878dfb();
        }
        uVar8 = FUN_0040cf4d();
        if (uVar8 <= *(uint *)(unaff_EBP + -0x1c)) break;
        FUN_0087a1b0();
        uStack_1a8 = 0;
        piStack_1b0 = *(int **)(unaff_EBP + -0x1c);
        local_1b4 = (undefined1 *)0x626e21;
        puStack_1ac = &stack0xfffffe60;
        piStack_1b0 = (int *)FUN_00412335();
        *(undefined1 ***)(unaff_EBP + -0x20) = &puStack_1ac;
        local_1b4 = (undefined1 *)0x626e2d;
        FUN_004033a1();
        piStack_1b0 = (int *)(unaff_EBP + -0x150);
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        local_1b4 = (undefined1 *)0x626e40;
        FUN_0040263d();
        local_1b4 = (undefined1 *)0x626e47;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_1ac = (undefined1 *)0x626e52;
        iVar2 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x8c) = iVar2;
        *(undefined4 *)(unaff_EBP + -0x48) = 0;
        if (iVar2 != 0) {
          uStack_1a8 = 0x626e6e;
          iVar2 = FUN_00404b30();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            uStack_1a8 = 0x626e7f;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        uStack_1a8 = 0x626e8f;
        uVar8 = unaff_EBP - 0x150;
        iVar2 = FUN_00402bc3();
        uStack_1a8 = uVar8;
        if (iVar2 < 0) {
          uStack_1a8 = 0x626e9a;
          FUN_00878dfb();
          uStack_1a8 = extraout_ECX_02;
        }
        piStack_1b0 = (int *)&uStack_1a8;
        *(uint **)(unaff_EBP + -0x20) = &uStack_1a8;
        puStack_1ac = (undefined1 *)0x920;
        local_1b4 = (undefined1 *)0x626eae;
        FUN_00679e4e();
        puStack_1ac = (undefined1 *)(unaff_EBP + -0x170);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_1b0 = (int *)0x626ec1;
        FUN_0040263d();
        piStack_1b0 = (int *)0x626ec8;
        uStack_1a8 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_1ac = (undefined1 *)0x626ed2;
        iVar2 = FUN_00412550();
        puStack_1ac = (undefined1 *)(unaff_EBP + -0x170);
        *(int *)(unaff_EBP + -0x6c) = iVar2;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_1b0 = (int *)0x626ee7;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_1a8 = 0x626ef4;
          FUN_00878dfb();
        }
        piStack_1b0 = (int *)&uStack_1a8;
        *(uint **)(unaff_EBP + -0x20) = &uStack_1a8;
        puStack_1ac = (undefined1 *)0x3cf;
        local_1b4 = (undefined1 *)0x626f08;
        FUN_00679e4e();
        puStack_1ac = (undefined1 *)(unaff_EBP + -400);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_1b0 = (int *)0x626f1b;
        FUN_0040263d();
        piStack_1b0 = (int *)0x626f22;
        uStack_1a8 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        puStack_1ac = (undefined1 *)0x626f2c;
        uVar6 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x68) = uVar6;
        puStack_1ac = (undefined1 *)(unaff_EBP + -400);
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        piStack_1b0 = (int *)0x626f3f;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          uStack_1a8 = 0x626f4c;
          FUN_00878dfb();
        }
        if (0 < *(int *)(unaff_EBP + -0x68)) {
          uStack_1a8 = 0x626f61;
          iVar3 = FUN_0055443a();
          if (iVar3 != 0) {
            *(undefined4 *)(unaff_EBP + -0x44) = 0;
            *(undefined4 *)(unaff_EBP + -0x4c) = 1;
            *(int *)(unaff_EBP + -0x20) = iVar2 / 1000000;
            *(int *)(unaff_EBP + -0x94) =
                 *(int *)(unaff_EBP + -0x34) + 0x3e3 + (iVar2 / 1000000) * 4;
            while( true ) {
              if (**(int **)(unaff_EBP + -0x94) == 0) {
                iVar3 = 0;
              }
              else {
                iVar3 = *(int *)(**(int **)(unaff_EBP + -0x94) + -4);
              }
              if (iVar3 + -1 < *(int *)(unaff_EBP + -0x4c)) break;
              uStack_1a8 = *(uint *)(unaff_EBP + -0x20);
              puStack_1ac = (undefined1 *)(unaff_EBP + -0xc0);
              piStack_1b0 = (int *)0x626fbe;
              iVar2 = FUN_00458c4f();
              piVar4 = *(int **)(iVar2 + 4);
              FUN_0046575e();
              if ((piVar4 != (int *)0x0) &&
                 (iVar2 = FUN_0045e2eb(), iVar2 == *(int *)(unaff_EBP + -0x6c))) {
                iVar2 = (**(code **)(*piVar4 + 0x18))();
                *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + iVar2;
              }
              *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + 1;
              iVar2 = *(int *)(unaff_EBP + -0x6c);
            }
            uStack_1a8 = 0x626ffb;
            iVar3 = FUN_0054e7b3();
            if (iVar3 != 0) {
              uStack_1a8 = unaff_EBP - 0x2c;
              puStack_1ac = (undefined1 *)(uint)*(byte *)(*(int *)(unaff_EBP + -0x34) + 0x11);
              local_1b4 = (undefined1 *)0x627012;
              piStack_1b0 = (int *)iVar2;
              FUN_0044da62();
              uStack_1a8 = 1;
              puStack_1ac = (undefined1 *)(unaff_EBP + -0xe0);
              piStack_1b0 = (int *)0x62702c;
              FUN_00458c4f();
              *(undefined1 *)(unaff_EBP + -4) = 0x16;
              if ((*(int *)(unaff_EBP + -0xdc) != 0) && (iVar3 = FUN_0045e2eb(), iVar3 == iVar2)) {
                *(int *)(unaff_EBP + -0x44) = *(int *)(unaff_EBP + -0x44) + 1;
              }
              *(undefined1 *)(unaff_EBP + -4) = 0x11;
              FUN_0046575e();
            }
            if (*(int *)(unaff_EBP + -0x68) != *(int *)(unaff_EBP + -0x44) &&
                -1 < *(int *)(unaff_EBP + -0x68) - *(int *)(unaff_EBP + -0x44)) {
              uStack_1a8 = 0x62706c;
              piVar4 = (int *)FUN_0045f1e3();
              *piVar4 = iVar2;
            }
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_004027eb();
        *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 1;
      }
      if ((*(int *)(unaff_EBP + -0x40) != 0) && (*(int *)(*(int *)(unaff_EBP + -0x40) + -4) != 0)) {
        uStack_1a8 = unaff_EBP - 0x80;
        puStack_1ac = (undefined1 *)0x627350;
        puVar7 = (uint *)FUN_00679d86();
        uStack_1a8 = *puVar7;
        puStack_1ac = (undefined1 *)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        piStack_1b0 = (int *)0x627368;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int *)(unaff_EBP + -0x80) != 0) {
          uStack_1a8 = 0x62737f;
          FUN_00403384();
        }
        uStack_1a8 = 0x62738c;
        FUN_00403191();
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        uStack_1a8 = 0x62739c;
        FUN_00403191();
        uStack_1a8 = 0;
        puStack_1ac = (undefined1 *)(unaff_EBP + -0x130);
        piStack_1b0 = (int *)(unaff_EBP + -0x140);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        local_1b4 = (undefined1 *)0x6273b8;
        uVar6 = FUN_00411641();
        *(undefined1 ***)(unaff_EBP + -0x2c) = &local_1b4;
        local_1b4 = extraout_ECX_04;
        FUN_004033a1(uVar6);
        iVar2 = unaff_EBP + -0x160;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        FUN_00405a1d(iVar2);
        FUN_00402660();
        FUN_00404a02(iVar2);
        *(undefined1 *)(unaff_EBP + -4) = 0x1c;
        puStack_1ac = (undefined1 *)0x6273ed;
        uVar6 = FUN_004032b4();
        *(undefined4 *)(unaff_EBP + -0x98) = uVar6;
        uStack_1a8 = 0x627402;
        iVar2 = FUN_00404b30();
        if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
          uStack_1a8 = 0x627413;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        uStack_1a8 = 0x627423;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          uStack_1a8 = 0x62742e;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        uStack_1a8 = 0x62743e;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          uStack_1a8 = 0x627449;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        uStack_1a8 = 0x627459;
        iVar2 = FUN_00402bc3();
        if (iVar2 < 0) {
          uStack_1a8 = 0x627464;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          uStack_1a8 = unaff_EBP - 0x74;
          puStack_1ac = (undefined1 *)0x62747d;
          FUN_00679d86();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          uStack_1a8 = 0x62748a;
          FUN_00419192();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if (*(int *)(unaff_EBP + -0x74) != 0) {
            uStack_1a8 = 0x62749e;
            FUN_00403384();
          }
          uStack_1a8 = unaff_EBP - 0xa8;
          puStack_1ac = (undefined1 *)0x6274b2;
          puVar5 = (undefined4 *)FUN_00679d86();
          uStack_1a8 = (uint)*(ushort *)(*(int *)(unaff_EBP + -0x28) + 0xc);
          puStack_1ac = (undefined1 *)*puVar5;
          piStack_1b0 = (int *)(unaff_EBP + -0x18);
          *(undefined1 *)(unaff_EBP + -4) = 0x1e;
          local_1b4 = (undefined1 *)0x6274cd;
          FUN_0041354c();
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          if (*(int *)(unaff_EBP + -0xa8) != 0) {
            uStack_1a8 = 0x6274e7;
            FUN_00403384();
          }
          uStack_1a8 = 0x6274f4;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          uStack_1a8 = 0x627504;
          FUN_00403191();
          uStack_1a8 = 0;
          puStack_1ac = (undefined1 *)(unaff_EBP + -0xf0);
          piStack_1b0 = (int *)(unaff_EBP + -0x100);
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          local_1b4 = (undefined1 *)0x627520;
          uVar6 = FUN_00411641();
          *(undefined1 ***)(unaff_EBP + -0x2c) = &local_1b4;
          local_1b4 = extraout_ECX_05;
          FUN_004033a1(uVar6);
          iVar2 = unaff_EBP + -0x180;
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          FUN_00405a1d(iVar2);
          FUN_00402660();
          FUN_00404a02(iVar2);
          *(undefined1 *)(unaff_EBP + -4) = 0x22;
          puStack_1ac = (undefined1 *)0x627555;
          uVar6 = FUN_004032b4();
          *(undefined4 *)(unaff_EBP + -0x90) = uVar6;
          uStack_1a8 = 0x62756a;
          iVar2 = FUN_00404b30();
          if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
            uStack_1a8 = 0x62757b;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x20;
          uStack_1a8 = 0x62758b;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            uStack_1a8 = 0x627596;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          uStack_1a8 = 0x6275a6;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            uStack_1a8 = 0x6275b1;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          uStack_1a8 = 0x6275c1;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            uStack_1a8 = 0x6275cc;
            FUN_00878dfb();
          }
        }
        *(undefined4 *)(unaff_EBP + -0x3c) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        uStack_1a8 = 0x6275dc;
        cVar1 = FUN_00411581();
        if (cVar1 == '\0') {
          if (*(int *)(unaff_EBP + -0x14) == 0) {
            uStack_1a8 = 0x6275f3;
            FUN_00878dfb();
          }
          uStack_1a8 = 0x6275ff;
          FUN_00404960();
          *(undefined1 *)(unaff_EBP + -4) = 0x24;
          uStack_1a8 = 0x62760c;
          FUN_004035f5();
          FUN_004027b3();
          uStack_1a8 = 0x627621;
          VariantInit((VARIANTARG *)(unaff_EBP + -0xb8));
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          *(undefined4 *)(unaff_EBP + -0x2c) = 0;
          while( true ) {
            if (*(int *)(unaff_EBP + -0x34) == 0) {
              uStack_1a8 = 0x627637;
              FUN_00878dfb();
            }
            piStack_1b0 = *(int **)(unaff_EBP + -0x34);
            uStack_1a8 = unaff_EBP - 0xb8;
            puStack_1ac = (undefined1 *)0x1;
            local_1b4 = (undefined1 *)0x62764d;
            iVar2 = (**(code **)(*piStack_1b0 + 0xc))();
            if (iVar2 != 0) break;
            *(uint **)(unaff_EBP + -0x20) = &uStack_1a8;
            puStack_1ac = *(undefined1 **)(unaff_EBP + -0xb0);
            piStack_1b0 = (int *)0x62766b;
            FUN_004033a1();
            puStack_1ac = (undefined1 *)(unaff_EBP + -0xd8);
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            piStack_1b0 = (int *)0x62767e;
            FUN_0040263d();
            piStack_1b0 = (int *)0x627685;
            uStack_1a8 = FUN_004048a4();
            *(undefined1 *)(unaff_EBP + -4) = 0x29;
            puStack_1ac = (undefined1 *)0x62768f;
            uStack_1a8 = FUN_004343c5();
            *(undefined4 *)(unaff_EBP + -0x1c) = 0;
            puStack_1ac = (undefined1 *)0x62769f;
            FUN_00454081();
            *(undefined1 *)(unaff_EBP + -4) = 0x2b;
            uStack_1a8 = 0x6276af;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              uStack_1a8 = 0x6276ba;
              FUN_00878dfb();
            }
            if ((*(char **)(unaff_EBP + -0x1c) != (char *)0x0) &&
               (**(char **)(unaff_EBP + -0x1c) != '\0')) {
              uStack_1a8 = 0xffffffff;
              puStack_1ac = (undefined1 *)0x6276d3;
              FUN_004655d4();
              uStack_1a8 = 0x6276da;
              FUN_00414f8b();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x27;
            FUN_00414ebb();
            uStack_1a8 = 0x6276f2;
            iVar2 = FUN_00402bc3();
            if (iVar2 < 0) {
              uStack_1a8 = 0x627701;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x26;
          uStack_1a8 = 0x627716;
          iVar2 = FUN_00402bc3();
          if (iVar2 < 0) {
            uStack_1a8 = 0x627721;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          if (*(int **)(unaff_EBP + -0x34) != (int *)0x0) {
            uStack_1a8 = 0x627732;
            (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
          }
        }
        else {
          uStack_1a8 = 0x62773f;
          FUN_005f3a71();
          uStack_1a8 = 0xffffffff;
          puStack_1ac = (undefined1 *)0x627750;
          FUN_004655d4();
          uStack_1a8 = 0x627757;
          FUN_00414f8b();
        }
        iVar2 = *(int *)(unaff_EBP + -0x28);
        puVar9 = (undefined1 *)0x0;
        do {
          if ((*(int *)(unaff_EBP + -0x3c) == 0) ||
             (*(undefined1 **)(*(int *)(unaff_EBP + -0x3c) + -4) <= puVar9)) break;
          uStack_1a8 = 0x62777f;
          iVar3 = FUN_004029b9();
          *(int *)(unaff_EBP + -0x2c) = iVar3;
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_007e62e9();
          }
          uVar8 = -(uint)(iVar3 != 0) & iVar3 + 8U;
          *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar8 != 0) & uVar8 - 8;
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          FUN_004c26c4();
          uStack_1a8 = 0;
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          piStack_1b0 = (int *)0x6277c7;
          puStack_1ac = puVar9;
          piStack_1b0 = (int *)FUN_004726fc();
          *(undefined1 ***)(unaff_EBP + -0x2c) = &puStack_1ac;
          local_1b4 = (undefined1 *)0x6277d3;
          FUN_00450368();
          piStack_1b0 = *(int **)(iVar2 + 0x10);
          local_1b4 = (undefined1 *)0x0;
          *(undefined1 *)(unaff_EBP + -4) = 0x2d;
          FUN_004c2677();
          FUN_007eddac();
          uStack_1a8 = (uint)(0 < (int)puVar9);
          puStack_1ac = (undefined1 *)0x627810;
          FUN_007edf11();
          FUN_007e6e3c();
          iVar3 = FUN_004bc6a2();
          if (iVar3 == 0x2000) {
            puVar9 = puVar9 + -1;
          }
          else {
            if (iVar3 != 0x2001) {
              *(undefined1 *)(unaff_EBP + -4) = 0x23;
              FUN_004c26e1();
              goto LAB_0062784f;
            }
            puVar9 = puVar9 + 1;
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          FUN_004c26e1();
        } while (-1 < (int)puVar9);
        uStack_1a8 = 0;
        puStack_1ac = (undefined1 *)0x62;
        piStack_1b0 = (int *)0x62788d;
        FUN_0060142b();
        *(undefined1 *)(unaff_EBP + -4) = 0x2f;
        uStack_1a8 = 0x62789a;
        FUN_00457cda();
        uStack_1a8 = 0x6278a9;
        FUN_0045d247();
        uStack_1a8 = 0x6278c0;
        FUN_00457d37();
        uStack_1a8 = *(uint *)(unaff_EBP + -0x40);
        puStack_1ac = (undefined1 *)0x6278db;
        FUN_00457fa0();
        uStack_1a8 = 0x6278ea;
        FUN_004751b2();
        *(undefined1 *)(unaff_EBP + -4) = 0x23;
        FUN_0045ebca();
LAB_0062784f:
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        FUN_0045f10c();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_00445a30();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          uStack_1a8 = 0x62787c;
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        goto LAB_00627bfd;
      }
      uStack_1a8 = unaff_EBP - 0xa4;
      puStack_1ac = (undefined1 *)0x6270aa;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 0x17;
      uStack_1a8 = 0x6270b7;
      FUN_00419192();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + -0xa4) != 0) {
        uStack_1a8 = 0x6270ce;
        FUN_00403384();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_00445a30();
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004027eb();
    goto switchD_00626c63_caseD_a;
  case 2:
    uStack_1a8 = unaff_EBP - 0x7c;
    puStack_1ac = (undefined1 *)0x62790b;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    uStack_1a8 = 0x627918;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    break;
  case 3:
    uStack_1a8 = unaff_EBP - 0x84;
    puStack_1ac = (undefined1 *)0x627937;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    uStack_1a8 = 0x627944;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    break;
  case 4:
    uStack_1a8 = unaff_EBP - 0x70;
    puStack_1ac = (undefined1 *)0x627960;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    uStack_1a8 = 0x62796d;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    break;
  case 5:
    uStack_1a8 = unaff_EBP - 100;
    puStack_1ac = (undefined1 *)0x627986;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x33;
    uStack_1a8 = 0x627993;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    break;
  case 6:
    uStack_1a8 = unaff_EBP - 0x50;
    puStack_1ac = (undefined1 *)0x6279ac;
    FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    uStack_1a8 = 0x6279b9;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    break;
  case 7:
    uStack_1a8 = 0x6279d9;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x35;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_007e62e9();
    }
    uVar8 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x20) = -(uint)(uVar8 != 0) & uVar8 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004c26c4();
    uStack_1a8 = 0;
    local_1b4 = (undefined1 *)&puStack_1ac;
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_1ac;
    piStack_1b0 = (int *)0xd27;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_00679d22();
    piStack_1b0 = *(int **)(*(int *)(unaff_EBP + -0x28) + 0x10);
    local_1b4 = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    FUN_004c2677();
    FUN_007eddac();
    uStack_1a8 = 0;
    puStack_1ac = (undefined1 *)0x627a52;
    FUN_007edf11();
    FUN_007e6e3c();
    FUN_004bc6a2();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004c26e1();
    goto LAB_00627bfd;
  case 8:
    *(undefined1 ***)(unaff_EBP + 8) = &local_1b4;
    uVar6 = 0xd6d;
    goto LAB_00627a82;
  case 9:
    *(undefined1 ***)(unaff_EBP + 8) = &local_1b4;
    uVar6 = 0xd6e;
LAB_00627a82:
    uStack_1a8 = 0;
    puStack_1ac = (undefined1 *)0x0;
    piStack_1b0 = (int *)0x0;
    local_1b4 = extraout_ECX_00;
    FUN_00679d22(&local_1b4,uVar6);
    FUN_007db3ad();
    goto LAB_00627bfd;
  default:
    goto switchD_00626c63_caseD_a;
  case 0xb:
    goto switchD_00626c63_caseD_b;
  }
  FUN_00402676();
switchD_00626c63_caseD_a:
  uStack_1a8 = unaff_EBP + 8;
  puStack_1ac = (undefined1 *)0x6270f7;
  puVar5 = (undefined4 *)FUN_00679d86();
  uStack_1a8 = (uint)*(ushort *)(*(int *)(unaff_EBP + -0x28) + 0xc);
  puStack_1ac = (undefined1 *)*puVar5;
  piStack_1b0 = (int *)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0x38;
  local_1b4 = (undefined1 *)0x627112;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  uStack_1a8 = 0x627130;
  VariantInit((VARIANTARG *)(unaff_EBP + -200));
  uStack_1a8 = unaff_EBP - 200;
  puStack_1ac = (undefined1 *)0x62713d;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    uStack_1a8 = 0x627149;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  uStack_1a8 = 0x627153;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  uStack_1a8 = unaff_EBP - 0x60;
  puStack_1ac = (undefined1 *)0x62715d;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    uStack_1a8 = 0x627169;
    FUN_00878dfb();
  }
  uStack_1a8 = 0;
  puStack_1ac = (undefined1 *)(unaff_EBP + -200);
  piStack_1b0 = (int *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  local_1b4 = (undefined1 *)0x627182;
  uVar6 = FUN_00411641();
  *(undefined1 ***)(unaff_EBP + -0x50) = &local_1b4;
  local_1b4 = extraout_ECX_03;
  FUN_004033a1(uVar6);
  iVar2 = unaff_EBP + -0xd8;
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  puStack_1ac = (undefined1 *)0x6271b7;
  uVar6 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 8) = uVar6;
  uStack_1a8 = 0x6271c6;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    uStack_1a8 = 0x6271d7;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3a;
  uStack_1a8 = 0x6271e7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_1a8 = 0x6271f2;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x39;
  uStack_1a8 = 0x6271ff;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_1a8 = 0x62720a;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uStack_1a8 = 0x62721a;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    uStack_1a8 = 0x627225;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    uStack_1a8 = 0x627ae1;
    FUN_005f3a71();
    uStack_1a8 = 0xffffffff;
    puStack_1ac = (undefined1 *)0x627af2;
    FUN_004655d4();
    uStack_1a8 = 0x627af9;
    FUN_00414f8b();
  }
  else {
    uStack_1a8 = 0x627240;
    FUN_00404960();
    *(undefined1 *)(unaff_EBP + -4) = 0x3e;
    uStack_1a8 = 0x62724d;
    FUN_004035f5();
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    if (*(int **)(unaff_EBP + -0x50) != (int *)0x0) {
      uStack_1a8 = 0x62725e;
      (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
    }
    uStack_1a8 = 0x627264;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
    *(undefined1 *)(unaff_EBP + -4) = 0x41;
    *(undefined4 *)(unaff_EBP + -100) = 0;
    while( true ) {
      if (*(int *)(unaff_EBP + -0x1c) == 0) {
        uStack_1a8 = 0x62727a;
        FUN_00878dfb();
      }
      piStack_1b0 = *(int **)(unaff_EBP + -0x1c);
      uStack_1a8 = unaff_EBP - 0x60;
      puStack_1ac = (undefined1 *)0x1;
      local_1b4 = (undefined1 *)0x62728d;
      iVar2 = (**(code **)(*piStack_1b0 + 0xc))();
      if (iVar2 != 0) break;
      *(uint **)(unaff_EBP + -0x70) = &uStack_1a8;
      puStack_1ac = *(undefined1 **)(unaff_EBP + -0x58);
      piStack_1b0 = (int *)0x6272a8;
      FUN_004033a1();
      puStack_1ac = (undefined1 *)(unaff_EBP + -0xd8);
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      piStack_1b0 = (int *)0x6272bb;
      FUN_0040263d();
      piStack_1b0 = (int *)0x6272c2;
      uStack_1a8 = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x43;
      puStack_1ac = (undefined1 *)0x6272cc;
      uStack_1a8 = FUN_004343c5();
      *(undefined4 *)(unaff_EBP + 8) = 0;
      puStack_1ac = (undefined1 *)0x6272dc;
      FUN_00454081();
      *(undefined1 *)(unaff_EBP + -4) = 0x45;
      uStack_1a8 = 0x6272ec;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        uStack_1a8 = 0x6272f7;
        FUN_00878dfb();
      }
      if ((*(char **)(unaff_EBP + 8) != (char *)0x0) && (**(char **)(unaff_EBP + 8) != '\0')) {
        uStack_1a8 = 0xffffffff;
        puStack_1ac = (undefined1 *)0x627310;
        FUN_004655d4();
        uStack_1a8 = 0x627317;
        FUN_00414f8b();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x41;
      FUN_00414ebb();
      uStack_1a8 = 0x62732c;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        uStack_1a8 = 0x62733b;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x40;
    uStack_1a8 = 0x627ab8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      uStack_1a8 = 0x627ac3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
      uStack_1a8 = 0x627ad4;
      (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
    }
  }
  puVar9 = (undefined1 *)0x0;
  do {
    if ((*(int *)(unaff_EBP + -0x38) == 0) ||
       (*(undefined1 **)(*(int *)(unaff_EBP + -0x38) + -4) <= puVar9)) break;
    uStack_1a8 = 0x627b1e;
    iVar2 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar2;
    *(undefined1 *)(unaff_EBP + -4) = 0x46;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_007e62e9();
    }
    uVar8 = -(uint)(iVar2 != 0) & iVar2 + 8U;
    *(uint *)(unaff_EBP + -0x2c) = -(uint)(uVar8 != 0) & uVar8 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_004c26c4();
    uStack_1a8 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    piStack_1b0 = (int *)0x627b66;
    puStack_1ac = puVar9;
    piStack_1b0 = (int *)FUN_004726fc();
    *(undefined1 ***)(unaff_EBP + 8) = &puStack_1ac;
    local_1b4 = (undefined1 *)0x627b72;
    FUN_00450368();
    piStack_1b0 = *(int **)(*(int *)(unaff_EBP + -0x28) + 0x10);
    local_1b4 = (undefined1 *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 0x47;
    FUN_004c2677();
    FUN_007eddac();
    uStack_1a8 = (uint)(0 < (int)puVar9);
    puStack_1ac = (undefined1 *)0x627bb2;
    FUN_007edf11();
    FUN_007e6e3c();
    iVar2 = FUN_004bc6a2();
    if (iVar2 == 0x2000) {
      puVar9 = puVar9 + -1;
    }
    else {
      if (iVar2 != 0x2001) {
        *(undefined1 *)(unaff_EBP + -4) = 0x3d;
        FUN_004c26e1();
        break;
      }
      puVar9 = puVar9 + 1;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x3d;
    FUN_004c26e1();
  } while (-1 < (int)puVar9);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_0045f10c();
LAB_00627bfd:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
    uStack_1a8 = 0x627c0e;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
switchD_00626c63_caseD_b:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


