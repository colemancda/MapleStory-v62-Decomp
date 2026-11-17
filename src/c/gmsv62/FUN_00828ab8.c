/* FUN_00828ab8 - 0x00828ab8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool FUN_00828ab8(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int *piVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  bool bVar6;
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x1c) = extraout_ECX;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar1 = *(int **)(extraout_ECX + 4);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 4);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)this = 0;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x6c1);
  pcVar2 = DAT_0097bc30;
  uVar4 = *puVar3;
  bVar6 = DAT_0097bc30 == (code *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (bVar6) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x800401f0;
  }
  else {
    uVar4 = (*pcVar2)(uVar4,&DAT_00963cf8,this,0);
    *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  if (-1 < *(int *)(unaff_EBP + -0x14)) {
    piVar1 = *(int **)(unaff_EBP + -0x10);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x6c2);
    pcVar2 = DAT_0097bc30;
    uVar4 = *puVar3;
    bVar6 = DAT_0097bc30 == (code *)0x0;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (bVar6) {
      iVar5 = -0x7ffbfe10;
    }
    else {
      iVar5 = (*pcVar2)(uVar4,&DAT_009640c0,unaff_EBP + -0x10,0);
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    if (-1 < iVar5) {
      iVar5 = *(int *)(unaff_EBP + -0x10);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x18) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -0x54) = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + 0x14);
      *(undefined2 *)(unaff_EBP + -0x5c) = 0x4010;
      *(undefined2 *)(unaff_EBP + -0x4c) = 3;
      *(undefined2 *)(unaff_EBP + -0x3c) = 3;
      *(undefined2 *)(unaff_EBP + -0x2c) = 3;
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(unaff_EBP + 0x18);
      if (iVar5 == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x14))
                        (*(int **)(unaff_EBP + -0x10),*(undefined4 *)(unaff_EBP + -0x5c),
                         *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                         *(undefined4 *)(unaff_EBP + -0x50),*(undefined4 *)(unaff_EBP + -0x4c),
                         *(undefined4 *)(unaff_EBP + -0x48),*(undefined4 *)(unaff_EBP + -0x44),
                         *(undefined4 *)(unaff_EBP + -0x40),*(undefined4 *)(unaff_EBP + -0x3c),
                         *(undefined4 *)(unaff_EBP + -0x38),*(undefined4 *)(unaff_EBP + -0x34),
                         *(undefined4 *)(unaff_EBP + -0x30),*(undefined4 *)(unaff_EBP + -0x2c),
                         *(undefined4 *)(unaff_EBP + -0x28),*(undefined4 *)(unaff_EBP + -0x24),
                         *(undefined4 *)(unaff_EBP + -0x20));
      if (-1 < iVar5) {
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          FUN_00878dfb(0x80004003);
        }
        iVar5 = (**(code **)(**(int **)(unaff_EBP + -0x10) + 0x1c))
                          (*(int **)(unaff_EBP + -0x10),0x10000,0x40000);
      }
      bVar6 = -1 < iVar5;
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      goto LAB_00828c6c;
    }
  }
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  bVar6 = false;
LAB_00828c6c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return bVar6;
}


