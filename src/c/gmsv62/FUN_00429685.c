/* FUN_00429685 - 0x00429685 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00429685(void)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  int *piVar8;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  int unaff_EBP;
  uint uVar9;
  bool bVar10;
  int *piStack_1c4;
  int *piStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined1 *puStack_13c;
  int *piStack_138;
  undefined4 *puStack_134;
  int *piStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  int iStack_114;
  undefined1 *puStack_110;
  int iStack_10c;
  IBinding *pIVar11;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x94) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iVar5 = *(int *)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar5 == 0) {
    if (*(int *)(unaff_EBP + 0x18) == 0) {
      iStack_10c = 0x429726;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 *(IBinding **)(extraout_ECX + 0x160));
      pIVar11 = *(IBinding **)(extraout_ECX + 0x15c);
    }
    else {
      iStack_10c = 0x429710;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 *(IBinding **)(extraout_ECX + 0x178));
      pIVar11 = *(IBinding **)(extraout_ECX + 0x174);
    }
  }
  else if (iVar5 == 1) {
    iStack_10c = 0x4296f5;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               *(IBinding **)(extraout_ECX + 0x168));
    pIVar11 = *(IBinding **)(extraout_ECX + 0x164);
  }
  else {
    if (iVar5 != 2) {
      FUN_004027eb();
      FUN_004027eb();
      goto LAB_0042a361;
    }
    iStack_10c = 0x4296df;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
               *(IBinding **)(extraout_ECX + 0x170));
    pIVar11 = *(IBinding **)(extraout_ECX + 0x16c);
  }
  iStack_10c = 0x429734;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x20),pIVar11);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar9 = -(uint)(*(int *)(unaff_EBP + 0x18) != 0) & 0x1e;
  *(uint *)(unaff_EBP + -0x24) = uVar9;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iStack_10c = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_110 = (undefined1 *)0x429761;
  puVar3 = (undefined4 *)FUN_00679d22();
  iStack_10c = *puVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_110 = (undefined1 *)(unaff_EBP + -0x1c);
  iStack_114 = 0x429774;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    iStack_10c = 0x42978b;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + -4);
    }
    if (iVar5 <= *(int *)(unaff_EBP + 0x10)) break;
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      FUN_0087a1b0();
      iStack_10c = 0;
      iStack_114 = 0;
      uStack_118 = 0x4297c6;
      puStack_110 = &stack0xfffffefc;
      cVar2 = FUN_004342bb();
      iStack_114 = cVar2 + -0x30;
      uStack_118 = 0x4297d2;
      iStack_114 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_110;
      uStack_118 = 0x4297de;
      FUN_004033a1();
      iStack_114 = unaff_EBP + -0x50;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_118 = 0x4297ee;
      FUN_0040263d();
      uStack_118 = 0x4297f5;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      puStack_110 = (undefined1 *)0x429800;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x2c) = uVar4;
      iStack_10c = 0x42980f;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        iStack_10c = 0x429820;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    else {
      FUN_0087a1b0();
      iStack_10c = 0;
      iStack_114 = *(undefined4 *)(unaff_EBP + 0x10);
      uStack_118 = 0x42983e;
      puStack_110 = &stack0xfffffefc;
      cVar2 = FUN_004342bb();
      iStack_114 = cVar2 + -0x30;
      uStack_118 = 0x42984a;
      iStack_114 = FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_110;
      uStack_118 = 0x429856;
      FUN_004033a1();
      iStack_114 = unaff_EBP + -0x70;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_118 = 0x429866;
      FUN_0040263d();
      uStack_118 = 0x42986d;
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      puStack_110 = (undefined1 *)0x429878;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x30) = uVar4;
      iStack_10c = 0x429887;
      iVar5 = FUN_0041a581();
      if ((iVar5 < 0) && (iVar5 != -0x7fffbffe)) {
        iStack_10c = 0x429898;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
    }
    iStack_10c = 0x4298a5;
    iVar5 = FUN_00402bc3();
    if (iVar5 < 0) {
      iStack_10c = 0x4298b0;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_10c = 0x4298bb;
      FUN_00878dfb();
    }
    iVar5 = FUN_0040eea9();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_10c = 0x4298d4;
      FUN_00878dfb();
    }
    iVar6 = FUN_0040e48b();
    iVar1 = (iVar5 - *(int *)(unaff_EBP + -0x24)) + uVar9;
    uVar9 = iVar1 + (iVar6 - iVar5);
    *(int *)(unaff_EBP + -0x104 + *(int *)(unaff_EBP + 0x10) * 4) = iVar1;
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
    *(int *)(unaff_EBP + -0x24) = ((iVar6 - iVar5) * 3) / 5;
  }
  *(uint *)(unaff_EBP + -0x24) = uVar9;
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_10c = 0x429913;
    FUN_00878dfb();
  }
  FUN_0040eea9();
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    iStack_10c = 0x429926;
    FUN_00878dfb();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      iStack_10c = 0x429931;
      FUN_00878dfb();
    }
  }
  FUN_0040e48b();
  FUN_0040eea9();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  iStack_10c = unaff_EBP + 0x10;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  puStack_110 = (undefined1 *)0x42995c;
  puVar3 = (undefined4 *)FUN_00679d86();
  puStack_110 = (undefined1 *)*puVar3;
  iStack_10c = unaff_EBP + -0x14;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_114 = 0x42996d;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int *)(unaff_EBP + 0x10) != 0) {
    iStack_10c = 0x429984;
    FUN_00403384();
  }
  iStack_10c = 0x429993;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_10c = 0x4299a0;
  FUN_00403191();
  piStack_130 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piStack_130 == (int *)0x0) {
    iStack_10c = 0x4299b5;
    FUN_00878dfb();
    piStack_130 = *(int **)(unaff_EBP + -0x14);
  }
  iStack_114 = *(undefined4 *)(unaff_EBP + -0x60);
  puStack_110 = *(undefined1 **)(unaff_EBP + -0x5c);
  iVar5 = *piStack_130;
  iStack_10c = *(undefined4 *)(unaff_EBP + -0x58);
  uStack_124 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_120 = *(undefined4 *)(unaff_EBP + -0x3c);
  uStack_128 = 0x39;
  uStack_12c = *(undefined4 *)(unaff_EBP + -0x24);
  uStack_11c = *(undefined4 *)(unaff_EBP + -0x38);
  *(int **)(unaff_EBP + 0x10) = piStack_130;
  uStack_118 = *(undefined4 *)(unaff_EBP + -0x34);
  puStack_134 = (undefined4 *)0x4299de;
  puVar7 = (undefined1 *)(**(code **)(iVar5 + 0x2c))();
  if ((int)puVar7 < 0) {
    puStack_134 = (undefined4 *)&DAT_00963cc8;
    piStack_138 = *(int **)(unaff_EBP + 0x10);
    puStack_13c = puVar7;
    FUN_00878e09();
  }
  puStack_134 = (undefined4 *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  piStack_138 = (int *)0x4299fd;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    piStack_138 = (int *)0x429a0a;
    FUN_00878dfb();
  }
  puStack_134 = (undefined4 *)(unaff_EBP + -0x60);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piStack_138 = (int *)0x429a17;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    piStack_138 = (int *)0x429a22;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  while( true ) {
    if (*(int *)(unaff_EBP + -0x1c) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*(int *)(unaff_EBP + -0x1c) + -4);
    }
    if (iVar5 <= *(int *)(unaff_EBP + 0x10)) break;
    if (*(int *)(unaff_EBP + 0x10) == 0) {
      puStack_134 = (undefined4 *)0x429a52;
      FUN_0087a1b0();
      puStack_134 = (undefined4 *)0x0;
      piStack_138 = (int *)0x0;
      puStack_13c = (undefined1 *)&piStack_130;
      FUN_004342bb();
      FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_13c;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puStack_13c = (undefined1 *)0x429a9a;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x90) = uVar4;
      puStack_134 = (undefined4 *)(unaff_EBP + -0x90);
      piStack_138 = (int *)0x429aaf;
      puStack_134 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_134 < 0) && (puStack_134 != (undefined4 *)0x80004002)) {
        piStack_138 = (int *)0x429abd;
        FUN_00878dfb();
      }
      puStack_134 = (undefined4 *)(unaff_EBP + -0x50);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_138 = (int *)0x429aca;
      iVar5 = FUN_00402bc3();
      puVar3 = puStack_134;
      if (iVar5 < 0) {
        piStack_138 = (int *)0x429ad5;
        puStack_134 = (undefined4 *)iVar5;
        FUN_00878dfb();
        puVar3 = (undefined4 *)extraout_ECX_00;
      }
      if (*(int *)(unaff_EBP + 0x18) != 0) {
        puStack_134 = (undefined4 *)0x0;
        piStack_138 = (int *)0x0;
        *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_13c;
        puStack_13c = (undefined1 *)puVar3;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x10;
        puStack_13c = (undefined1 *)0x429b18;
        iVar5 = FUN_004032b4();
        *(int *)(unaff_EBP + -0x8c) = iVar5;
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        if (iVar5 != 0) {
          puStack_134 = (undefined4 *)(unaff_EBP + -0x8c);
          piStack_138 = (int *)0x429b34;
          puStack_134 = (undefined4 *)FUN_0041a581();
          if (((int)puStack_134 < 0) && (puStack_134 != (undefined4 *)0x80004002)) {
            piStack_138 = (int *)0x429b42;
            FUN_00878dfb();
          }
        }
        puStack_134 = (undefined4 *)(unaff_EBP + -0x70);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        piStack_138 = (int *)0x429b4f;
        puStack_134 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_134 < 0) {
          piStack_138 = (int *)0x429b5a;
          FUN_00878dfb();
        }
        puStack_134 = (undefined4 *)0x3;
        piStack_138 = (int *)0xff;
        puStack_13c = (undefined1 *)0x429b69;
        FUN_004031b7();
        *(undefined1 *)(unaff_EBP + -4) = 0x13;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          puStack_134 = (undefined4 *)0x80004003;
          piStack_138 = (int *)0x429b7c;
          FUN_00878dfb();
        }
        piVar8 = *(int **)(unaff_EBP + -0x14);
        puStack_13c = *(undefined1 **)(unaff_EBP + -0x3c);
        piStack_138 = *(int **)(unaff_EBP + -0x38);
        puStack_134 = *(undefined4 **)(unaff_EBP + -0x34);
        puVar7 = (undefined1 *)(**(code **)(*piVar8 + 0x80))();
        if ((int)puVar7 < 0) {
          puStack_134 = (undefined4 *)&DAT_00963cc8;
          puStack_13c = puVar7;
          piStack_138 = piVar8;
          FUN_00878e09();
        }
        puStack_134 = (undefined4 *)(unaff_EBP + -0x40);
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        piStack_138 = (int *)0x429bb8;
        puStack_134 = (undefined4 *)FUN_00402bc3();
        if ((int)puStack_134 < 0) {
          piStack_138 = (int *)0x429bc3;
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 9;
        puStack_134 = (undefined4 *)0x429bcf;
        FUN_004125e6();
      }
    }
    else {
      puStack_134 = (undefined4 *)0x429bdb;
      FUN_0087a1b0();
      puStack_134 = (undefined4 *)0x0;
      piStack_138 = (int *)0x0;
      puStack_13c = (undefined1 *)&piStack_130;
      FUN_004342bb();
      FUN_00412335();
      *(undefined1 ***)(unaff_EBP + -0x28) = &puStack_13c;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      puStack_13c = (undefined1 *)0x429c28;
      uVar4 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + -0x88) = uVar4;
      puStack_134 = (undefined4 *)(unaff_EBP + -0x88);
      piStack_138 = (int *)0x429c3d;
      puStack_134 = (undefined4 *)FUN_0041a581();
      if (((int)puStack_134 < 0) && (puStack_134 != (undefined4 *)0x80004002)) {
        piStack_138 = (int *)0x429c4b;
        FUN_00878dfb();
      }
      puStack_134 = (undefined4 *)(unaff_EBP + -0x84);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      piStack_138 = (int *)0x429c5b;
      puStack_134 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_134 < 0) {
        piStack_138 = (int *)0x429c66;
        FUN_00878dfb();
      }
    }
    puStack_134 = (undefined4 *)0x3;
    piStack_138 = (int *)0xff;
    puStack_13c = (undefined1 *)0x429c75;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      puStack_134 = (undefined4 *)0x80004003;
      piStack_138 = (int *)0x429c89;
      FUN_00878dfb();
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        puStack_134 = (undefined4 *)0x80004003;
        piStack_138 = (int *)0x429c94;
        FUN_00878dfb();
      }
    }
    *(undefined4 *)(unaff_EBP + -0x74) = *(undefined4 *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      puStack_134 = (undefined4 *)0x80004003;
      piStack_138 = (int *)0x429ca5;
      FUN_00878dfb();
    }
    piVar8 = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x2c) = piVar8;
    *(undefined4 *)(unaff_EBP + -0x28) = *(undefined4 *)(unaff_EBP + -0x10);
    puStack_134 = (undefined4 *)0x429cb6;
    _rand();
    puStack_134 = (undefined4 *)0x429ce2;
    FUN_0040e53d();
    puStack_134 = (undefined4 *)0x429cec;
    FUN_0040eea9();
    puStack_13c = *(undefined1 **)(unaff_EBP + -0x5c);
    piStack_138 = *(int **)(unaff_EBP + -0x58);
    puStack_134 = *(undefined4 **)(unaff_EBP + -0x54);
    puVar7 = (undefined1 *)(**(code **)(*piVar8 + 0x80))();
    if ((int)puVar7 < 0) {
      puStack_134 = (undefined4 *)&DAT_00963cc8;
      piStack_138 = *(int **)(unaff_EBP + -0x2c);
      puStack_13c = puVar7;
      FUN_00878e09();
    }
    puStack_134 = (undefined4 *)(unaff_EBP + -0x60);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    piStack_138 = (int *)0x429d30;
    puStack_134 = (undefined4 *)FUN_00402bc3();
    if ((int)puStack_134 < 0) {
      piStack_138 = (int *)0x429d3b;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
  }
  *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x24) / 2;
  puStack_134 = &DAT_00980690;
  *(int *)(unaff_EBP + 0x18) = *(int *)(unaff_EBP + 0xc) + -0x2f;
  piStack_138 = (int *)0x429d76;
  FUN_00403191();
  puStack_134 = (undefined4 *)0x3;
  piStack_138 = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  puStack_13c = (undefined1 *)0x429d88;
  FUN_004031b7();
  bVar10 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  if (bVar10) {
    puStack_134 = (undefined4 *)0x80004003;
    piStack_138 = (int *)0x429d9e;
    FUN_00878dfb();
  }
  puStack_134 = (undefined4 *)(unaff_EBP + -0xc4);
  piStack_138 = (int *)(unaff_EBP + -0xb4);
  puStack_13c = (undefined1 *)0x0;
  FUN_0042a39f();
  puStack_134 = (undefined4 *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  piStack_138 = (int *)0x429dd0;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    piStack_138 = (int *)0x429ddb;
    FUN_00878dfb();
  }
  puStack_134 = (undefined4 *)(unaff_EBP + -0xc4);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_138 = (int *)0x429deb;
  puStack_134 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_134 < 0) {
    piStack_138 = (int *)0x429df6;
    FUN_00878dfb();
  }
  piStack_138 = *(int **)(unaff_EBP + 0x14);
  if (piStack_138 == (int *)0x0) {
    puStack_134 = (undefined4 *)0x80004003;
    piStack_138 = (int *)0x429e07;
    FUN_00878dfb();
    piStack_138 = *(int **)(unaff_EBP + 0x14);
  }
  iVar5 = *piStack_138;
  puStack_134 = (undefined4 *)0xc00614a4;
  *(int **)(unaff_EBP + 8) = piStack_138;
  puStack_13c = (undefined1 *)0x429e1b;
  iVar5 = (**(code **)(iVar5 + 0xb4))();
  if (iVar5 < 0) {
    puStack_13c = &DAT_00963df8;
    FUN_00878e09();
  }
  piVar8 = *(int **)(unaff_EBP + 0x14);
  if (piVar8 == (int *)0x0) {
    puStack_13c = (undefined1 *)0x80004003;
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + 0x14);
  }
  iVar5 = *piVar8;
  puStack_13c = (undefined1 *)0xffffffff;
  *(int **)(unaff_EBP + 8) = piVar8;
  iVar5 = (**(code **)(iVar5 + 0xe0))();
  if (iVar5 < 0) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x20;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1e;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1d;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1c;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  if (piVar8 == (int *)0x0) {
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + 0x14);
  }
  iVar5 = *piVar8;
  *(int **)(unaff_EBP + 8) = piVar8;
  iVar5 = (**(code **)(iVar5 + 0x90))();
  if (iVar5 < 0) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    FUN_00878dfb();
  }
  FUN_0042a378();
  FUN_004031b7();
  piVar8 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x29;
  if (piVar8 == (int *)0x0) {
    FUN_00878dfb();
    piVar8 = *(int **)(unaff_EBP + 0x14);
  }
  iVar5 = *piVar8;
  *(int **)(unaff_EBP + 8) = piVar8;
  iVar5 = (**(code **)(iVar5 + 0x90))();
  if (iVar5 < 0) {
    iStack_1a0 = *(undefined4 *)(unaff_EBP + 8);
    uStack_1a8 = 0x42a1fd;
    iStack_1a4 = iVar5;
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x28;
  iStack_1a0 = 0x42a20a;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1a0 = 0x42a215;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  iStack_1a0 = 0x42a222;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_1a0 = 0x42a22d;
    FUN_00878dfb();
  }
  iStack_1a0 = 0x42a237;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x40));
  iStack_1a0 = unaff_EBP + -0x40;
  iStack_1a4 = 0x42a241;
  iVar5 = FUN_00402e32();
  if (iVar5 < 0) {
    iStack_1a0 = 0x42a24d;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  iStack_1a0 = 0x42a25a;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x2b;
  if (*(int *)(unaff_EBP + 0x14) == 0) {
    iStack_1a0 = 0x42a26e;
    FUN_00878dfb();
  }
  piVar8 = *(int **)(unaff_EBP + 0x14);
  uStack_1a8 = *(undefined4 *)(unaff_EBP + -0x40);
  iStack_1a4 = *(undefined4 *)(unaff_EBP + -0x3c);
  iStack_1a0 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_1b8 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_1b4 = *(undefined4 *)(unaff_EBP + -0x4c);
  uStack_1b0 = *(undefined4 *)(unaff_EBP + -0x48);
  uStack_1bc = 0;
  uStack_1ac = *(undefined4 *)(unaff_EBP + -0x44);
  piStack_1c4 = (int *)0x42a294;
  piStack_1c0 = piVar8;
  iVar5 = (**(code **)(*piVar8 + 0x110))();
  if (iVar5 < 0) {
    piStack_1c4 = (int *)&DAT_00963df8;
    FUN_00878e09(iVar5,piVar8);
  }
  piStack_1c4 = (int *)(unaff_EBP + -0x50);
  *(undefined1 *)(unaff_EBP + -4) = 0x2a;
  piStack_1c4 = (int *)FUN_00402bc3();
  if ((int)piStack_1c4 < 0) {
    FUN_00878dfb();
  }
  piStack_1c4 = (int *)(unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  piStack_1c4 = (int *)FUN_00402bc3();
  if ((int)piStack_1c4 < 0) {
    FUN_00878dfb();
  }
  piStack_1c4 = *(int **)(unaff_EBP + 0x14);
  piVar8 = *(int **)(unaff_EBP + 0x14);
  *(int ***)(unaff_EBP + 0x18) = &piStack_1c4;
  if (piVar8 != (int *)0x0) {
    (**(code **)(*piVar8 + 4))(piVar8);
  }
  FUN_00427af9();
  piStack_1c4 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (piStack_1c4 != (int *)0x0) {
    (**(code **)(*piStack_1c4 + 8))();
  }
  piStack_1c4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (piStack_1c4 != (int *)0x0) {
    (**(code **)(*piStack_1c4 + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    piStack_1c4 = (int *)(*(int *)(unaff_EBP + -0x1c) + -0xc);
    FUN_00434e38();
  }
  piStack_1c4 = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_1c4 != (int *)0x0) {
    (**(code **)(*piStack_1c4 + 8))();
  }
  piStack_1c4 = *(int **)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_1c4 != (int *)0x0) {
    (**(code **)(*piStack_1c4 + 8))();
  }
  piStack_1c4 = *(int **)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_1c4 != (int *)0x0) {
    (**(code **)(*piStack_1c4 + 8))();
  }
LAB_0042a361:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


