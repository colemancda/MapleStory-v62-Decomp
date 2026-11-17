/* FUN_0075699b - 0x0075699b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0075699b(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 0xc);
  iVar6 = *(int *)(unaff_EBP + 0x10);
  iVar2 = *(int *)(unaff_EBP + 0x1c);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(int *)(extraout_ECX + 0x14) = iVar4;
  *(int *)(extraout_ECX + 0x18) = iVar6;
  if (iVar2 == 0) {
    if (iVar4 < 0) {
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      iVar4 = 0;
    }
    if (iVar6 < 0) {
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      iVar6 = 0;
    }
    if (799 < *(int *)(extraout_ECX + 0xc) + iVar4) {
      *(int *)(unaff_EBP + 0xc) = 799 - *(int *)(extraout_ECX + 0xc);
    }
    if (599 < iVar6 + *(int *)(extraout_ECX + 8)) {
      *(int *)(unaff_EBP + 0x10) = 599 - *(int *)(extraout_ECX + 8);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 4;
    FUN_00403191(&DAT_00980690);
    iVar4 = *(int *)(unaff_EBP + 0x18);
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    if (bVar7) {
      FUN_00878dfb(0x80004003);
    }
    puVar3 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x10,*(undefined4 *)(unaff_EBP + 0xc),
                          *(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(extraout_ECX + 0xc),
                          *(undefined4 *)(extraout_ECX + 8),(-(uint)(iVar4 != 0) & 200) + 10,
                          unaff_EBP + -0x30,unaff_EBP + -0x20);
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x10);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    puVar3 = (undefined4 *)FUN_00485656(unaff_EBP + 0xc);
    uVar8 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 6;
    FUN_0040ee87(uVar8,1);
    iVar4 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)p_Var1;
    iVar4 = *piVar5;
    *(int **)(unaff_EBP + 0x10) = piVar5;
    iVar4 = (**(code **)(iVar4 + 100))
                      (piVar5,*(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_004125d9();
  }
  else {
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_00403191(&DAT_00980690);
    iVar4 = *(int *)(unaff_EBP + 0x18);
    bVar7 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (bVar7) {
      FUN_00878dfb(0x80004003);
    }
    puVar3 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x10,0,0,*(undefined4 *)(extraout_ECX + 0xc),
                          *(undefined4 *)(extraout_ECX + 8),-(iVar4 != 0) & 0xd2,unaff_EBP + -0x20,
                          unaff_EBP + -0x30);
    p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x10);
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    FUN_00403191(&DAT_00980690);
    *(undefined4 *)(unaff_EBP + -4) = 2;
    FUN_00403191(&DAT_00980690);
    iVar4 = *(int *)p_Var1;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar4 == 0) {
      FUN_00878dfb(0x80004003);
    }
    piVar5 = *(int **)p_Var1;
    iVar4 = *piVar5;
    *(int **)(unaff_EBP + 0x18) = piVar5;
    iVar4 = (**(code **)(iVar4 + 0x90))
                      (piVar5,*(undefined4 *)(unaff_EBP + 0xc),*(undefined4 *)(unaff_EBP + 0x10),
                       *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                       *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                       *(undefined4 *)(unaff_EBP + -0x20),*(undefined4 *)(unaff_EBP + -0x1c),
                       *(undefined4 *)(unaff_EBP + -0x18),*(undefined4 *)(unaff_EBP + -0x14));
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x18),&DAT_00963de8);
    }
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x30);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar4 = FUN_00402bc3(unaff_EBP + -0x20);
    if (iVar4 < 0) {
      FUN_00878dfb(iVar4);
    }
  }
  FUN_004031b7(0,3);
  iVar4 = *(int *)(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 8;
  *(int *)(unaff_EBP + 0xc) = extraout_ECX + 0x10;
  if (iVar4 == 0) {
    FUN_00878dfb(0x80004003);
  }
  FUN_00425067(unaff_EBP + 0x1c,unaff_EBP + -0x40);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar4 = FUN_00402bc3(unaff_EBP + -0x40);
  if (iVar4 < 0) {
    FUN_00878dfb(iVar4);
  }
  if (*(int *)(unaff_EBP + 0x1c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  piVar5 = *(int **)(unaff_EBP + 0x1c);
  iVar4 = (**(code **)(*piVar5 + 0x8c))
                    (piVar5,0,0,*(undefined4 *)(extraout_ECX + 0xc),
                     *(undefined4 *)(extraout_ECX + 8),0xa0000040);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,piVar5,&DAT_00963cc8);
  }
  piVar5 = *(int **)(unaff_EBP + 0x1c);
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar5 = *(int **)(unaff_EBP + 0x1c);
  }
  iVar4 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar4 + 0x8c))(piVar5,0,0,1,1,0xffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
  }
  piVar5 = *(int **)(unaff_EBP + 0x1c);
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar5 = *(int **)(unaff_EBP + 0x1c);
  }
  iVar4 = *(int *)(extraout_ECX + 0xc);
  iVar6 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar6 + 0x8c))(piVar5,iVar4 + -1,0,1,1,0xffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
  }
  piVar5 = *(int **)(unaff_EBP + 0x1c);
  if (piVar5 == (int *)0x0) {
    FUN_00878dfb(0x80004003);
    piVar5 = *(int **)(unaff_EBP + 0x1c);
  }
  iVar4 = *(int *)(extraout_ECX + 8);
  iVar6 = *piVar5;
  *(int **)(unaff_EBP + 0x10) = piVar5;
  iVar4 = (**(code **)(iVar6 + 0x8c))(piVar5,0,iVar4 + -1,1,1,0xffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + 0x1c) == 0) {
    FUN_00878dfb(0x80004003);
  }
  iVar4 = *(int *)(extraout_ECX + 8);
  iVar6 = *(int *)(extraout_ECX + 0xc);
  *(int **)(unaff_EBP + 0x10) = *(int **)(unaff_EBP + 0x1c);
  iVar4 = (**(code **)(**(int **)(unaff_EBP + 0x1c) + 0x8c))
                    (*(undefined4 *)(unaff_EBP + 0x1c),iVar6 + -1,iVar4 + -1,1,1,0xffffff);
  if (iVar4 < 0) {
    FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
  }
  if (*(int *)(unaff_EBP + 0x14) != 0) {
    piVar5 = *(int **)(unaff_EBP + 0x1c);
    if (piVar5 == (int *)0x0) {
      FUN_00878dfb(0x80004003);
      piVar5 = *(int **)(unaff_EBP + 0x1c);
    }
    iVar4 = *(int *)(extraout_ECX + 8);
    iVar6 = *piVar5;
    *(int **)(unaff_EBP + 0x10) = piVar5;
    iVar4 = (**(code **)(iVar6 + 0x8c))(piVar5,1,2,1,iVar4 + -4,0xffffff);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
    }
    if (*(int *)(unaff_EBP + 0x1c) == 0) {
      FUN_00878dfb(0x80004003);
    }
    iVar4 = *(int *)(extraout_ECX + 8);
    iVar6 = *(int *)(extraout_ECX + 0xc);
    *(int **)(unaff_EBP + 0x10) = *(int **)(unaff_EBP + 0x1c);
    iVar4 = (**(code **)(**(int **)(unaff_EBP + 0x1c) + 0x8c))
                      (*(undefined4 *)(unaff_EBP + 0x1c),iVar6 + -2,2,1,iVar4 + -4,0xffffff);
    if (iVar4 < 0) {
      FUN_00878e09(iVar4,*(undefined4 *)(unaff_EBP + 0x10),&DAT_00963cc8);
    }
    if (*(int *)(unaff_EBP + 0x1c) == 0) {
      FUN_00878dfb(0x80004003);
    }
    FUN_005039eb(2,1,*(int *)(extraout_ECX + 0xc) + -4,1,0xffffff);
    uVar10 = 0xffffff;
    iVar4 = *(int *)(extraout_ECX + 0xc) + -4;
    uVar9 = 1;
    iVar6 = *(int *)(extraout_ECX + 8) + -2;
    uVar8 = 2;
    FUN_004115d9(2,iVar6,iVar4,1,0xffffff);
    FUN_005039eb(uVar8,iVar6,iVar4,uVar9,uVar10);
  }
  uVar8 = 0xffffffff;
  FUN_00424e27(0xffffffff);
  FUN_00444e05(uVar8);
  FUN_0046fc23(unaff_EBP + 0x1c);
  FUN_004125e6();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


