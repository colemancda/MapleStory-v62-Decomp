/* FUN_007c69c5 - 0x007c69c5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Type propagation algorithm not settling */

void FUN_007c69c5(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int extraout_ECX;
  int unaff_EBP;
  bool bVar9;
  undefined *puStack_b4;
  int *piStack_b0;
  int aiStack_a8 [5];
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x30) = extraout_ECX;
  aiStack_a8[4] = 0x7c69ed;
  cVar1 = FUN_00433bfa();
  if ((cVar1 == '\0') && (*(int *)(unaff_EBP + 8) == DAT_0097c024)) {
    *(undefined4 *)(extraout_ECX + 0x1e80) = 0;
    aiStack_a8[4] = 0x7c6a0a;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e84),
               (IBinding *)0x0);
    *(undefined4 *)(extraout_ECX + 0x1e88) = 0;
  }
  else {
    *(undefined4 *)(extraout_ECX + 0x1e80) = *(undefined4 *)(unaff_EBP + 0xc);
    DAT_0097c024 = *(int *)(unaff_EBP + 8);
    aiStack_a8[4] = 0x7c6a34;
    FUN_00403191();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    aiStack_a8[4] = 0x7c6a40;
    FUN_00403191();
    aiStack_a8[4] = 0;
    aiStack_a8[3] = unaff_EBP + -0x60;
    aiStack_a8[2] = unaff_EBP + -0x70;
    *(int **)(unaff_EBP + -0x1c) = aiStack_a8 + 1;
    aiStack_a8[0] = 0x587;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    piStack_b0 = (int *)0x7c6a66;
    FUN_00679e4e();
    aiStack_a8[0] = unaff_EBP + -0x80;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    aiStack_a8[3] = 0x7c6a8c;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + 0xc) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x24) = 0;
    if (iVar2 != 0) {
      aiStack_a8[4] = 0x7c6aa2;
      iVar2 = FUN_00404b30();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        aiStack_a8[4] = 0x7c6ab3;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    aiStack_a8[4] = 0x7c6ac0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      aiStack_a8[4] = 0x7c6acb;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    aiStack_a8[4] = 0x7c6ad8;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      aiStack_a8[4] = 0x7c6ae3;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_a8[4] = 0x7c6af0;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      aiStack_a8[4] = 0x7c6afb;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    aiStack_a8[4] = unaff_EBP + -0x28;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    aiStack_a8[3] = 0x7c6b12;
    puVar3 = (undefined4 *)FUN_00679d22();
    aiStack_a8[4] = *puVar3;
    aiStack_a8[3] = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + 8) % 100;
    aiStack_a8[2] = 0x7c6b2f;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (*(int *)(unaff_EBP + -0x28) != 0) {
      aiStack_a8[4] = 0x7c6b46;
      FUN_00434e38();
    }
    aiStack_a8[4] = 0;
    aiStack_a8[3] = 0xffffffff;
    aiStack_a8[2] = *(undefined4 *)(unaff_EBP + -0x18);
    aiStack_a8[1] = 0;
    aiStack_a8[0] = 0;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    piStack_b0 = (int *)0x0;
    puStack_b4 = (undefined *)0xffffffff;
    uVar4 = FUN_00449713(aiStack_a8);
    uVar4 = FUN_00456ad5(uVar4);
    *(undefined ***)(unaff_EBP + 8) = &puStack_b4;
    FUN_004033a1(uVar4);
    iVar2 = unaff_EBP + -0x90;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0040263d(iVar2);
    FUN_004048a4(iVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    puStack_b4 = (undefined *)0x7c6baa;
    iVar2 = FUN_004032b4();
    *(int *)(unaff_EBP + -0x28) = iVar2;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    if (iVar2 != 0) {
      piStack_b0 = (int *)0x7c6bc0;
      iVar2 = FUN_0041a581();
      if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
        piStack_b0 = (int *)0x7c6bd1;
        FUN_00878dfb();
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_b0 = (int *)0x7c6be1;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_b0 = (int *)0x7c6bec;
      FUN_00878dfb();
    }
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_b0 = (int *)0x7c6bfc;
      FUN_00878dfb();
    }
    uVar4 = FUN_0040e48b();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = __ftol();
    *(undefined4 *)(unaff_EBP + 8) = uVar4;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_b0 = (int *)0x7c6c26;
      FUN_00878dfb();
    }
    uVar4 = FUN_0040e53d();
    *(undefined4 *)(unaff_EBP + -0x20) = uVar4;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    uVar4 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar4;
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_b0 = (int *)0x7c6c50;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_b0 = (int *)0x7c6c60;
      FUN_00878dfb();
    }
    piVar5 = (int *)(**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    *(double *)(unaff_EBP + -0x48) = (double)*piVar5;
    uVar6 = FUN_0040e48b();
    *(uint *)(unaff_EBP + -0x14) = uVar6 >> 1;
    iVar2 = FUN_0040eea9();
    *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x14) - iVar2;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iVar2 = __ftol();
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_b0 = (int *)0x7c6cb6;
      FUN_00878dfb();
    }
    *(int *)(unaff_EBP + -0x34) = *(int *)(unaff_EBP + -0x10);
    if (*(int *)(unaff_EBP + -0x10) == 0) {
      piStack_b0 = (int *)0x7c6cca;
      FUN_00878dfb();
    }
    *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(unaff_EBP + -0x10);
    iVar7 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x10))();
    *(double *)(unaff_EBP + -0x48) = (double)*(int *)(iVar7 + 4);
    iVar7 = FUN_0040eed0();
    iVar8 = FUN_0040e53d();
    *(int *)(unaff_EBP + -0x38) = iVar8 - iVar7;
    *(undefined4 *)(unaff_EBP + -0x34) = 0;
    iVar7 = __ftol();
    if (*(int *)(unaff_EBP + -0x2c) == 0) {
      iVar7 = iVar7 + -0x46;
    }
    piStack_b0 = (int *)0x7c6d1f;
    FUN_00403191();
    piStack_b0 = *(int **)(unaff_EBP + -0x10);
    puStack_b4 = (undefined *)0x7c6d2c;
    FUN_0040ee87();
    bVar9 = DAT_0097c1ac == 0;
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    if (bVar9) {
      piStack_b0 = (int *)0x7c6d42;
      FUN_00878dfb();
    }
    piStack_b0 = (int *)(unaff_EBP + -0x50);
    puStack_b4 = (undefined *)0x0;
    puVar3 = (undefined4 *)
             FUN_0042a39f(unaff_EBP + -0x2c,iVar2 - *(int *)(unaff_EBP + 8) / 2,
                          iVar7 - *(int *)(unaff_EBP + -0x1c) / 2,*(undefined4 *)(unaff_EBP + 8),
                          *(int *)(unaff_EBP + -0x1c));
    this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x30) + 0x1e84)
    ;
    piStack_b0 = (int *)0x7c6d86;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
    FUN_00412600();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piStack_b0 = (int *)0x7c6d9b;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_b0 = (int *)0x7c6da6;
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    piStack_b0 = (int *)0x7c6db3;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      piStack_b0 = (int *)0x7c6dbe;
      FUN_00878dfb();
    }
    if (*(int *)this == 0) {
      piStack_b0 = (int *)0x7c6dcc;
      FUN_00878dfb();
    }
    piVar5 = *(int **)this;
    puStack_b4 = (undefined *)0x7c6ddc;
    piStack_b0 = piVar5;
    iVar2 = (**(code **)(*piVar5 + 0xb4))();
    if (iVar2 < 0) {
      puStack_b4 = &DAT_00963df8;
      FUN_00878e09(iVar2,piVar5);
    }
    if (*(int *)this == 0) {
      puStack_b4 = (undefined *)0x80004003;
      FUN_00878dfb();
    }
    piVar5 = *(int **)this;
    puStack_b4 = (undefined *)0xffffffff;
    iVar2 = (**(code **)(*piVar5 + 0xe0))(piVar5);
    if (iVar2 < 0) {
      FUN_00878e09(iVar2,piVar5,&DAT_00963df8);
    }
    *(undefined4 *)(*(int *)(unaff_EBP + -0x30) + 0x1e88) = 1;
    piVar5 = *(int **)(unaff_EBP + -0x10);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00414ebb();
    piVar5 = *(int **)(unaff_EBP + -0x24);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


