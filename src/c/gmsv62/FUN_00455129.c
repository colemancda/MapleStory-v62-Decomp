/* FUN_00455129 - 0x00455129 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00455129(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int extraout_ECX;
  int *extraout_ECX_00;
  int unaff_EBP;
  bool bVar5;
  int *local_7c;
  int *piStack_78;
  
  FUN_00879bb8();
  FUN_0083168a();
  *(undefined4 *)(DAT_00978368 + 0x2d0c) = 0;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x24) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x30) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x3c) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x500) = 1;
  *(undefined4 *)(extraout_ECX + 0x504) = 0;
  *(undefined4 *)(extraout_ECX + 0x508) = 0;
  *(undefined4 *)(extraout_ECX + 0x50c) = 1;
  piStack_78 = (int *)0x4551a4;
  _memset((void *)(extraout_ECX + 0x49c),0,0x28);
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  local_7c = &DAT_00980690;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
    local_7c = extraout_ECX_00;
  }
  piStack_78 = (int *)(unaff_EBP + -0x28);
  *(int ***)(unaff_EBP + -0x18) = &local_7c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&local_7c,0x517);
  iVar2 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  FUN_0040ee87();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (bVar5) {
    FUN_00878dfb();
  }
  piStack_78 = (int *)0x0;
  local_7c = (int *)0x0;
  puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18,0,0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x510),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x510) == 0) {
    FUN_00878dfb();
  }
  iVar2 = **(int **)(extraout_ECX + 0x510);
  *(int **)(unaff_EBP + -0x18) = *(int **)(extraout_ECX + 0x510);
  piVar4 = (int *)(**(code **)(iVar2 + 0xb4))();
  if ((int)piVar4 < 0) {
    piStack_78 = *(int **)(unaff_EBP + -0x18);
    local_7c = piVar4;
    FUN_00878e09();
  }
  if (*(int *)(extraout_ECX + 0x510) == 0) {
    piStack_78 = (int *)0x45539f;
    FUN_00878dfb();
  }
  piStack_78 = *(int **)(extraout_ECX + 0x510);
  iVar2 = *piStack_78;
  *(int **)(unaff_EBP + -0x18) = piStack_78;
  local_7c = (int *)0x4553b3;
  iVar2 = (**(code **)(iVar2 + 0xe0))();
  if (iVar2 < 0) {
    local_7c = (int *)&DAT_00963df8;
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18));
  }
  local_7c = (int *)0x1;
  FUN_0081420c(0,0,0x100,0x13c,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0,0x13f,0x100,0x68,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0,0x1aa,0xf6,0xa3,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0x112,0x11,0x1fc,0x4e,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0x113,0x5f,0x19c,0x1ae,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0x2b2,0x9d,0x5a,0x166,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0xff,0x220,0x221,0x38,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0x2b3,0x62,0x59,0x16,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_005266d6();
  local_7c = (int *)0x4e5;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18);
  uVar1 = *puVar3;
  local_7c = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045af91(uVar1,1,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  local_7c = (int *)0x4554f3;
  FUN_00402676();
  *(undefined4 *)(extraout_ECX + 0x4e0) = **(undefined4 **)(unaff_EBP + 8);
  local_7c = (int *)0x455505;
  FUN_0065c6a5();
  local_7c = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_7c != (int *)0x0) {
    (**(code **)(*local_7c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


