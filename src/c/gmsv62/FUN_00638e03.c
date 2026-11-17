/* FUN_00638e03 - 0x00638e03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int * FUN_00638e03(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int extraout_ECX;
  undefined1 *extraout_ECX_00;
  undefined1 *puVar6;
  undefined1 *extraout_ECX_01;
  int unaff_EBP;
  undefined1 *puStack_c8;
  int iStack_c4;
  undefined1 *puStack_c0;
  int iStack_bc;
  
  FUN_00879bb8();
  iVar4 = *(int *)(extraout_ECX + 0xc);
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  if (iVar4 == 0) {
    piVar5 = *(int **)(unaff_EBP + 8);
    *piVar5 = 0;
    goto LAB_006391fd;
  }
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  iStack_bc = unaff_EBP + -0x18;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puStack_c0 = (undefined1 *)0x638e4b;
  puVar2 = (undefined4 *)FUN_00679d86();
  iStack_bc = *puVar2;
  puStack_c0 = (undefined1 *)(unaff_EBP + -0x20);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_c4 = 0x638e5e;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_bc = 0x638e75;
    FUN_00403384();
  }
  iStack_bc = 0x638e87;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_bc = 0x638e94;
  FUN_00403191();
  iStack_bc = 0;
  puStack_c0 = (undefined1 *)(unaff_EBP + -0x84);
  iStack_c4 = unaff_EBP + -100;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  puStack_c8 = (undefined1 *)0x638ead;
  uVar3 = FUN_00411641();
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_c8;
  FUN_004033a1(uVar3);
  iVar4 = unaff_EBP + -0x94;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_00405a1d(iVar4);
  FUN_00402660();
  FUN_00404a02(iVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  puStack_c0 = (undefined1 *)0x638ee2;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x2c) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar4 != 0) {
    iStack_bc = 0x638ef8;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_bc = 0x638f09;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_bc = 0x638f19;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_bc = 0x638f24;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_bc = 0x638f31;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_bc = 0x638f3c;
    FUN_00878dfb();
  }
  puVar6 = (undefined1 *)(unaff_EBP + -0x84);
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iStack_bc = 0x638f4c;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_bc = 0x638f57;
    FUN_00878dfb();
    puVar6 = extraout_ECX_00;
  }
  iStack_bc = 0;
  puStack_c8 = (undefined1 *)&puStack_c0;
  *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_c0;
  iStack_c4 = 0x3b4;
  puStack_c0 = puVar6;
  FUN_00679e4e();
  iStack_c4 = unaff_EBP + -0xa4;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  puStack_c8 = (undefined1 *)0x638f7f;
  FUN_0040263d();
  puStack_c8 = (undefined1 *)0x638f86;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  puStack_c0 = (undefined1 *)0x638f91;
  iVar4 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x30) = iVar4;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  if (iVar4 != 0) {
    iStack_bc = 0x638fa7;
    iVar4 = FUN_00404b30();
    if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
      iStack_bc = 0x638fb8;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_bc = 0x638fc8;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_bc = 0x638fd3;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    piVar5 = *(int **)(unaff_EBP + 8);
    *piVar5 = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
    FUN_004027eb();
    FUN_004027eb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + -0x20) != 0) {
      iStack_bc = 0x63900b;
      FUN_00403384();
    }
    goto LAB_006391fd;
  }
  puStack_c0 = &stack0xffffff48;
  *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff48;
  iStack_bc = 0x3b5;
  iStack_c4 = 0x639024;
  FUN_00679e4e();
  iStack_bc = unaff_EBP + -0x40;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  puStack_c0 = (undefined1 *)0x639034;
  FUN_0040263d();
  puStack_c0 = (undefined1 *)0x63903b;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(short *)(unaff_EBP + -0x40) == 8) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    iStack_bc = unaff_EBP + -0x14;
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    puStack_c0 = (undefined1 *)0x639061;
    puVar2 = (undefined4 *)FUN_00679d86();
    iStack_bc = *puVar2;
    puStack_c0 = (undefined1 *)(unaff_EBP + -0x18);
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    iStack_c4 = 0x639074;
    FUN_0041354c();
    *(undefined1 *)(unaff_EBP + -4) = 0x11;
    FUN_00402676();
    iStack_bc = 0x63908c;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x13;
    iStack_bc = 0x639099;
    FUN_00403191();
    iStack_bc = 0;
    puStack_c0 = (undefined1 *)(unaff_EBP + -0x54);
    iStack_c4 = unaff_EBP + -0x74;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    puStack_c8 = (undefined1 *)0x6390af;
    uVar3 = FUN_00411641();
    *(undefined1 ***)(unaff_EBP + -0x44) = &puStack_c8;
    puStack_c8 = extraout_ECX_01;
    FUN_004033a1(uVar3);
    iVar4 = unaff_EBP + -0xb4;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    FUN_00405a1d(iVar4);
    FUN_00402660();
    FUN_00404a02(iVar4);
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    puStack_c0 = (undefined1 *)0x6390e4;
    iVar4 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x14) = iVar4;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar4 != 0) {
      iStack_bc = 0x6390fa;
      iVar4 = FUN_00404b30();
      if ((iVar4 < 0) && (iVar4 != -0x7fffbffe)) {
        iStack_bc = 0x63910b;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x1a;
    iStack_bc = 0x63911b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_bc = 0x639126;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x19;
    iStack_bc = 0x639133;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_bc = 0x63913e;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x18;
    iStack_bc = 0x63914b;
    iVar4 = FUN_00402bc3();
    if (iVar4 < 0) {
      iStack_bc = 0x639156;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x24) != 0) {
      iStack_bc = 0x639180;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 *(IBinding **)(unaff_EBP + -0x24));
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
        iStack_bc = 0x639191;
        (**(code **)(**(int **)(unaff_EBP + -0x24) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_00402676();
      goto LAB_0063919d;
    }
    piVar5 = *(int **)(unaff_EBP + 8);
    *piVar5 = 0;
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_00402676();
  }
  else {
LAB_0063919d:
    piVar1 = *(int **)(unaff_EBP + -0x10);
    piVar5 = *(int **)(unaff_EBP + 8);
    *piVar5 = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      iStack_bc = 0x6391af;
      (**(code **)(*piVar1 + 4))();
    }
    *(undefined4 *)(unaff_EBP + -0x28) = 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  iStack_bc = 0x6391c3;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_bc = 0x6391ce;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    iStack_bc = 0x6391df;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_bc = 0x6391f0;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
LAB_006391fd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return piVar5;
}


