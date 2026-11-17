/* FUN_00432fbb - 0x00432fbb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00432fbb(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  double dVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  
  FUN_00879bb8();
  iVar2 = *(int *)(unaff_EBP + 8);
  if (iVar2 == extraout_ECX[1] || iVar2 - extraout_ECX[1] < 0) {
    iVar4 = extraout_ECX[5];
    *(int **)(unaff_EBP + -0x14) = extraout_ECX + 5;
    if ((iVar4 == 0) && (iVar2 != *extraout_ECX && -1 < iVar2 - *extraout_ECX)) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00679e4e();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00437222();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402fa6();
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00403191();
      piVar3 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0x90))();
      if (iVar2 < 0) {
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3();
      if (iVar2 < 0) {
        FUN_00878dfb();
      }
      FUN_00403191();
      iVar2 = extraout_ECX[7];
      *(int *)(unaff_EBP + -0x10) = iVar2;
      dVar1 = (double)*(int *)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar2 < 0) {
        dVar1 = dVar1 + _DAT_008e8ae8;
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      *(double *)(unaff_EBP + -0x1c) = dVar1;
      if (piVar3 == (int *)0x0) {
        FUN_00878dfb();
        piVar3 = *(int **)(unaff_EBP + 8);
      }
      iVar2 = *piVar3;
      *(int **)(unaff_EBP + -0x10) = piVar3;
      iVar2 = (**(code **)(iVar2 + 0xa0))();
      if (iVar2 < 0) {
        uStack_84 = *(undefined4 *)(unaff_EBP + -0x10);
        iStack_8c = 0x43314d;
        iStack_88 = iVar2;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = unaff_EBP + -0x34;
      uStack_84 = 0x43315a;
      iVar4 = FUN_00402bc3();
      if (iVar4 < 0) {
        uStack_84 = 0x433165;
        FUN_00878dfb();
        iVar2 = extraout_ECX_00;
      }
      uStack_84 = 0xff;
      iStack_88 = extraout_ECX[4];
      *(int **)(unaff_EBP + -0x10) = &iStack_8c;
      uStack_90 = 0;
      uStack_94 = 0x43317a;
      iStack_8c = iVar2;
      FUN_00424e0a();
      uStack_90 = 0;
      uStack_94 = 0;
      *(undefined4 **)(unaff_EBP + -0x18) = &uStack_98;
      FUN_00433bdf(unaff_EBP + 8);
      uVar5 = FUN_004091f9(0);
      puVar6 = (undefined4 *)FUN_0042e3f0(unaff_EBP + -0x10,uVar5);
      this = *(_CIP<IBinding,&struct__GUID_const_IID_IBinding> **)(unaff_EBP + -0x14);
      uStack_84 = 0x4331ad;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar6);
      if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
        uStack_84 = 0x4331ba;
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
      }
      uStack_84 = 0x4331c8;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      uStack_84 = 0x4331d5;
      FUN_00403191();
      iVar2 = *(int *)this;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar2 == 0) {
        uStack_84 = 0x4331e7;
        FUN_00878dfb();
      }
      piVar3 = *(int **)this;
      iStack_8c = *(int *)(unaff_EBP + -0x24);
      iStack_88 = *(undefined4 *)(unaff_EBP + -0x20);
      uStack_84 = *(undefined4 *)(unaff_EBP + -0x1c);
      uStack_98 = *(undefined4 *)(unaff_EBP + -0x30);
      uStack_94 = *(undefined4 *)(unaff_EBP + -0x2c);
      uStack_90 = *(undefined4 *)(unaff_EBP + -0x28);
      iVar2 = (**(code **)(*piVar3 + 0x110))(piVar3,0x20,*(undefined4 *)(unaff_EBP + -0x34));
      if (iVar2 < 0) {
        FUN_00878e09(iVar2,piVar3,&DAT_00963df8);
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x34);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar2 = FUN_00402bc3(unaff_EBP + -0x24);
      if (iVar2 < 0) {
        FUN_00878dfb(iVar2);
      }
      piVar3 = *(int **)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}


