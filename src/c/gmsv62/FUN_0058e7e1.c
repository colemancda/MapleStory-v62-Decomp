/* FUN_0058e7e1 - 0x0058e7e1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0058e7e1(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  bool bVar6;
  undefined4 uStack_138;
  int iStack_134;
  undefined4 uStack_130;
  int iStack_12c;
  undefined1 *puStack_128;
  int iStack_124;
  int *piStack_120;
  int *piStack_fc;
  undefined1 *puStack_f8;
  int iStack_f4;
  int local_f0;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x24) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  local_f0 = unaff_EBP + -0x2c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_f4 = 0x58e818;
  FUN_00679d86();
  local_f0 = unaff_EBP + -0x28;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_f4 = 0x58e82c;
  piVar1 = (int *)FUN_00679d86();
  local_f0 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_f4 = 0x58e849;
  FUN_0046febf();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int *)(unaff_EBP + -0x28) != 0) {
    local_f0 = 0x58e85d;
    FUN_00403384();
  }
  local_f0 = 0x58e86f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 4;
  local_f0 = 0x58e87f;
  FUN_00403191();
  local_f0 = 0;
  iStack_f4 = unaff_EBP + -0xb8;
  puStack_f8 = (undefined1 *)(unaff_EBP + -0xa8);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_fc = (int *)0x58e89b;
  FUN_00411641();
  *(int ***)(unaff_EBP + -0x1c) = &piStack_fc;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 5;
  FUN_00405a1d();
  FUN_00402660();
  FUN_00404a02();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_f4 = 0x58e8d0;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x78) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (iVar2 != 0) {
    local_f0 = 0x58e8e6;
    iVar2 = FUN_00404b30();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      local_f0 = 0x58e8f7;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  local_f0 = 0x58e907;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_f0 = 0x58e912;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  local_f0 = 0x58e922;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    local_f0 = 0x58e92d;
    FUN_00878dfb();
  }
  iVar2 = unaff_EBP + -0xb8;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  local_f0 = 0x58e93d;
  iVar3 = FUN_00402bc3();
  if (iVar3 < 0) {
    local_f0 = 0x58e948;
    FUN_00878dfb();
    iVar2 = extraout_ECX_00;
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (*(int *)(unaff_EBP + -0x2c) != 0) {
      local_f0 = 0x58e969;
      FUN_00403384();
    }
    FUN_00412600();
    FUN_00402fa6();
  }
  else {
    puStack_f8 = (undefined1 *)&local_f0;
    *(int **)(unaff_EBP + -0x1c) = &local_f0;
    iStack_f4 = 0x583;
    piStack_fc = (int *)0x58e993;
    local_f0 = iVar2;
    FUN_00679e4e();
    iStack_f4 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_f8 = (undefined1 *)0x58e9a3;
    FUN_0040263d();
    puStack_f8 = (undefined1 *)0x58e9aa;
    local_f0 = FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    iStack_f4 = 0x58e9b4;
    uVar4 = FUN_00412550();
    *(undefined4 *)(unaff_EBP + -0x28) = uVar4;
    iStack_f4 = unaff_EBP + -0x60;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puStack_f8 = (undefined1 *)0x58e9c4;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_f0 = 0x58e9d1;
      FUN_00878dfb();
    }
    local_f0 = 0x58e9da;
    FUN_00403191();
    local_f0 = 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    iStack_f4 = 0x58e9e9;
    FUN_004031b7();
    bVar6 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (bVar6) {
      local_f0 = 0x58e9ff;
      FUN_00878dfb();
    }
    local_f0 = unaff_EBP + -0x3c;
    iStack_f4 = 0;
    puStack_f8 = (undefined1 *)0x0;
    piStack_fc = (int *)0x0;
    puVar5 = (undefined4 *)FUN_0042a39f();
    local_f0 = 0x58ea25;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               (IBinding *)*puVar5);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    local_f0 = 0x58ea3a;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_f0 = 0x58ea45;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    local_f0 = 0x58ea52;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      local_f0 = 0x58ea5d;
      FUN_00878dfb();
    }
    local_f0 = 0x58ea6d;
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_004251cf();
    local_f0 = 0x58ea77;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              (this,*(IBinding **)(unaff_EBP + -0x10));
    local_f0 = 0x58ea82;
    piVar1 = (int *)FUN_004489f5();
    local_f0 = *piVar1;
    iStack_f4 = 0x58ea8f;
    FUN_0040ee87();
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    if (piVar1 == (int *)0x0) {
      local_f0 = 0x58eaa4;
      FUN_00878dfb();
      piVar1 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar1;
    puStack_f8 = *(undefined1 **)(unaff_EBP + -0x3c);
    iStack_f4 = *(undefined4 *)(unaff_EBP + -0x38);
    local_f0 = *(int *)(unaff_EBP + -0x34);
    *(int **)(unaff_EBP + -0x14) = piVar1;
    piStack_fc = piVar1;
    iVar2 = (**(code **)(iVar2 + 100))();
    if (iVar2 < 0) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00412600();
    FUN_004489f5();
    FUN_0040ee87();
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    if (piVar1 == (int *)0x0) {
      FUN_00878dfb();
      piVar1 = *(int **)(unaff_EBP + -0x10);
    }
    iVar2 = *piVar1;
    *(int **)(unaff_EBP + -0x20) = piVar1;
    iVar2 = (**(code **)(iVar2 + 0xfc))();
    if (iVar2 < 0) {
      piStack_120 = (int *)0x58eb4d;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00412600();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    iVar2 = (**(code **)(*piVar1 + 0xe0))();
    if (iVar2 < 0) {
      puStack_128 = (undefined1 *)0x58eb9f;
      iStack_124 = iVar2;
      piStack_120 = piVar1;
      FUN_00878e09();
    }
    piVar1 = (int *)0x0;
    while( true ) {
      FUN_0087a1b0();
      iStack_124 = 0x58ebb2;
      piStack_120 = piVar1;
      piStack_120 = (int *)FUN_00412335();
      *(undefined1 **)(unaff_EBP + -0x40) = &stack0xfffffee4;
      iStack_124 = 0x58ebc0;
      FUN_00402e8e();
      piStack_120 = (int *)(unaff_EBP + -200);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_124 = 0x58ebd3;
      FUN_0040263d();
      iStack_124 = 0x58ebda;
      FUN_004048a4();
      piStack_120 = (int *)(unaff_EBP + -0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_124 = 0x58ebe8;
      FUN_00412348();
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      piStack_120 = (int *)0x58ebf7;
      FUN_00417232();
      FUN_004027b3();
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_120 = (int *)0x58ec0f;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ec1a;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x14) == 0) break;
      piStack_120 = (int *)0x58ec2d;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_120 = (int *)0x58ec3a;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_120 = (int *)0x58ec4a;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      piStack_120 = (int *)0x58ec57;
      FUN_00403191();
      puStack_128 = (undefined1 *)&piStack_120;
      *(int ***)(unaff_EBP + -0x40) = &piStack_120;
      iStack_124 = 0x474;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      iStack_12c = 0x58ec73;
      FUN_00679e4e();
      iStack_124 = unaff_EBP + -0x98;
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      puStack_128 = (undefined1 *)0x58ec86;
      FUN_0040263d();
      puStack_128 = (undefined1 *)0x58ec8d;
      piStack_120 = (int *)FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      iStack_124 = 0x58ec97;
      piStack_120 = (int *)FUN_00412550();
      iStack_124 = 0x58eca4;
      FUN_004031b7();
      piStack_120 = (int *)(unaff_EBP + -0x70);
      iStack_124 = unaff_EBP + -0x88;
      puStack_128 = (undefined1 *)(unaff_EBP + -0x50);
      iStack_12c = unaff_EBP + -0x3c;
      iStack_134 = unaff_EBP + -0x14;
      *(undefined4 **)(unaff_EBP + -0x40) = &uStack_130;
      uStack_138 = 0x58ecca;
      FUN_00424dbc();
      iStack_134 = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 **)(unaff_EBP + -0x74) = &uStack_138;
      *(undefined1 *)(unaff_EBP + -4) = 0x21;
      FUN_004059fd(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x20;
      FUN_0058f0dd(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x22;
      uStack_130 = 0x58ecfb;
      uStack_130 = FUN_004458be();
      iStack_134 = unaff_EBP + -0xd8;
      uStack_138 = 0x58ed0b;
      FUN_00424e27();
      uStack_138 = 0x58ed12;
      FUN_004250ac();
      piStack_120 = (int *)0x58ed1e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ed29;
        FUN_00878dfb();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_120 = (int *)0x58ed3e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ed49;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1d;
      piStack_120 = (int *)0x58ed59;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ed64;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1c;
      piStack_120 = (int *)0x58ed71;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ed7c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      piStack_120 = (int *)0x58ed8c;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ed97;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1a;
      piStack_120 = (int *)0x58eda4;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58edaf;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x18;
      piStack_120 = (int *)0x58edbc;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58edc7;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
        piStack_120 = (int *)0x58edd8;
        (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
      }
      piVar1 = (int *)((int)piVar1 + 1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_004027eb();
    if (piVar1 == (int *)0x0) {
      piStack_120 = (int *)0x58ee84;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_120 = (int *)0x58ee91;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      piStack_120 = (int *)0x58eea1;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_120 = (int *)0x58eeae;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      piStack_120 = (int *)0x58eebb;
      FUN_00403191();
      piStack_120 = (int *)(unaff_EBP + -0x3c);
      iStack_124 = unaff_EBP + -0x88;
      puStack_128 = (undefined1 *)(unaff_EBP + -0x70);
      iStack_12c = unaff_EBP + -0x60;
      iStack_134 = unaff_EBP + -0x18;
      *(undefined4 **)(unaff_EBP + -0x74) = &uStack_130;
      uStack_138 = 0x58eee1;
      FUN_00424dbc();
      iStack_134 = *(undefined4 *)(unaff_EBP + -0x28);
      *(undefined4 **)(unaff_EBP + -0x40) = &uStack_138;
      *(undefined1 *)(unaff_EBP + -4) = 0x2a;
      FUN_004059fd(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      FUN_0058f0dd(unaff_EBP + -0x1c);
      *(undefined1 *)(unaff_EBP + -4) = 0x2b;
      uStack_130 = 0x58ef12;
      uStack_130 = FUN_004458be();
      iStack_134 = unaff_EBP + -0x98;
      uStack_138 = 0x58ef22;
      FUN_00424e27();
      uStack_138 = 0x58ef29;
      FUN_004250ac();
      piStack_120 = (int *)0x58ef35;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ef40;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x29;
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        piStack_120 = (int *)0x58ef51;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x28;
      piStack_120 = (int *)0x58ef5e;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ef69;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x27;
      piStack_120 = (int *)0x58ef76;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ef81;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x26;
      piStack_120 = (int *)0x58ef91;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ef9c;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x25;
      piStack_120 = (int *)0x58efa9;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58efb4;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
    }
    else {
      piStack_120 = (int *)0x58edfb;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      piStack_120 = (int *)0x58ee08;
      FUN_00403191();
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (piVar1 == (int *)0x0) {
        piStack_120 = (int *)0x58ee1d;
        FUN_00878dfb();
        piVar1 = *(int **)(unaff_EBP + -0x10);
      }
      puStack_128 = *(undefined1 **)(unaff_EBP + -0x70);
      iStack_124 = *(int *)(unaff_EBP + -0x6c);
      iVar2 = *piVar1;
      piStack_120 = *(int **)(unaff_EBP + -0x68);
      uStack_138 = *(undefined4 *)(unaff_EBP + -0x60);
      iStack_134 = *(int *)(unaff_EBP + -0x5c);
      uStack_130 = *(undefined4 *)(unaff_EBP + -0x58);
      *(int **)(unaff_EBP + -0x1c) = piVar1;
      iStack_12c = *(int *)(unaff_EBP + -0x54);
      iVar2 = (**(code **)(iVar2 + 0x110))(piVar1,0x20);
      if (iVar2 < 0) {
        piStack_120 = *(int **)(unaff_EBP + -0x1c);
        puStack_128 = (undefined1 *)0x58ee58;
        iStack_124 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      piStack_120 = (int *)0x58ee65;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        piStack_120 = (int *)0x58ee70;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
    }
    piStack_120 = (int *)0x58efc1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_120 = (int *)0x58efcc;
      FUN_00878dfb();
    }
    piStack_120 = (int *)0x58efd8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
    piStack_120 = (int *)(unaff_EBP + -0x3c);
    iStack_124 = 0x58efe2;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_120 = (int *)0x58efee;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piStack_120 = (int *)0x58eff8;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x50));
    piStack_120 = (int *)(unaff_EBP + -0x50);
    iStack_124 = 0x58f002;
    iVar2 = FUN_00402e32();
    if (iVar2 < 0) {
      piStack_120 = (int *)0x58f00e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2d;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_120 = (int *)0x58f022;
      FUN_00878dfb();
    }
    piVar1 = *(int **)(unaff_EBP + -0x10);
    puStack_128 = *(undefined1 **)(unaff_EBP + -0x3c);
    iStack_124 = *(undefined4 *)(unaff_EBP + -0x38);
    piStack_120 = *(int **)(unaff_EBP + -0x34);
    uStack_138 = *(undefined4 *)(unaff_EBP + -0x50);
    iStack_134 = *(undefined4 *)(unaff_EBP + -0x4c);
    uStack_130 = *(undefined4 *)(unaff_EBP + -0x48);
    iStack_12c = *(undefined4 *)(unaff_EBP + -0x44);
    iVar2 = (**(code **)(*piVar1 + 0x90))
                      (piVar1,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10));
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar1,&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x50);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar2 = FUN_00402bc3(unaff_EBP + -0x3c);
    if (iVar2 < 0) {
      FUN_00878dfb(iVar2);
    }
    piVar1 = *(int **)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00402676();
    piVar1 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    if (*(int *)(unaff_EBP + 8) != 0) {
      FUN_004030b1();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


