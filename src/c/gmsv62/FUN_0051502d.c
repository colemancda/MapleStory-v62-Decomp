/* FUN_0051502d - 0x0051502d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0051502d(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_0051548c();
  }
  else {
    iVar1 = FUN_007c00e8();
    *(int *)(unaff_EBP + -0x20) = iVar1;
    iVar2 = FUN_007c00e8();
    *(int *)(unaff_EBP + -0x24) = iVar2;
    if ((iVar1 == 0) || (iVar2 == 0)) {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x18) + 0x744),(IBinding *)0x0);
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*(int *)(iVar1 + 4) + 0x10))();
      uVar5 = puVar3[1];
      *(undefined4 *)(unaff_EBP + -0x2c) = *puVar3;
      *(undefined4 *)(unaff_EBP + -0x28) = uVar5;
      puVar3 = (undefined4 *)(**(code **)(*(int *)(iVar2 + 4) + 0x10))();
      uVar5 = puVar3[1];
      *(undefined4 *)(unaff_EBP + -0x34) = *puVar3;
      *(undefined4 *)(unaff_EBP + -0x30) = uVar5;
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00403384();
      }
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00403384();
      }
      FUN_00486ada();
      FUN_0040ee87();
      piVar4 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (piVar4 == (int *)0x0) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x14);
      }
      iVar1 = *piVar4;
      *(int **)(unaff_EBP + -0x20) = piVar4;
      iVar1 = (**(code **)(iVar1 + 100))();
      if (iVar1 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      FUN_004125d9();
      *(undefined4 *)(unaff_EBP + -0x10) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_00679d86();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        FUN_00403384();
      }
      FUN_00486ada();
      FUN_0040ee87();
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (piVar4 == (int *)0x0) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar1 = *piVar4;
      *(int **)(unaff_EBP + -0x24) = piVar4;
      iVar1 = (**(code **)(iVar1 + 100))();
      if (iVar1 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iVar1 = FUN_00402bc3();
      if (iVar1 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004125d9();
      if (*(int *)(unaff_EBP + 8) == 0) {
        FUN_00878dfb();
      }
      iVar1 = (**(code **)(**(int **)(unaff_EBP + 8) + 0x40))();
      if (iVar1 < 0) {
        FUN_00878e09();
      }
      piVar4 = *(int **)(unaff_EBP + 8);
      if (piVar4 == (int *)0x0) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar4;
      *(int **)(unaff_EBP + -0x24) = piVar4;
      iVar1 = (**(code **)(iVar1 + 0x98))();
      if (iVar1 < 0) {
        FUN_00878e09();
      }
      piVar4 = *(int **)(unaff_EBP + 8);
      if (piVar4 == (int *)0x0) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + 8);
      }
      iVar1 = *piVar4;
      *(int **)(unaff_EBP + -0x24) = piVar4;
      iStack_bc = (**(code **)(iVar1 + 0x98))();
      if (iStack_bc < 0) {
        uStack_b8 = *(undefined4 *)(unaff_EBP + -0x24);
        uStack_c0 = 0x515326;
        FUN_00878e09();
      }
      uStack_b8 = 0xff;
      iStack_bc = 0xc00614a4;
      *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_c0;
      uStack_c4 = 0;
      uStack_c8 = 0x51533d;
      FUN_00424e0a();
      uStack_c4 = 0;
      uStack_c8 = 0;
      *(undefined4 **)(unaff_EBP + -0x28) = &uStack_cc;
      FUN_00433bdf(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      FUN_00679d86(unaff_EBP + -0x20,0x101e);
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      uVar5 = FUN_00411641(0);
      puVar3 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x24,uVar5);
      this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
             (*(int *)(unaff_EBP + -0x18) + 0x744);
      uStack_b8 = 0x515390;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
      FUN_00412600();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        uStack_b8 = 0x5153ac;
        FUN_00403384();
      }
      uStack_b8 = 0x5153bb;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      uStack_b8 = 0x5153c8;
      FUN_00403191();
      iVar1 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (iVar1 == 0) {
        uStack_b8 = 0x5153da;
        FUN_00878dfb();
      }
      piVar4 = *(int **)this;
      uStack_c0 = *(undefined4 *)(unaff_EBP + -0x3c);
      iStack_bc = *(undefined4 *)(unaff_EBP + -0x38);
      iVar1 = *piVar4;
      uStack_b8 = *(undefined4 *)(unaff_EBP + -0x34);
      uStack_cc = *(undefined4 *)(unaff_EBP + -0x48);
      uStack_c8 = *(undefined4 *)(unaff_EBP + -0x44);
      *(int **)(unaff_EBP + -0x24) = piVar4;
      uStack_c4 = *(undefined4 *)(unaff_EBP + -0x40);
      iVar1 = (**(code **)(iVar1 + 0x110))(piVar4,0x20,*(undefined4 *)(unaff_EBP + -0x4c));
      if (iVar1 < 0) {
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x24),&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x4c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iVar1 = FUN_00402bc3(unaff_EBP + -0x3c);
      if (iVar1 < 0) {
        FUN_00878dfb(iVar1);
      }
      FUN_004125d9();
      FUN_004125d9();
      FUN_004125d9();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


