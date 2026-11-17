/* FUN_00529fb9 - 0x00529fb9 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00529fb9(void)

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
  undefined *puStack_74;
  int *piStack_70;
  
  FUN_00879bb8();
  FUN_0083168a();
  uVar1 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x24) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x30) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x68) = 1;
  *(undefined4 *)(extraout_ECX + 0x6c) = 0;
  *(undefined4 *)(extraout_ECX + 0x70) = 0;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  *(undefined4 *)(extraout_ECX + 0x1d60) = 0;
  *(undefined4 *)(extraout_ECX + 0x1d64) = 0;
  *(undefined4 *)(extraout_ECX + 0x1d68) = 0;
  *(undefined4 *)(extraout_ECX + 0x1d6c) = 0;
  if (*(int *)(extraout_ECX + 0x1d70) != 0) {
    piStack_70 = (int *)0x52a02f;
    FUN_00434e38();
    *(undefined4 *)(extraout_ECX + 0x1d70) = 0;
  }
  *(undefined4 *)(extraout_ECX + 0x1d74) = 1;
  *(undefined4 *)(extraout_ECX + 0x60) = 1;
  *(undefined4 *)(extraout_ECX + 100) = 0;
  piStack_70 = (int *)0x52a04c;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x38));
  piStack_70 = (int *)(unaff_EBP + -0x38);
  puStack_74 = (undefined *)0x52a05a;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x52a066;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_70 = (int *)0x52a073;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x28));
  piStack_70 = (int *)(unaff_EBP + -0x28);
  local_7c = &DAT_00980690;
  puStack_74 = (undefined *)0x52a081;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x52a08d;
    FUN_00878dfb();
    local_7c = extraout_ECX_00;
  }
  piStack_70 = (int *)0x0;
  puStack_74 = (undefined *)(unaff_EBP + -0x38);
  piStack_78 = (int *)(unaff_EBP + -0x28);
  *(int ***)(unaff_EBP + -0x18) = &local_7c;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&local_7c,0x1151);
  iVar2 = unaff_EBP + -0x68;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  puStack_74 = (undefined *)0x52a0d5;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_70 = (int *)0x52a0eb;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_70 = (int *)0x52a0fc;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_70 = (int *)0x52a109;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x52a114;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 6;
  piStack_70 = (int *)0x52a121;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x52a12c;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_70 = (int *)0x52a139;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x52a144;
    FUN_00878dfb();
  }
  piStack_70 = (int *)0x52a14e;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x48));
  piStack_70 = (int *)(unaff_EBP + -0x48);
  puStack_74 = (undefined *)0x52a15c;
  iVar2 = FUN_00402e32();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x52a168;
    FUN_00878dfb();
  }
  piStack_70 = *(int **)(unaff_EBP + -0x10);
  puStack_74 = (undefined *)0x52a174;
  FUN_0040ee87();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (bVar5) {
    piStack_70 = (int *)0x52a18a;
    FUN_00878dfb();
  }
  piStack_70 = (int *)(unaff_EBP + -0x58);
  puStack_74 = (undefined *)0x0;
  piStack_78 = (int *)0x0;
  local_7c = (int *)0x0;
  puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x18,0,0);
  piStack_70 = (int *)0x52a1b0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x74),
             (IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
    piStack_70 = (int *)0x52a1bd;
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_70 = (int *)0x52a1ca;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x52a1d5;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 5;
  piStack_70 = (int *)0x52a1e2;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_70 = (int *)0x52a1ed;
    FUN_00878dfb();
  }
  if (*(int *)(extraout_ECX + 0x74) == 0) {
    piStack_70 = (int *)0x52a1fc;
    FUN_00878dfb();
  }
  piStack_70 = *(int **)(extraout_ECX + 0x74);
  iVar2 = *piStack_70;
  *(int **)(unaff_EBP + -0x18) = piStack_70;
  puStack_74 = (undefined *)0x52a20d;
  piVar4 = (int *)(**(code **)(iVar2 + 0xb4))();
  if ((int)piVar4 < 0) {
    puStack_74 = &DAT_00963df8;
    piStack_78 = *(int **)(unaff_EBP + -0x18);
    local_7c = piVar4;
    FUN_00878e09();
  }
  if (*(int *)(extraout_ECX + 0x74) == 0) {
    puStack_74 = (undefined *)0x80004003;
    piStack_78 = (int *)0x52a22e;
    FUN_00878dfb();
  }
  piStack_78 = *(int **)(extraout_ECX + 0x74);
  iVar2 = *piStack_78;
  puStack_74 = (undefined *)0xffffffff;
  *(int **)(unaff_EBP + -0x18) = piStack_78;
  local_7c = (int *)0x52a23f;
  iVar2 = (**(code **)(iVar2 + 0xe0))();
  if (iVar2 < 0) {
    local_7c = (int *)&DAT_00963df8;
    FUN_00878e09(iVar2,*(undefined4 *)(unaff_EBP + -0x18));
  }
  local_7c = (int *)0x1;
  FUN_0081420c(0,0,0x100,200,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0,200,0x100,0x6e,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0,0x136,0x100,0x6c,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0,0x1a2,0x100,0xb4,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0x110,0x11,0x1fd,0x4e,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0x111,0x62,0x1fd,0x30,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0x111,0x91,0x1fd,0x16d,0,1,extraout_ECX);
  local_7c = (int *)0x1;
  FUN_0081420c(0xff,0x213,0x221,0x38,0,1,extraout_ECX);
  local_7c = (int *)0x52a348;
  FUN_0055495a();
  local_7c = (int *)0x1;
  FUN_005266d6();
  local_7c = (int *)0x4e5;
  puVar3 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18);
  uVar1 = *puVar3;
  local_7c = (int *)0x0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045af91(uVar1,1,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  local_7c = (int *)0x52a389;
  FUN_00402676();
  local_7c = (int *)0x52a390;
  FUN_0065c6a5();
  local_7c = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (local_7c != (int *)0x0) {
    (**(code **)(*local_7c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


