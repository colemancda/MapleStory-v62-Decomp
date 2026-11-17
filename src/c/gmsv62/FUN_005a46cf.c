/* FUN_005a46cf - 0x005a46cf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a46cf(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *extraout_ECX_01;
  undefined1 *extraout_ECX_02;
  undefined1 *extraout_ECX_03;
  undefined1 *extraout_ECX_04;
  undefined1 *extraout_ECX_05;
  undefined1 *extraout_ECX_06;
  undefined1 *puVar8;
  undefined1 *extraout_ECX_07;
  undefined1 *extraout_ECX_08;
  undefined1 *extraout_ECX_09;
  undefined1 *extraout_ECX_10;
  undefined1 *extraout_ECX_11;
  int unaff_EBP;
  int *piStack_68;
  undefined1 *puStack_64;
  int iStack_60;
  int iStack_5c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 8) != 0) {
    iStack_5c = 0;
    iStack_60 = 0x5a46fc;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (*(int *)(unaff_EBP + 8) == 0) {
      iStack_5c = 0x5a4710;
      FUN_00878dfb();
    }
    iStack_5c = unaff_EBP + -0x18;
    iStack_60 = 0x5a4720;
    FUN_00425067();
    iVar5 = unaff_EBP + -0x54;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_5c = 0x5a472d;
    iVar3 = FUN_00402bc3();
    if (iVar3 < 0) {
      iStack_5c = 0x5a4738;
      FUN_00878dfb();
      iVar5 = extraout_ECX;
    }
    if (*(int *)(unaff_EBP + -0x18) != 0) {
      puStack_64 = (undefined1 *)&iStack_5c;
      *(int **)(unaff_EBP + -0x34) = &iStack_5c;
      iStack_60 = 0x5f4;
      piStack_68 = (int *)0x5a475a;
      iStack_5c = iVar5;
      FUN_00679e4e();
      iStack_60 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      puStack_64 = (undefined1 *)0x5a476a;
      FUN_004115d9();
      puStack_64 = (undefined1 *)0x5a4771;
      FUN_00404e7f();
      iStack_60 = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_64 = (undefined1 *)0x5a4780;
      FUN_0040263d();
      puStack_64 = (undefined1 *)0x5a4787;
      iStack_5c = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_60 = 0x5a4791;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
      iStack_60 = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      puStack_64 = (undefined1 *)0x5a47a1;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_5c = 0x5a47ae;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004027eb();
      puStack_64 = (undefined1 *)&iStack_5c;
      *(int **)(unaff_EBP + -0x34) = &iStack_5c;
      iStack_60 = 0x5f5;
      piStack_68 = (int *)0x5a47ce;
      FUN_00679e4e();
      iStack_60 = unaff_EBP + -0x28;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      puStack_64 = (undefined1 *)0x5a47de;
      FUN_004115d9();
      puStack_64 = (undefined1 *)0x5a47e5;
      FUN_00404e7f();
      iStack_60 = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_64 = (undefined1 *)0x5a47f4;
      FUN_0040263d();
      puStack_64 = (undefined1 *)0x5a47fb;
      iStack_5c = FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      iStack_60 = 0x5a4805;
      uVar4 = FUN_00412550();
      *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
      iStack_60 = unaff_EBP + -0x44;
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      puStack_64 = (undefined1 *)0x5a4815;
      iVar5 = FUN_00402bc3();
      if (iVar5 < 0) {
        iStack_5c = 0x5a4822;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004027eb();
      if ((*(int *)(unaff_EBP + -0x20) != 0) || (*(int *)(unaff_EBP + -0x14) != 0)) {
        puStack_64 = (undefined1 *)&iStack_5c;
        *(int **)(unaff_EBP + -0x34) = &iStack_5c;
        iStack_60 = 0x5f6;
        piStack_68 = (int *)0x5a4904;
        FUN_00679e4e();
        iStack_60 = unaff_EBP + -0x24;
        *(undefined1 *)(unaff_EBP + -4) = 0xf;
        puStack_64 = (undefined1 *)0x5a4914;
        FUN_004115d9();
        puStack_64 = (undefined1 *)0x5a491b;
        FUN_00404e7f();
        iStack_60 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_64 = (undefined1 *)0x5a492a;
        FUN_0040263d();
        puStack_64 = (undefined1 *)0x5a4931;
        iStack_5c = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        iStack_60 = 0x5a493b;
        uVar4 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
        iStack_60 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 0x11;
        puStack_64 = (undefined1 *)0x5a494b;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_5c = 0x5a4958;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        FUN_004027eb();
        puStack_64 = (undefined1 *)&iStack_5c;
        *(int **)(unaff_EBP + -0x34) = &iStack_5c;
        iStack_60 = 0x5f7;
        piStack_68 = (int *)0x5a4979;
        FUN_00679e4e();
        iStack_60 = unaff_EBP + -0x1c;
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        puStack_64 = (undefined1 *)0x5a4989;
        FUN_004115d9();
        puStack_64 = (undefined1 *)0x5a4990;
        FUN_00404e7f();
        iStack_60 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        puStack_64 = (undefined1 *)0x5a499f;
        FUN_0040263d();
        puStack_64 = (undefined1 *)0x5a49a6;
        iStack_5c = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x16;
        iStack_60 = 0x5a49b0;
        uVar4 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x24) = uVar4;
        iStack_60 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 0x15;
        puStack_64 = (undefined1 *)0x5a49c0;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_5c = 0x5a49cd;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          iStack_5c = 0x5a49de;
          (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
        }
        puStack_64 = (undefined1 *)&iStack_5c;
        *(int **)(unaff_EBP + -0x34) = &iStack_5c;
        iStack_60 = 0x5f8;
        piStack_68 = (int *)0x5a49f6;
        FUN_00679e4e();
        iStack_60 = unaff_EBP + -0x2c;
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        puStack_64 = (undefined1 *)0x5a4a06;
        FUN_004115d9();
        puStack_64 = (undefined1 *)0x5a4a0d;
        FUN_00404e7f();
        iStack_60 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        puStack_64 = (undefined1 *)0x5a4a1c;
        FUN_0040263d();
        puStack_64 = (undefined1 *)0x5a4a23;
        iStack_5c = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        iStack_60 = 0x5a4a2d;
        uVar4 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
        iStack_60 = unaff_EBP + -0x44;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        puStack_64 = (undefined1 *)0x5a4a3d;
        iVar5 = FUN_00402bc3();
        puVar8 = extraout_ECX_00;
        if (iVar5 < 0) {
          iStack_5c = 0x5a4a4a;
          FUN_00878dfb();
          puVar8 = extraout_ECX_01;
        }
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
          iStack_5c = 0x5a4a5b;
          (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
          puVar8 = extraout_ECX_02;
        }
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          iStack_5c = unaff_EBP + -0x2c;
          iStack_60 = 0x5a4a7d;
          piVar6 = (int *)FUN_00679d86();
          iStack_60 = *piVar6;
          iStack_5c = unaff_EBP + 0xc;
          *(undefined1 *)(unaff_EBP + -4) = 0x1c;
          puStack_64 = (undefined1 *)0x5a4a8e;
          FUN_00437222();
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          FUN_00402676();
          puVar8 = extraout_ECX_03;
        }
        iVar5 = *(int *)(unaff_EBP + -0x20);
        if (iVar5 == 0) {
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            iStack_5c = 0;
            iStack_60 = *(int *)(unaff_EBP + -0x14);
            piStack_68 = (int *)(unaff_EBP + 0xc);
            *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_64;
            puStack_64 = puVar8;
            FUN_00433bdf();
            piStack_68 = (int *)(unaff_EBP - 0x34);
            puVar7 = (undefined4 *)FUN_0080a8ce();
            iStack_5c = 0x5a4c86;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                       (IBinding *)*puVar7);
            piVar6 = *(int **)(unaff_EBP + -0x34);
LAB_005a4c89:
            if (piVar6 != (int *)0x0) {
              iStack_5c = 0x5a4c93;
              (**(code **)(*piVar6 + 8))();
            }
          }
        }
        else if (iVar5 == 1) {
          iStack_5c = *(int *)(unaff_EBP + -0x1c);
          piStack_68 = (int *)(unaff_EBP + 0xc);
          iStack_60 = *(int *)(unaff_EBP + -0x28);
          *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_64;
          puStack_64 = puVar8;
          FUN_00433bdf();
          piStack_68 = (int *)(unaff_EBP - 0x1c);
          puVar7 = (undefined4 *)FUN_0080aca7();
          iStack_5c = 0x5a4c18;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar7);
          puVar8 = extraout_ECX_10;
          if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
            iStack_5c = 0x5a4c25;
            (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
            puVar8 = extraout_ECX_11;
          }
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            iStack_5c = 0;
            iStack_60 = *(int *)(unaff_EBP + -0x14);
            piStack_68 = (int *)(unaff_EBP + -0x10);
            *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_64;
            puStack_64 = puVar8;
            FUN_00433bdf();
            piStack_68 = (int *)(unaff_EBP - 0x30);
            puVar7 = (undefined4 *)FUN_0080a8ce();
            iStack_5c = 0x5a4c53;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                       (IBinding *)*puVar7);
            piVar6 = *(int **)(unaff_EBP + -0x30);
            goto LAB_005a4c89;
          }
        }
        else if (iVar5 == 2) {
          iStack_5c = *(int *)(unaff_EBP + -0x1c);
          piStack_68 = (int *)(unaff_EBP + 0xc);
          iStack_60 = *(int *)(unaff_EBP + -0x24);
          *(undefined1 ***)(unaff_EBP + -0x34) = &puStack_64;
          puStack_64 = puVar8;
          FUN_00433bdf();
          piStack_68 = (int *)(unaff_EBP - 0x24);
          puVar7 = (undefined4 *)FUN_0080aca7();
          iStack_5c = 0x5a4ba6;
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                    ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                     (IBinding *)*puVar7);
          puVar8 = extraout_ECX_08;
          if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
            iStack_5c = 0x5a4bb3;
            (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
            puVar8 = extraout_ECX_09;
          }
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            iStack_5c = 0;
            iStack_60 = *(int *)(unaff_EBP + -0x14);
            piStack_68 = (int *)(unaff_EBP + -0x10);
            *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_64;
            puStack_64 = puVar8;
            FUN_00433bdf();
            piStack_68 = (int *)(unaff_EBP - 0x20);
            puVar7 = (undefined4 *)FUN_0080a8ce();
            iStack_5c = 0x5a4be5;
            _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                      ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                       (IBinding *)*puVar7);
            piVar6 = *(int **)(unaff_EBP + -0x20);
            goto LAB_005a4c89;
          }
        }
        else if (iVar5 == 3) {
          iVar5 = *(int *)(unaff_EBP + -0x1c);
          iStack_5c = iVar5;
          if (iVar5 < 1) {
            iStack_5c = -iVar5;
          }
          piStack_68 = (int *)(uint)(0 < iVar5);
          iStack_60 = *(int *)(unaff_EBP + -0x24);
          puStack_64 = *(undefined1 **)(unaff_EBP + -0x28);
          *(int ***)(unaff_EBP + -0x34) = &piStack_68;
          FUN_00433bdf(unaff_EBP + 0xc);
          piVar6 = (int *)FUN_0080a35a(unaff_EBP + -0x2c);
          piVar6 = (int *)*piVar6;
          piVar1 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x1d;
          puVar8 = extraout_ECX_04;
          if (piVar1 != piVar6) {
            *(int **)(unaff_EBP + -0x10) = piVar6;
            FUN_00434bee();
            puVar8 = extraout_ECX_05;
            if (piVar1 != (int *)0x0) {
              iStack_5c = 0x5a4b13;
              (**(code **)(*piVar1 + 8))();
              puVar8 = extraout_ECX_06;
            }
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x1b;
          if (*(int **)(unaff_EBP + -0x2c) != (int *)0x0) {
            iStack_5c = 0x5a4b24;
            (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
            puVar8 = extraout_ECX_07;
          }
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            iStack_5c = 0;
            iStack_60 = *(int *)(unaff_EBP + -0x14);
            piStack_68 = (int *)(unaff_EBP + -0x10);
            *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_64;
            puStack_64 = puVar8;
            FUN_00433bdf();
            piStack_68 = (int *)(unaff_EBP - 0x28);
            piVar6 = (int *)FUN_0080a8ce();
            piVar6 = (int *)*piVar6;
            piVar1 = *(int **)(unaff_EBP + -0x10);
            *(undefined1 *)(unaff_EBP + -4) = 0x1e;
            if (piVar1 != piVar6) {
              *(int **)(unaff_EBP + -0x10) = piVar6;
              FUN_00434bee();
              if (piVar1 != (int *)0x0) {
                iStack_5c = 0x5a4b6e;
                (**(code **)(*piVar1 + 8))();
              }
            }
            piVar6 = *(int **)(unaff_EBP + -0x28);
            *(undefined1 *)(unaff_EBP + -4) = 0x1b;
            goto LAB_005a4c89;
          }
        }
        *(undefined2 *)(unaff_EBP + -0x44) = 0xd;
        *(int **)(unaff_EBP + -0x3c) = *(int **)(unaff_EBP + -0x10);
        iStack_5c = 0x5a4ca5;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 4))();
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (*(int *)(unaff_EBP + 8) == 0) {
          iStack_5c = -0x7fffbffd;
          iStack_60 = 0x5a4cb8;
          FUN_00878dfb();
        }
        iStack_5c = unaff_EBP + -0x30;
        iStack_60 = 0x5a4cc4;
        piVar6 = (int *)FUN_0042fb5e();
        iVar5 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x20;
        if (iVar5 == 0) {
          iStack_5c = -0x7fffbffd;
          iStack_60 = 0x5a4cd8;
          FUN_00878dfb();
        }
        piVar6 = (int *)*piVar6;
        iVar5 = *piVar6;
        piStack_68 = *(int **)(unaff_EBP + -0x44);
        puStack_64 = *(undefined1 **)(unaff_EBP + -0x40);
        iStack_60 = *(undefined4 *)(unaff_EBP + -0x3c);
        *(int **)(unaff_EBP + -0x34) = piVar6;
        iStack_5c = *(int *)(unaff_EBP + -0x38);
        iVar5 = (**(code **)(iVar5 + 100))(piVar6);
        if (iVar5 < 0) {
          FUN_00878e09(iVar5,*(undefined4 *)(unaff_EBP + -0x34),&DAT_00963de8);
        }
        piVar6 = *(int **)(unaff_EBP + -0x30);
        *(undefined1 *)(unaff_EBP + -4) = 0x1f;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        iVar5 = FUN_00402bc3(unaff_EBP + -0x44);
        if (iVar5 < 0) {
          FUN_00878dfb(iVar5);
        }
        piVar6 = *(int **)(unaff_EBP + -0x10);
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        piVar6 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        piVar6 = *(int **)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        piVar6 = *(int **)(unaff_EBP + 0xc);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 8))(piVar6);
        }
        goto LAB_005a4d6d;
      }
      iStack_5c = 0x5a4849;
      cVar2 = FUN_004115ad();
      if (cVar2 == '\0') {
        iStack_5c = *(int *)(unaff_EBP + 0xc);
        iStack_60 = 0x5a485e;
        FUN_0040ee87();
        *(undefined1 *)(unaff_EBP + -4) = 0xd;
        if (*(int *)(unaff_EBP + 8) == 0) {
          iStack_5c = 0x5a486d;
          FUN_00878dfb();
        }
        iStack_5c = 0x5a4879;
        piVar6 = (int *)FUN_0042fb5e();
        iVar5 = *piVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0xe;
        if (iVar5 == 0) {
          iStack_5c = 0x5a4889;
          FUN_00878dfb();
        }
        piStack_68 = (int *)*piVar6;
        iVar5 = *piStack_68;
        puStack_64 = *(undefined1 **)(unaff_EBP + -0x44);
        iStack_60 = *(int *)(unaff_EBP + -0x40);
        iStack_5c = *(int *)(unaff_EBP + -0x3c);
        *(int **)(unaff_EBP + -0x28) = piStack_68;
        iVar5 = (**(code **)(iVar5 + 100))();
        if (iVar5 < 0) {
          iStack_5c = *(int *)(unaff_EBP + -0x28);
          puStack_64 = (undefined1 *)0x5a48b2;
          iStack_60 = iVar5;
          FUN_00878e09();
        }
        FUN_004125d9();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        iStack_5c = 0x5a48c7;
        iVar5 = FUN_00402bc3();
        if (iVar5 < 0) {
          iStack_5c = 0x5a48d2;
          FUN_00878dfb();
        }
      }
    }
    FUN_004125e6();
  }
  FUN_00412600();
  FUN_004125d9();
LAB_005a4d6d:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


