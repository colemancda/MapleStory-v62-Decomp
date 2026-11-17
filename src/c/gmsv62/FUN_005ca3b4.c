/* FUN_005ca3b4 - 0x005ca3b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_005ca3b4(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 extraout_ECX;
  undefined1 *extraout_ECX_00;
  int *extraout_ECX_01;
  int *extraout_ECX_02;
  int *extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int unaff_EBP;
  undefined1 *puVar9;
  undefined4 uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  int iStack_168;
  undefined1 *puStack_164;
  undefined1 *puStack_160;
  int iStack_15c;
  int *piStack_158;
  IBinding *pIVar10;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(int **)(unaff_EBP + 0xc) == (int *)0x0) ||
     (iVar3 = **(int **)(unaff_EBP + 0xc), iVar3 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar3 + -4) >> 1;
  }
  if (uVar2 == 0) {
    piVar6 = *(int **)(unaff_EBP + 8);
    *piVar6 = 0;
  }
  else {
    piStack_158 = (int *)0x5ca40b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    piStack_158 = (int *)0x5ca41b;
    FUN_00403191();
    piStack_158 = (int *)0x0;
    iStack_15c = unaff_EBP + -0xb0;
    puStack_160 = (undefined1 *)(unaff_EBP + -0xa0);
    iStack_168 = unaff_EBP + 0xc;
    *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_164;
    uStack_16c = 0x5ca43a;
    puStack_164 = extraout_ECX_00;
    FUN_004059fd();
    iStack_168 = unaff_EBP + -0x120;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    uStack_16c = 0x5ca44a;
    FUN_00405a1d();
    uStack_16c = 0x5ca451;
    FUN_00402660();
    uStack_16c = 0x5ca458;
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_15c = 0x5ca463;
    iVar3 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x5c) = iVar3;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar3 != 0) {
      piStack_158 = (int *)0x5ca479;
      iVar3 = FUN_00404b30();
      if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
        piStack_158 = (int *)0x5ca48a;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_158 = (int *)0x5ca49a;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_158 = (int *)0x5ca4a5;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 8;
    piStack_158 = (int *)0x5ca4b5;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_158 = (int *)0x5ca4c0;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    piStack_158 = (int *)0x5ca4d0;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      piStack_158 = (int *)0x5ca4db;
      FUN_00878dfb();
    }
    if ((*(int *)(unaff_EBP + -0x10) != 0) && (iVar3 = FUN_0040cf4d(), iVar3 != 0)) {
      puVar9 = (undefined1 *)0x0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      piStack_158 = (int *)(unaff_EBP + -0x38);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar3 = 0;
      iStack_15c = 0x5ca50c;
      FUN_005c5b12();
      puStack_160 = (undefined1 *)&piStack_158;
      *(int ***)(unaff_EBP + -0x28) = &piStack_158;
      iStack_15c = 0xa4e;
      puStack_164 = (undefined1 *)0x5ca525;
      FUN_00679e4e();
      iStack_15c = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_160 = (undefined1 *)0x5ca535;
      FUN_0040263d();
      puStack_160 = (undefined1 *)0x5ca53c;
      piStack_158 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_15c = 0x5ca546;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
      iStack_15c = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_160 = (undefined1 *)0x5ca556;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_158 = (int *)0x5ca563;
        FUN_00878dfb();
      }
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      if (iVar5 == 1) {
LAB_005ca734:
        pIVar10 = *(IBinding **)(*(int *)(unaff_EBP + -0x18) + 0xec);
LAB_005ca73d:
        piStack_158 = (int *)0x5ca745;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),pIVar10);
        piStack_158 = extraout_ECX_03;
      }
      else {
        if (iVar5 == 2) {
          pIVar10 = *(IBinding **)(*(int *)(unaff_EBP + -0x18) + 0xf4);
          goto LAB_005ca73d;
        }
        if (iVar5 == 3) {
          piStack_158 = (int *)0x5ca6e2;
          iVar3 = (*DAT_0097b5a4)();
          if (iVar3 != 0) {
LAB_005ca6e6:
            piVar6 = *(int **)(unaff_EBP + 8);
            *piVar6 = 0;
            FUN_004125d9();
            goto LAB_005cb009;
          }
          piVar6 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
          piVar7 = (int *)(**(code **)(*piVar6 + 0x10))();
          iVar3 = (*(int *)(unaff_EBP + -0x38) + *(int *)(unaff_EBP + -0x30)) / 2 - *piVar7;
          iVar5 = (**(code **)(*piVar6 + 0x10))();
          puVar9 = (undefined1 *)
                   ((*(int *)(unaff_EBP + -0x34) + *(int *)(unaff_EBP + -0x2c)) / 2 -
                   *(int *)(iVar5 + 4));
          goto LAB_005ca734;
        }
        if (iVar5 == 4) {
          piStack_158 = (int *)0x5ca6d0;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x14),
                     *(IBinding **)(*(int *)(unaff_EBP + -0x18) + 0xec));
          iVar3 = *(int *)(unaff_EBP + 0x14);
          puVar9 = *(undefined1 **)(unaff_EBP + 0x18);
          piStack_158 = extraout_ECX_02;
        }
        else {
          piStack_158 = (int *)(unaff_EBP + -0x24);
          iStack_15c = 0x5ca592;
          piVar6 = (int *)FUN_00679d86();
          iStack_15c = *piVar6;
          piStack_158 = (int *)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0xd;
          puStack_160 = (undefined1 *)0x5ca5a4;
          FUN_00437222();
          *(undefined1 *)(unaff_EBP + -4) = 10;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            piStack_158 = (int *)0x5ca5bb;
            FUN_00403384();
          }
          piStack_158 = (int *)0x5ca5c6;
          iVar3 = (*DAT_0097b5a4)();
          if (iVar3 != 0) goto LAB_005ca6e6;
          piVar6 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
          piVar7 = (int *)(**(code **)(*piVar6 + 0x10))();
          iVar3 = *piVar7 + *(int *)(unaff_EBP + 0x14);
          if (iVar3 <= *(int *)(unaff_EBP + -0x38)) {
            iVar3 = *(int *)(unaff_EBP + -0x38);
          }
          *(int *)(unaff_EBP + -0x1c) = iVar3;
          if (*(int *)(unaff_EBP + -0x30) <= iVar3) {
            *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x30);
          }
          iVar3 = (**(code **)(*piVar6 + 0x10))();
          iVar3 = *(int *)(iVar3 + 4) + *(int *)(unaff_EBP + 0x18);
          if (iVar3 <= *(int *)(unaff_EBP + -0x34)) {
            iVar3 = *(int *)(unaff_EBP + -0x34);
          }
          *(int *)(unaff_EBP + 0x14) = iVar3;
          if (*(int *)(unaff_EBP + -0x2c) <= iVar3) {
            *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + -0x2c);
          }
          piStack_158 = (int *)0x5ca625;
          FUN_00403191();
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_158 = (int *)0x5ca632;
          FUN_00403191();
          piVar6 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 0xf;
          if (piVar6 == (int *)0x0) {
            piStack_158 = (int *)0x5ca647;
            FUN_00878dfb();
            piVar6 = *(int **)(unaff_EBP + -0x14);
          }
          puStack_160 = *(undefined1 **)(unaff_EBP + -0x70);
          iStack_15c = *(int *)(unaff_EBP + -0x6c);
          iVar3 = *piVar6;
          piStack_158 = *(int **)(unaff_EBP + -0x68);
          uStack_174 = *(undefined4 *)(unaff_EBP + 0x14);
          uStack_170 = *(uint *)(unaff_EBP + -0x48);
          uStack_16c = *(undefined4 *)(unaff_EBP + -0x44);
          iStack_168 = *(int *)(unaff_EBP + -0x40);
          *(int **)(unaff_EBP + 0x18) = piVar6;
          puStack_164 = *(undefined1 **)(unaff_EBP + -0x3c);
          iVar3 = (**(code **)(iVar3 + 0x90))(piVar6,*(undefined4 *)(unaff_EBP + -0x1c));
          if (iVar3 < 0) {
            piStack_158 = *(int **)(unaff_EBP + 0x18);
            puStack_160 = (undefined1 *)0x5ca686;
            iStack_15c = iVar3;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0xe;
          piStack_158 = (int *)0x5ca693;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5ca69e;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 10;
          piStack_158 = (int *)0x5ca6ab;
          piVar6 = (int *)(unaff_EBP + -0x70);
          iVar3 = FUN_00402bc3();
          piStack_158 = piVar6;
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5ca6b6;
            FUN_00878dfb();
            piStack_158 = extraout_ECX_01;
          }
          iVar3 = 0;
          puVar9 = (undefined1 *)0x0;
        }
      }
      puStack_160 = (undefined1 *)&piStack_158;
      *(int ***)(unaff_EBP + 0x14) = &piStack_158;
      iStack_15c = 0xb60;
      puStack_164 = (undefined1 *)0x5ca75a;
      FUN_00679e4e();
      iStack_15c = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_160 = (undefined1 *)0x5ca76a;
      FUN_0040263d();
      puStack_160 = (undefined1 *)0x5ca771;
      piStack_158 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_15c = 0x5ca77b;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + 0x14) = uVar4;
      iStack_15c = unaff_EBP + -0x48;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_160 = (undefined1 *)0x5ca78b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        piStack_158 = (int *)0x5ca798;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + 0x14) == 1) {
        piStack_158 = (int *)0x0;
        *(int **)(unaff_EBP + 0x10) = &iStack_15c;
        puStack_160 = (undefined1 *)0x3ba;
        iStack_168 = 0x5cad58;
        puStack_164 = (undefined1 *)&iStack_15c;
        FUN_00679e4e();
        puStack_160 = (undefined1 *)(unaff_EBP + -0xf0);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        puStack_164 = (undefined1 *)0x5cad6b;
        FUN_0040263d();
        puStack_164 = (undefined1 *)0x5cad72;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        iStack_15c = 0x5cad7d;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x60) = iVar3;
        *(undefined4 *)(unaff_EBP + 0x18) = 0;
        if (iVar3 != 0) {
          piStack_158 = (int *)0x5cad93;
          iVar3 = FUN_0041a4e5();
          if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
            piStack_158 = (int *)0x5cada4;
            FUN_00878dfb();
          }
        }
        iVar3 = unaff_EBP + -0xf0;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        piStack_158 = (int *)0x5cadb4;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_158 = (int *)0x5cadbf;
          FUN_00878dfb();
          iVar3 = extraout_ECX_07;
        }
        piStack_158 = (int *)0x0;
        puStack_164 = (undefined1 *)&iStack_15c;
        *(int **)(unaff_EBP + 0x10) = &iStack_15c;
        puStack_160 = (undefined1 *)0x3bb;
        iStack_168 = 0x5cadd4;
        iStack_15c = iVar3;
        FUN_00679e4e();
        puStack_160 = (undefined1 *)(unaff_EBP + -0x110);
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        puStack_164 = (undefined1 *)0x5cade7;
        FUN_0040263d();
        puStack_164 = (undefined1 *)0x5cadee;
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        iStack_15c = 0x5cadf9;
        iVar3 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x28) = iVar3;
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
        if (iVar3 != 0) {
          piStack_158 = (int *)0x5cae0f;
          iVar3 = FUN_0041a4e5();
          if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
            piStack_158 = (int *)0x5cae20;
            FUN_00878dfb();
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        piStack_158 = (int *)0x5cae30;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          piStack_158 = (int *)0x5cae3b;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + 0x18) != 0) {
          if (*(int *)(unaff_EBP + 0x14) == 0) {
            piStack_158 = (int *)0x5cae6a;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + 0x14) == 0) {
              piStack_158 = (int *)0x5cae75;
              FUN_00878dfb();
            }
          }
LAB_005cae7c:
          *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + 0x14);
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            piStack_158 = (int *)0x5cae8d;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            piStack_158 = (int *)0x5cae9a;
            FUN_00878dfb();
          }
          FUN_00404abb();
          piStack_158 = (int *)0x5caeae;
          piStack_158 = (int *)FUN_00404a94();
          iStack_15c = 0x5caeb6;
          iStack_15c = FUN_00404abb();
          puStack_160 = (undefined1 *)0x5caebe;
          puStack_160 = (undefined1 *)FUN_00404a94();
          puStack_164 = (undefined1 *)(unaff_EBP + -0x58);
          iStack_168 = 0x5caec9;
          (*DAT_0097b504)();
          piVar6 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
          iStack_168 = 0x5caed6;
          iVar3 = (**(code **)(*piVar6 + 0x10))();
          iStack_168 = *(undefined4 *)(iVar3 + 4);
          uStack_16c = 0x5caee0;
          puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x10))();
          uStack_16c = *puVar8;
          uStack_170 = unaff_EBP + -0x58;
          uStack_174 = 0x5caeec;
          (*DAT_0097b54c)();
          puStack_160 = (undefined1 *)&piStack_158;
          *(int ***)(unaff_EBP + 0x10) = &piStack_158;
          iStack_15c = 0xb0e;
          puStack_164 = (undefined1 *)0x5caf01;
          FUN_00679e4e();
          iStack_15c = unaff_EBP + -0x130;
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_160 = (undefined1 *)0x5caf14;
          FUN_0040263d();
          puStack_160 = (undefined1 *)0x5caf1b;
          piStack_158 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          iStack_15c = 0x5caf25;
          FUN_00412550();
          iStack_15c = unaff_EBP + -0x130;
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_160 = (undefined1 *)0x5caf3d;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5caf4a;
            FUN_00878dfb();
          }
          puStack_160 = (undefined1 *)&piStack_158;
          *(int ***)(unaff_EBP + 0x10) = &piStack_158;
          iStack_15c = 0x474;
          puStack_164 = (undefined1 *)0x5caf5f;
          FUN_00679e4e();
          iStack_15c = unaff_EBP + -0x150;
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_160 = (undefined1 *)0x5caf72;
          FUN_0040263d();
          puStack_160 = (undefined1 *)0x5caf79;
          piStack_158 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          iStack_15c = 0x5caf83;
          puVar9 = (undefined1 *)FUN_00412550();
          iStack_15c = unaff_EBP + -0x150;
          *(undefined1 *)(unaff_EBP + -4) = 0x19;
          puStack_160 = (undefined1 *)0x5caf95;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5cafa2;
            FUN_00878dfb();
          }
          if (*(undefined4 **)(unaff_EBP + 0xc) == (undefined4 *)0x0) {
            uStack_16c = 0;
          }
          else {
            uStack_16c = **(undefined4 **)(unaff_EBP + 0xc);
          }
          piStack_158 = (int *)0xff;
          iStack_15c = 0x80;
          puStack_160 = (undefined1 *)0x1f4;
          iStack_168 = unaff_EBP + -0x58;
          uStack_170 = 0x5cafd0;
          puStack_164 = puVar9;
          FUN_00428a3e();
          *(undefined1 *)(unaff_EBP + -4) = 0x15;
          if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
            piStack_158 = (int *)0x5cafe1;
            (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
          }
          piVar6 = *(int **)(unaff_EBP + 0x18);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          goto LAB_005cafe8;
        }
        if (*(int *)(unaff_EBP + 0x14) != 0) goto LAB_005cae7c;
        FUN_004125d9();
        FUN_004125d9();
LAB_005caff2:
        piVar6 = *(int **)(unaff_EBP + 8);
        *piVar6 = 0;
        *(undefined4 *)(unaff_EBP + -0x20) = 1;
      }
      else {
        if (*(int *)(unaff_EBP + 0x14) == 2) {
          piStack_158 = (int *)0x0;
          *(int **)(unaff_EBP + -0x1c) = &iStack_15c;
          puStack_160 = (undefined1 *)0x3ba;
          iStack_168 = 0x5cab1c;
          puStack_164 = (undefined1 *)&iStack_15c;
          FUN_00679e4e();
          puStack_160 = (undefined1 *)(unaff_EBP + -0x100);
          *(undefined1 *)(unaff_EBP + -4) = 10;
          puStack_164 = (undefined1 *)0x5cab2f;
          FUN_0040263d();
          puStack_164 = (undefined1 *)0x5cab36;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x1f;
          iStack_15c = 0x5cab41;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + 0x1c) = iVar3;
          *(undefined4 *)(unaff_EBP + 0x18) = 0;
          if (iVar3 != 0) {
            piStack_158 = (int *)0x5cab57;
            iVar3 = FUN_0041a4e5();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              piStack_158 = (int *)0x5cab68;
              FUN_00878dfb();
            }
          }
          iVar3 = unaff_EBP + -0x100;
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          piStack_158 = (int *)0x5cab78;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            piStack_158 = (int *)0x5cab83;
            FUN_00878dfb();
            iVar3 = extraout_ECX_06;
          }
          piStack_158 = (int *)0x0;
          puStack_164 = (undefined1 *)&iStack_15c;
          *(int **)(unaff_EBP + -0x1c) = &iStack_15c;
          puStack_160 = (undefined1 *)0x3bb;
          iStack_168 = 0x5cab98;
          iStack_15c = iVar3;
          FUN_00679e4e();
          puStack_160 = (undefined1 *)(unaff_EBP + -0x140);
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          puStack_164 = (undefined1 *)0x5cabab;
          FUN_0040263d();
          puStack_164 = (undefined1 *)0x5cabb2;
          FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x23;
          iStack_15c = 0x5cabbd;
          iVar3 = FUN_004032b4();
          *(int *)(unaff_EBP + -0x24) = iVar3;
          *(undefined4 *)(unaff_EBP + 0x14) = 0;
          if (iVar3 != 0) {
            piStack_158 = (int *)0x5cabd3;
            iVar3 = FUN_0041a4e5();
            if ((iVar3 < 0) && (iVar3 != -0x7fffbffe)) {
              piStack_158 = (int *)0x5cabe4;
              FUN_00878dfb();
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          piStack_158 = (int *)0x5cabf4;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5cabff;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            if (*(int *)(unaff_EBP + 0x14) == 0) goto LAB_005caff2;
          }
          else if (*(int *)(unaff_EBP + 0x14) == 0) {
            piStack_158 = (int *)0x5cac1e;
            FUN_00878dfb();
            if (*(int *)(unaff_EBP + 0x14) == 0) {
              piStack_158 = (int *)0x5cac29;
              FUN_00878dfb();
            }
          }
          *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0x14);
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            piStack_158 = (int *)0x5cac41;
            FUN_00878dfb();
          }
          if (*(int *)(unaff_EBP + 0x18) == 0) {
            piStack_158 = (int *)0x5cac4e;
            FUN_00878dfb();
          }
          FUN_00404abb();
          piStack_158 = (int *)0x5cac62;
          piStack_158 = (int *)FUN_00404a94();
          iStack_15c = 0x5cac6a;
          iStack_15c = FUN_00404abb();
          puStack_160 = (undefined1 *)0x5cac72;
          puStack_160 = (undefined1 *)FUN_00404a94();
          puStack_164 = (undefined1 *)(unaff_EBP + -0x58);
          iStack_168 = 0x5cac7d;
          (*DAT_0097b504)();
          piVar6 = (int *)(*(int *)(unaff_EBP + -0x18) + 4);
          iStack_168 = 0x5cac8a;
          iVar3 = (**(code **)(*piVar6 + 0x10))();
          iStack_168 = *(int *)(iVar3 + 4);
          uStack_16c = 0x5cac94;
          puVar8 = (undefined4 *)(**(code **)(*piVar6 + 0x10))();
          uStack_16c = *puVar8;
          uStack_170 = unaff_EBP - 0x58;
          uStack_174 = 0x5caca0;
          (*DAT_0097b54c)();
          *(int *)(unaff_EBP + -0x54) = *(int *)(unaff_EBP + -0x54) + -0x32;
          *(int *)(unaff_EBP + -0x4c) = *(int *)(unaff_EBP + -0x4c) + -0xaa;
          puStack_160 = (undefined1 *)&piStack_158;
          *(int ***)(unaff_EBP + -0x1c) = &piStack_158;
          iStack_15c = 0x474;
          puStack_164 = (undefined1 *)0x5cacc0;
          FUN_00679e4e();
          iStack_15c = unaff_EBP + -0xd0;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          puStack_160 = (undefined1 *)0x5cacd3;
          FUN_0040263d();
          puStack_160 = (undefined1 *)0x5cacda;
          piStack_158 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x27;
          iStack_15c = 0x5cace4;
          FUN_00412550();
          iStack_15c = unaff_EBP + -0xd0;
          *(undefined1 *)(unaff_EBP + -4) = 0x25;
          puStack_160 = (undefined1 *)0x5cacf6;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5cad03;
            FUN_00878dfb();
          }
          if (*(int **)(unaff_EBP + 0xc) == (int *)0x0) {
            puStack_160 = (undefined1 *)0x0;
          }
          else {
            puStack_160 = (undefined1 *)**(int **)(unaff_EBP + 0xc);
          }
          piStack_158 = (int *)(unaff_EBP + -0x58);
          iStack_15c = *(int *)(unaff_EBP + 0x10);
          puStack_164 = (undefined1 *)0x5cad24;
          FUN_00427eb9();
          *(undefined1 *)(unaff_EBP + -4) = 0x21;
          if (*(int **)(unaff_EBP + 0x14) != (int *)0x0) {
            piStack_158 = (int *)0x5cad35;
            (**(code **)(**(int **)(unaff_EBP + 0x14) + 8))();
          }
          piVar6 = *(int **)(unaff_EBP + 0x18);
          *(undefined1 *)(unaff_EBP + -4) = 10;
LAB_005cafe8:
          if (piVar6 != (int *)0x0) {
            piStack_158 = (int *)0x5caff2;
            (**(code **)(*piVar6 + 8))();
          }
          goto LAB_005caff2;
        }
        piStack_158 = (int *)0xff;
        iStack_15c = *(int *)(unaff_EBP + 0x1c) + 1;
        puStack_164 = (undefined1 *)(*(int *)(unaff_EBP + -0x18) + 0x440);
        *(undefined1 ***)(unaff_EBP + 0x14) = &puStack_160;
        iStack_168 = 0x5ca7c9;
        FUN_0041160e();
        uStack_170 = unaff_EBP + -0x14;
        *(undefined4 **)(unaff_EBP + 0x18) = &uStack_16c;
        uStack_174 = 0x5ca7da;
        uStack_16c = extraout_ECX_04;
        iStack_168 = iVar3;
        puStack_164 = puVar9;
        FUN_00433bdf();
        uStack_170 = (uint)(*(int *)(unaff_EBP + 0x10) == 0);
        *(undefined4 **)(unaff_EBP + 0x18) = &uStack_174;
        uStack_174 = extraout_ECX_05;
        FUN_00424dbc(unaff_EBP + -0x10);
        FUN_0042e5bf(unaff_EBP + 0x14);
        puStack_160 = (undefined1 *)&piStack_158;
        *(int ***)(unaff_EBP + 0x18) = &piStack_158;
        iStack_15c = 0x916;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        puStack_164 = (undefined1 *)0x5ca817;
        FUN_00679e4e();
        iStack_15c = unaff_EBP + -0xe0;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        puStack_160 = (undefined1 *)0x5ca82a;
        FUN_0040263d();
        puStack_160 = (undefined1 *)0x5ca831;
        piStack_158 = (int *)FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x2a;
        iStack_15c = 0x5ca83b;
        iVar3 = FUN_00412550();
        iStack_15c = unaff_EBP + -0xe0;
        *(undefined1 *)(unaff_EBP + -4) = 0x28;
        puStack_160 = (undefined1 *)0x5ca84d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          piStack_158 = (int *)0x5ca85a;
          FUN_00878dfb();
        }
        if (iVar3 == 0) {
          puStack_160 = (undefined1 *)&piStack_158;
          *(int ***)(unaff_EBP + 0x18) = &piStack_158;
          iStack_15c = 0x9a0;
          puStack_164 = (undefined1 *)0x5ca8e2;
          FUN_00679e4e();
          iStack_15c = unaff_EBP + -0xc0;
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          puStack_160 = (undefined1 *)0x5ca8f5;
          FUN_0040263d();
          puStack_160 = (undefined1 *)0x5ca8fc;
          piStack_158 = (int *)FUN_004048a4();
          *(undefined1 *)(unaff_EBP + -4) = 0x2c;
          iStack_15c = 0x5ca906;
          iVar3 = FUN_00412550();
          iStack_15c = unaff_EBP + -0xc0;
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          puStack_160 = (undefined1 *)0x5ca918;
          iVar5 = FUN_00402bc3();
          if (iVar5 < 0) {
            piStack_158 = (int *)0x5ca925;
            FUN_00878dfb();
          }
          if (iVar3 != 0) {
            piStack_158 = (int *)0x5ca939;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x80));
            piStack_158 = (int *)(unaff_EBP + -0x80);
            iStack_15c = 0x5ca948;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              piStack_158 = (int *)0x5ca954;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            piStack_158 = (int *)0x5ca961;
            VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
            piStack_158 = (int *)(unaff_EBP + -0x90);
            iStack_15c = 0x5ca96e;
            iVar3 = FUN_00402e32();
            if (iVar3 < 0) {
              piStack_158 = (int *)0x5ca97a;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2e;
            if (*(int *)(unaff_EBP + 0x14) == 0) {
              piStack_158 = (int *)0x5ca98e;
              FUN_00878dfb();
            }
            piVar6 = *(int **)(unaff_EBP + 0x14);
            puStack_160 = *(undefined1 **)(unaff_EBP + -0x80);
            iStack_15c = *(int *)(unaff_EBP + -0x7c);
            piStack_158 = *(int **)(unaff_EBP + -0x78);
            uStack_170 = *(uint *)(unaff_EBP + -0x90);
            uStack_16c = *(undefined4 *)(unaff_EBP + -0x8c);
            iStack_168 = *(int *)(unaff_EBP + -0x88);
            uStack_174 = 0x20;
            puStack_164 = *(undefined1 **)(unaff_EBP + -0x84);
            iVar3 = (**(code **)(*piVar6 + 0x110))(piVar6);
            if (iVar3 < 0) {
              puStack_160 = (undefined1 *)0x5ca9c7;
              iStack_15c = iVar3;
              piStack_158 = piVar6;
              FUN_00878e09();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x2d;
            piStack_158 = (int *)0x5ca9d7;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              piStack_158 = (int *)0x5ca9e2;
              FUN_00878dfb();
            }
            *(undefined1 *)(unaff_EBP + -4) = 0x28;
            piStack_158 = (int *)0x5ca9ef;
            iVar3 = FUN_00402bc3();
            if (iVar3 < 0) {
              piStack_158 = (int *)0x5ca9fe;
              FUN_00878dfb();
            }
            goto LAB_005ca85e;
          }
          piStack_158 = (int *)0x5caa0f;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
          piStack_158 = (int *)(unaff_EBP + -0x48);
          iStack_15c = 0x5caa1e;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5caa2a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          piStack_158 = (int *)0x5caa34;
          VariantInit((VARIANTARG *)(unaff_EBP + -0x70));
          piStack_158 = (int *)(unaff_EBP + -0x70);
          iStack_15c = 0x5caa3e;
          iVar3 = FUN_00402e32();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5caa4a;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x30;
          if (*(int *)(unaff_EBP + 0x14) == 0) {
            piStack_158 = (int *)0x5caa5e;
            FUN_00878dfb();
          }
          piVar6 = *(int **)(unaff_EBP + 0x14);
          puStack_160 = *(undefined1 **)(unaff_EBP + -0x48);
          iStack_15c = *(int *)(unaff_EBP + -0x44);
          piStack_158 = *(int **)(unaff_EBP + -0x40);
          uStack_170 = *(uint *)(unaff_EBP + -0x70);
          uStack_16c = *(undefined4 *)(unaff_EBP + -0x6c);
          iStack_168 = *(int *)(unaff_EBP + -0x68);
          uStack_174 = 0;
          puStack_164 = *(undefined1 **)(unaff_EBP + -100);
          iVar3 = (**(code **)(*piVar6 + 0x110))(piVar6);
          if (iVar3 < 0) {
            puStack_160 = (undefined1 *)0x5caa94;
            iStack_15c = iVar3;
            piStack_158 = piVar6;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x2f;
          piStack_158 = (int *)0x5caaa1;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5caaac;
            FUN_00878dfb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          piStack_158 = (int *)0x5caab9;
          iVar3 = FUN_00402bc3();
          if (iVar3 < 0) {
            piStack_158 = (int *)0x5caac4;
            FUN_00878dfb();
          }
          piStack_158 = *(int **)(unaff_EBP + 0x14);
          *(undefined1 **)(unaff_EBP + 0x18) = &stack0xfffffeac;
          if (piStack_158 != (int *)0x0) {
            iStack_15c = 0x5caadc;
            (**(code **)(*piStack_158 + 4))();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x28;
          piStack_158 = (int *)0x5caae5;
          FUN_00424e82();
          piStack_158 = (int *)0x5caaec;
          FUN_00427af9();
          piVar6 = *(int **)(unaff_EBP + 8);
          *piVar6 = 0;
          piVar7 = *(int **)(unaff_EBP + 0x14);
          *(undefined4 *)(unaff_EBP + -0x20) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        else {
LAB_005ca85e:
          piVar1 = *(int **)(unaff_EBP + 0x14);
          piVar6 = *(int **)(unaff_EBP + 8);
          *piVar6 = (int)piVar1;
          piVar7 = (int *)0x0;
          if (piVar1 != (int *)0x0) {
            piStack_158 = (int *)0x5ca870;
            (**(code **)(*piVar1 + 4))();
            piVar7 = *(int **)(unaff_EBP + 0x14);
          }
          *(undefined4 *)(unaff_EBP + -0x20) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 10;
        }
        if (piVar7 != (int *)0x0) {
          piStack_158 = (int *)0x5ca888;
          (**(code **)(*piVar7 + 8))();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_158 = (int *)0x5ca899;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        piStack_158 = (int *)0x5ca8aa;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        FUN_004030b1();
      }
      goto LAB_005cb019;
    }
    piVar6 = *(int **)(unaff_EBP + 8);
    *piVar6 = 0;
LAB_005cb009:
    FUN_004027eb();
  }
  FUN_00402fa6();
LAB_005cb019:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar6;
}


