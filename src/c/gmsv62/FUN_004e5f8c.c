/* FUN_004e5f8c - 0x004e5f8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004e5f8c(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  FUN_0059f2bb();
  *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(iVar5 + 4);
  FUN_0045e485();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_004b8c9b();
  FUN_004f16e2();
  *(undefined1 *)(extraout_ECX + 0x3e) = *(undefined1 *)(iVar5 + 8);
  FUN_004f162d();
  puVar3 = (undefined4 *)FUN_004e61ea();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 10),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + 8) = *extraout_ECX;
  FUN_004f162d();
  (**(code **)(*(int *)(unaff_EBP + 8) + 0x10))();
  if (DAT_0097c1a8 == (int *)0x0) {
    FUN_00878dfb();
  }
  iVar4 = *DAT_0097c1a8;
  *(int **)(unaff_EBP + 8) = DAT_0097c1a8;
  iVar4 = (**(code **)(iVar4 + 0x24))();
  if (iVar4 < 0) {
    FUN_00878e09();
  }
  FUN_0065c6a5();
  (*DAT_0097b4a8)();
  SystemTimeToFileTime((SYSTEMTIME *)(unaff_EBP + -0x30),(LPFILETIME)(unaff_EBP + -0x20));
  uVar1 = *(uint *)(iVar5 + 0xc);
  iVar5 = *(int *)(iVar5 + 0x10);
  uVar2 = *(uint *)(unaff_EBP + -0x20);
  iVar4 = *(int *)(unaff_EBP + -0x1c);
  extraout_ECX[0x7a] = uVar1 - *(uint *)(unaff_EBP + -0x20);
  extraout_ECX[0x7b] = (iVar5 - iVar4) - (uint)(uVar1 < uVar2);
  iVar5 = DAT_00978368;
  FUN_00830e98();
  *(undefined1 **)(unaff_EBP + 8) = &stack0xffffffb8;
  FUN_0045e485();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_004f14f4();
  FUN_007c0053();
  DAT_00979244 = 0;
  FUN_00833dbd();
  FUN_004f1158();
  if ((*(int *)(iVar5 + 0x3234) != 0) && (iVar5 = FUN_00849a47(), iVar5 == 0)) {
    iVar5 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar5 == 0) {
      *(undefined4 *)(unaff_EBP + 8) = 0;
    }
    else {
      uVar6 = FUN_004defeb();
      *(undefined4 *)(unaff_EBP + 8) = uVar6;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004e1371();
    FUN_008497ad();
  }
  iVar5 = FUN_00846166();
  if ((iVar5 != 0) && (iVar5 = FUN_00849a47(), iVar5 == 0)) {
    iVar5 = FUN_004029b9();
    *(int *)(unaff_EBP + 8) = iVar5;
    *(undefined1 *)(unaff_EBP + -4) = 3;
    if (iVar5 != 0) {
      FUN_004defeb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004e1632();
    FUN_008497ad();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0045e7c2();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


