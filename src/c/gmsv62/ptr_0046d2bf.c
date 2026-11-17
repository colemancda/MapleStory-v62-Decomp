/* ptr_0046d2bf - 0x0046d2bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0046d2bf(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int *unaff_EBX;
  int unaff_EBP;
  uint uVar10;
  bool bVar11;
  undefined4 uStack_100;
  int *piStack_c8;
  int iStack_24;
  
  FUN_00434e38();
  (*DAT_0097b4c8)();
  FUN_0087a1b0();
  iStack_24 = -1;
  FUN_00449713();
  FUN_00456ad5();
  *(int **)(unaff_EBP + -0x30) = &iStack_24;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_24 = 0x46d329;
  piVar4 = (int *)FUN_004032b4();
  *(int **)(unaff_EBP + -0x100) = piVar4;
  *(int **)(unaff_EBP + -0x40) = unaff_EBX;
  if (((piVar4 != unaff_EBX) && (iVar5 = FUN_0041a581(), iVar5 < (int)unaff_EBX)) &&
     (iVar5 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x1c),
             *(IBinding **)(unaff_EBP + -0x40));
  FUN_004125e6();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
    FUN_00878dfb();
  }
  uVar6 = FUN_0040eea9();
  *(undefined4 *)(unaff_EBP + -0x44) = uVar6;
  if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
    FUN_00878dfb();
  }
  uVar6 = FUN_0040eed0();
  *(undefined4 *)(unaff_EBP + -0x40) = uVar6;
  if (*(int **)(unaff_EBP + 0x18) == unaff_EBX) {
    iStack_24 = 0x46d680;
    FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 0x2f;
  }
  else {
    iStack_24 = 0x46d663;
    FUN_00679e4e();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
  }
  *(int **)(unaff_EBP + -0x30) = &iStack_24;
  FUN_004059fd();
  *(undefined4 *)(unaff_EBP + -4) = 0x2f;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 0x31;
  iStack_24 = 0x46d6bf;
  uVar6 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar6;
  iVar5 = FUN_0041a581();
  if ((iVar5 < (int)unaff_EBX) && (iVar5 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  iVar5 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0x2f;
  iVar7 = FUN_00402bc3();
  if (iVar7 < (int)unaff_EBX) {
    FUN_00878dfb();
    iVar5 = extraout_ECX;
  }
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402fa6();
    iVar5 = extraout_ECX_00;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xf;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00402fa6();
    iVar5 = extraout_ECX_01;
  }
  *(int **)(unaff_EBP + -0x30) = &iStack_24;
  iStack_24 = iVar5;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x33;
  iStack_24 = 0x46d762;
  uVar6 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar6;
  iVar5 = FUN_00404b30();
  if ((iVar5 < (int)unaff_EBX) && (iVar5 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  iVar5 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar7 = FUN_00402bc3();
  if (iVar7 < (int)unaff_EBX) {
    FUN_00878dfb();
    iVar5 = extraout_ECX_02;
  }
  *(int **)(unaff_EBP + -0x30) = &iStack_24;
  iStack_24 = iVar5;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x35;
  iStack_24 = 0x46d7dc;
  uVar6 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0x18) = uVar6;
  iVar5 = FUN_00404b30();
  if ((iVar5 < (int)unaff_EBX) && (iVar5 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  iVar5 = unaff_EBP + -0xa0;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar7 = FUN_00402bc3();
  if (iVar7 < (int)unaff_EBX) {
    FUN_00878dfb();
    iVar5 = extraout_ECX_03;
  }
  if (*(int *)(unaff_EBP + 8) == 4) {
    if (*(int *)(unaff_EBP + 0x24) < *(int *)(unaff_EBP + 0x20)) {
      iStack_24 = 0x46d83c;
      FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
      *(undefined1 *)(unaff_EBP + -4) = 0x36;
    }
    else {
      iStack_24 = 0x46d856;
      FUN_00679e4e();
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
      *(undefined4 *)(unaff_EBP + -4) = 0x37;
    }
    *(int **)(unaff_EBP + -0x30) = &iStack_24;
    FUN_004059fd();
    *(undefined4 *)(unaff_EBP + -4) = 0x37;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined4 *)(unaff_EBP + -4) = 0x39;
    iStack_24 = 0x46d892;
    uVar6 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x20) = uVar6;
    iVar5 = FUN_0041a581();
    if ((iVar5 < (int)unaff_EBX) && (iVar5 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
      *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
      FUN_00402fa6();
    }
    bVar3 = *(byte *)(unaff_EBP + -0x10) & 4;
    *(undefined4 *)(unaff_EBP + -4) = 0xf;
joined_r0x0046d9d1:
    if (bVar3 != 0) {
      FUN_00402fa6();
    }
  }
  else {
    if (*(int *)(unaff_EBP + 8) == 5) {
      if (*(int *)(unaff_EBP + 0x24) < *(int *)(unaff_EBP + 0x20) + -1) {
        iStack_24 = 0x46d923;
        FUN_00679e4e();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x10;
        *(undefined1 *)(unaff_EBP + -4) = 0x3a;
      }
      else {
        iStack_24 = 0x46d93d;
        FUN_00679e4e();
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 0x20;
        *(undefined4 *)(unaff_EBP + -4) = 0x3b;
      }
      *(int **)(unaff_EBP + -0x30) = &iStack_24;
      FUN_004059fd();
      *(undefined4 *)(unaff_EBP + -4) = 0x3b;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined4 *)(unaff_EBP + -4) = 0x3d;
      iStack_24 = 0x46d979;
      uVar6 = FUN_004032b4();
      *(undefined4 *)(unaff_EBP + 0x20) = uVar6;
      iVar5 = FUN_0041a581();
      if ((iVar5 < (int)unaff_EBX) && (iVar5 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x3b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      if ((*(byte *)(unaff_EBP + -0x10) & 0x20) != 0) {
        *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xffffffdf;
        FUN_00402fa6();
      }
      bVar3 = *(byte *)(unaff_EBP + -0x10) & 0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0xf;
      goto joined_r0x0046d9d1;
    }
    *(int **)(unaff_EBP + 0x24) = &iStack_24;
    iStack_24 = iVar5;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x3f;
    iStack_24 = 0x46da15;
    uVar6 = FUN_004032b4();
    *(undefined4 *)(unaff_EBP + 0x20) = uVar6;
    iVar5 = FUN_0041a581();
    if ((iVar5 < (int)unaff_EBX) && (iVar5 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
  }
  iStack_24 = 0x46da5d;
  piVar4 = (int *)FUN_00679d86();
  iStack_24 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_0040381b();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
    FUN_00403384();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  if ((*(int **)(unaff_EBP + -0x1c) == unaff_EBX) &&
     (FUN_00878dfb(), *(int **)(unaff_EBP + -0x1c) == unaff_EBX)) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(int **)(unaff_EBP + 0x20) = piVar4;
  uVar6 = FUN_0040e53d();
  *(undefined4 *)(unaff_EBP + 0x24) = uVar6;
  FUN_0040e48b();
  iStack_24 = *(int *)(unaff_EBP + -0x54);
  iVar5 = (**(code **)(*piVar4 + 0x2c))();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_00403191();
  piVar4 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 0x43;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
    piVar4 = *(int **)(unaff_EBP + -0x14);
  }
  iVar5 = *piVar4;
  *(int **)(unaff_EBP + 0x20) = piVar4;
  iVar5 = (**(code **)(iVar5 + 0x80))();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  iVar5 = *(int *)(unaff_EBP + 8);
  if ((iVar5 == 1) || (iVar5 == 2)) {
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x44;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x14);
    }
    iVar5 = *piVar4;
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x45;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x14);
    }
    iVar5 = *piVar4;
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if (*(int **)(unaff_EBP + 0x28) == unaff_EBX) {
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      piStack_c8 = (int *)0xffffffff;
      FUN_00449713();
      FUN_00456ad5();
      *(int ***)(unaff_EBP + 0x18) = &piStack_c8;
      FUN_004033a1();
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      FUN_0040263d();
      FUN_004048a4();
      *(undefined1 *)(unaff_EBP + -4) = 0x49;
      piStack_c8 = (int *)0x46de2f;
      piVar4 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + 0x24) = piVar4;
      *(int **)(unaff_EBP + 0x20) = unaff_EBX;
      if (((piVar4 != unaff_EBX) && (iVar5 = FUN_0041a581(), iVar5 < (int)unaff_EBX)) &&
         (iVar5 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x20);
      piVar4 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x4a;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x14);
      }
      iVar5 = *piVar4;
      piStack_c8 = *(int **)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + 0x28) = piVar4;
      iVar5 = (**(code **)(iVar5 + 0x80))();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x47;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      (*DAT_0097b4c8)();
      FUN_0087a1b0();
      uStack_100 = 0xffffffff;
      uVar6 = FUN_00449713(&stack0xffffff0c);
      uVar6 = FUN_00456ad5(uVar6);
      *(undefined4 **)(unaff_EBP + 0x18) = &uStack_100;
      FUN_004033a1(uVar6);
      iVar5 = unaff_EBP + -0xa0;
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      FUN_0040263d(iVar5);
      FUN_004048a4(iVar5);
      *(undefined1 *)(unaff_EBP + -4) = 0x4d;
      uStack_100 = 0x46df67;
      piVar4 = (int *)FUN_004032b4();
      *(int **)(unaff_EBP + 0x24) = piVar4;
      *(int **)(unaff_EBP + 0x20) = unaff_EBX;
      if (((piVar4 != unaff_EBX) && (iVar5 = FUN_0041a581(), iVar5 < (int)unaff_EBX)) &&
         (iVar5 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
      *(undefined4 *)(unaff_EBP + 0x18) = *(undefined4 *)(unaff_EBP + 0x20);
      piVar4 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x4e;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x14);
      }
      iVar5 = *piVar4;
      uStack_100 = *(undefined4 *)(unaff_EBP + -0x28);
      *(int **)(unaff_EBP + 0x28) = piVar4;
      iVar5 = (**(code **)(iVar5 + 0x80))
                        (piVar4,*(int *)(unaff_EBP + -0x44) + 0x5a,
                         *(int *)(unaff_EBP + -0x40) + 0x2a,*(undefined4 *)(unaff_EBP + 0x18),
                         *(undefined4 *)(unaff_EBP + -0x2c));
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 0x4b;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
    }
    else {
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0x46;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x14);
      }
      iVar5 = *piVar4;
      *(int **)(unaff_EBP + 0x20) = piVar4;
      piStack_c8 = (int *)0x46dd94;
      iVar5 = (**(code **)(iVar5 + 0x80))();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
    }
  }
  else {
    if ((iVar5 != 4) && (iVar5 != 5)) goto LAB_0046e022;
    FUN_004031b7();
    piVar4 = *(int **)(unaff_EBP + -0x14);
    *(undefined1 *)(unaff_EBP + -4) = 0x4f;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
      piVar4 = *(int **)(unaff_EBP + -0x14);
    }
    iVar5 = *piVar4;
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
  }
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
LAB_0046e022:
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  FUN_004031b7();
  bVar11 = DAT_0097c1ac == unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x51;
  if (bVar11) {
    FUN_00878dfb();
  }
  puVar8 = (undefined4 *)FUN_0042a39f();
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 4);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar8);
  FUN_00412600();
  *(undefined1 *)(unaff_EBP + -4) = 0x50;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  piVar4 = *(int **)p_Var1;
  *(undefined1 *)(unaff_EBP + -4) = 0x52;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 4);
  iVar5 = *piVar4;
  *(int **)(unaff_EBP + 0x20) = piVar4;
  iVar5 = (**(code **)(iVar5 + 100))();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  puVar8 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 4);
  if (*(int **)(*(int *)(unaff_EBP + -0x18) + 4) == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar5 = (**(code **)(*(int *)*puVar8 + 0xe0))();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878e09();
  }
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  FUN_00403191();
  piVar4 = (int *)*puVar8;
  *(undefined1 *)(unaff_EBP + -4) = 0x57;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_004250ac();
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x56;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x55;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x54;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x53;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + 8) == 5) {
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff74;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x59;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x74) = piVar4;
    *(int **)(unaff_EBP + -0x38) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar5 = FUN_0041a581(), iVar5 < (int)unaff_EBX)) &&
       (iVar5 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff74;
    FUN_00679e4e();
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    FUN_0040263d();
    FUN_004048a4();
    *(undefined1 *)(unaff_EBP + -4) = 0x5d;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x7c) = piVar4;
    *(int **)(unaff_EBP + 0x28) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar5 = FUN_0041a581(), iVar5 < (int)unaff_EBX)) &&
       (iVar5 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    FUN_004031b7();
    bVar11 = DAT_0097c1ac == unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x61;
    if (bVar11) {
      FUN_00878dfb();
    }
    puVar8 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x10)
    ;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar8);
    if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x60;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    piVar4 = *(int **)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x62;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x10);
    iVar5 = *piVar4;
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar5 = (**(code **)(iVar5 + 100))();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    puVar8 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    if (*(int **)(*(int *)(unaff_EBP + -0x18) + 0x10) == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar5 = (**(code **)(*(int *)*puVar8 + 0xe0))();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 99;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 100;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    FUN_00403191();
    piVar4 = (int *)*puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x67;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_004250ac();
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x66;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x65;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 100;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 99;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    FUN_004031b7();
    bVar11 = DAT_0097c1ac == unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x69;
    if (bVar11) {
      FUN_00878dfb();
    }
    puVar8 = (undefined4 *)FUN_0042a39f();
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x14)
    ;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar8);
    if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x68;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_0040ee87();
    piVar4 = *(int **)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 0x6a;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    iVar5 = *piVar4;
    *(int **)(unaff_EBP + 0x20) = piVar4;
    iVar5 = (**(code **)(iVar5 + 100))();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x14);
    puVar8 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x14);
    *(undefined4 **)(unaff_EBP + 0x18) = puVar8;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar5 = (**(code **)(*(int *)*puVar8 + 0xe0))();
    if (iVar5 < (int)unaff_EBX) {
      piStack_c8 = (int *)0x46e6f1;
      FUN_00878e09();
    }
    VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
    iVar5 = FUN_00402e32();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    FUN_00403191();
    piVar4 = (int *)*puVar8;
    *(undefined1 *)(unaff_EBP + -4) = 0x6f;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    piStack_c8 = (int *)(unaff_EBP + -0x2c);
    FUN_004250ac();
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6e;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6d;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6c;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x6b;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5f;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    uVar10 = -(uint)(*(int *)(unaff_EBP + 0x14) != 0) & *(int *)(unaff_EBP + 0x14) - 0xcU;
    *(undefined4 *)(unaff_EBP + 0x24) = *(undefined4 *)(uVar10 + 300);
    puVar8 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x10);
    piVar4 = (int *)*puVar8;
    *(undefined4 **)(unaff_EBP + 0x20) = puVar8;
    if (piVar4 == unaff_EBX) {
      FUN_00878dfb();
    }
    iVar5 = *(int *)**(undefined4 **)(unaff_EBP + 0x20);
    *(int **)(unaff_EBP + 0x20) = (int *)**(undefined4 **)(unaff_EBP + 0x20);
    iVar5 = (**(code **)(iVar5 + 0xb4))();
    if (iVar5 < (int)unaff_EBX) {
      piStack_c8 = *(int **)(unaff_EBP + 0x20);
      FUN_00878e09();
    }
    puVar8 = *(undefined4 **)(unaff_EBP + 0x18);
    piVar4 = (int *)*puVar8;
    *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(uVar10 + 300);
    if (piVar4 == unaff_EBX) {
      piStack_c8 = (int *)0x46e8ae;
      FUN_00878dfb();
    }
    piStack_c8 = (int *)*puVar8;
    iVar5 = (**(code **)(*piStack_c8 + 0xb4))();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    if (*(int **)(unaff_EBP + -0x70) != unaff_EBX) {
      VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
      iVar5 = FUN_00402e32();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      FUN_004031b7();
      bVar11 = DAT_0097c1ac == unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x71;
      if (bVar11) {
        FUN_00878dfb();
      }
      puVar8 = (undefined4 *)FUN_0042a39f();
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
               (*(int *)(unaff_EBP + -0x18) + 0x18);
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar8);
      if (*(int **)(unaff_EBP + 0x20) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + 0x20) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x70;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined2 *)(unaff_EBP + -0x90) = 0xd;
      *(int **)(unaff_EBP + -0x88) = *(int **)(unaff_EBP + 0x14);
      (**(code **)(**(int **)(unaff_EBP + 0x14) + 4))();
      piVar4 = *(int **)p_Var1;
      *(undefined1 *)(unaff_EBP + -4) = 0x72;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar5 = *piVar4;
      *(int **)(unaff_EBP + 0x20) = piVar4;
      iVar5 = (**(code **)(iVar5 + 100))();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      puVar8 = (undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x18);
      *(undefined4 **)(unaff_EBP + 0x18) = puVar8;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
      }
      iVar5 = (**(code **)(*(int *)*puVar8 + 0xe0))();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      iVar5 = *(int *)(unaff_EBP + -0x18);
      if (*(int **)(iVar5 + 0x10) == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = (int *)*puVar8;
      *(undefined4 *)(unaff_EBP + 0x20) = *(undefined4 *)(iVar5 + 0x10);
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = (int *)*puVar8;
      FUN_004320e3();
      iVar5 = (**(code **)(*piVar4 + 0xb4))();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(int **)(unaff_EBP + 0x24) = unaff_EBX;
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      *(int **)(unaff_EBP + 0x20) = unaff_EBX;
      while( true ) {
        if (*(int **)(unaff_EBP + -0x70) == unaff_EBX) {
          FUN_00878dfb();
        }
        uVar10 = FUN_0040cf4d();
        if (uVar10 <= *(uint *)(unaff_EBP + 0x20)) break;
        FUN_0087a1b0();
        FUN_00412335();
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff54;
        FUN_00402e8e();
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        FUN_00412348();
        *(undefined1 *)(unaff_EBP + -4) = 0x76;
        iVar5 = FUN_0041a485();
        if ((iVar5 < (int)unaff_EBX) && (iVar5 != -0x7fffbffe)) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xb8) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0xb8) + 8))();
        }
        *(undefined1 **)(unaff_EBP + -0x30) = &stack0xffffff50;
        FUN_00679e4e();
        *(undefined1 *)(unaff_EBP + -4) = 0x77;
        FUN_004115d9();
        FUN_00404e7f();
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        FUN_0040263d();
        FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 0x7a;
        uVar6 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0xcc) = uVar6;
        *(undefined1 *)(unaff_EBP + -4) = 0x79;
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        if (*(int **)(unaff_EBP + -0xc0) != unaff_EBX) {
          (**(code **)(**(int **)(unaff_EBP + -0xc0) + 8))();
        }
        VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
        iVar5 = FUN_00402e32();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
        iVar5 = FUN_00402e32();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        VariantInit((VARIANTARG *)(unaff_EBP + -0xe0));
        iVar5 = FUN_00402e32();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        VariantInit((VARIANTARG *)(unaff_EBP + -0x90));
        iVar5 = FUN_00402e32();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        FUN_004031b7();
        piVar4 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
        *(undefined1 *)(unaff_EBP + -4) = 0x7f;
        if (piVar4 == unaff_EBX) {
          FUN_00878dfb();
        }
        piStack_c8 = (int *)0x46ecc2;
        FUN_004250ac();
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7e;
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7d;
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7c;
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x7b;
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x75;
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(undefined1 *)(unaff_EBP + -4) = 0x73;
        iVar5 = FUN_00402bc3();
        if (iVar5 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 0x20) = *(int *)(unaff_EBP + 0x20) + 1;
      }
      VariantInit((VARIANTARG *)(unaff_EBP + -0x58));
      iVar5 = FUN_00402e32();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
      iVar5 = FUN_00402e32();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      piVar4 = (int *)**(undefined4 **)(unaff_EBP + 0x18);
      *(undefined1 *)(unaff_EBP + -4) = 0x81;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
      }
      piStack_c8 = *(int **)(unaff_EBP + -0x2c);
      piVar4 = *(int **)(*(int *)(unaff_EBP + -0x18) + 0x18);
      iVar5 = *piVar4;
      *(int **)(unaff_EBP + 0x20) = piVar4;
      iVar5 = (**(code **)(iVar5 + 0x110))();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x80;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x73;
      iVar5 = FUN_00402bc3();
      if (iVar5 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x5f;
      if (*(int **)(unaff_EBP + 0x24) != unaff_EBX) {
        (**(code **)(**(int **)(unaff_EBP + 0x24) + 8))();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x5b;
    if (*(int **)(unaff_EBP + 0x28) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + 0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
    }
  }
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  *(int **)(unaff_EBP + -0x48) = unaff_EBX;
  FUN_004184ca();
  *(int **)(*(int *)(unaff_EBP + -0x18) + 0x58) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar5 = FUN_00402e32();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff74;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x84;
  FUN_0044974c();
  uVar6 = FUN_0047077a();
  *(undefined4 *)(unaff_EBP + 0x20) = uVar6;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  FUN_0046fcad();
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
  iVar5 = FUN_00402e32();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  FUN_00449749();
  FUN_00411641();
  *(undefined1 **)(unaff_EBP + 0x18) = &stack0xffffff70;
  FUN_004033a1();
  *(undefined1 *)(unaff_EBP + -4) = 0x88;
  *(int *)(unaff_EBP + 0x24) = *(int *)(unaff_EBP + -0x44) + 8;
  FUN_004115d9();
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x87;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x86;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x48) == unaff_EBX) {
    uVar10 = 0;
  }
  else {
    uVar10 = (uint)(*(int **)(unaff_EBP + -0x48))[-1] >> 1;
  }
  if (*(int *)(unaff_EBP + 0x20) < (int)uVar10) {
    FUN_0046fc90();
    *(undefined1 *)(unaff_EBP + -4) = 0x8a;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    FUN_00402676();
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff78;
    FUN_0046fcc9();
    uVar6 = FUN_007d381d();
    *(undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x58) = uVar6;
    VariantInit((VARIANTARG *)(unaff_EBP + -0x2c));
    iVar5 = FUN_00402e32();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_00449749();
    FUN_00411641();
    *(undefined1 **)(unaff_EBP + 0x20) = &stack0xffffff70;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x8c;
    FUN_004115d9();
    FUN_00448e3a();
    *(undefined1 *)(unaff_EBP + -4) = 0x8b;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x86;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
  }
  if (*(int **)(unaff_EBP + -0x1c) == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar7 = FUN_0040e48b();
  piVar4 = *(int **)(unaff_EBP + -0x1c);
  iVar5 = *(int *)(unaff_EBP + -0x18);
  *(int *)(iVar5 + 0x48) = iVar7 / -2;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  iVar9 = FUN_0040e53d();
  iVar7 = *(int *)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar5 + 0x4c) = -iVar9;
  if (((iVar2 == 4) && ((int)unaff_EBX < *(int *)(unaff_EBP + 0x1c))) ||
     (*(int *)(unaff_EBP + 8) == 5)) {
    *(int *)(iVar5 + 0x4c) = -iVar9 + 7 + iVar7;
  }
  FUN_0046f8b1();
  *(undefined4 *)(iVar5 + 0x54) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0x83;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0x82;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (*(int **)(unaff_EBP + -0x80) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x80) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (*(int **)(unaff_EBP + -0xbc) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0xbc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  if (*(int **)(unaff_EBP + -0xc4) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0xc4) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x6c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x6c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -200) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -200) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  if (*(int **)(unaff_EBP + -0xb0) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0xb0) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (*(int **)(unaff_EBP + -0x1c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  if (*(int **)(unaff_EBP + -0x14) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x70) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x70) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 3;
  if (*(int **)(unaff_EBP + -0x78) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x78) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + -0xa8) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0xa8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x3c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x3c) + 8))();
  }
  if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
    FUN_004030b1();
  }
  FUN_004115a0();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


