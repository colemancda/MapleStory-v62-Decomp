/* FUN_00596ec3 - 0x00596ec3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00596ec3(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 extraout_ECX;
  int *extraout_ECX_00;
  int *piVar4;
  int unaff_EBP;
  bool bVar5;
  int local_64;
  int *piStack_60;
  int *piStack_5c;
  int *piStack_58;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = extraout_ECX;
  piStack_58 = (int *)0x596ee6;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piStack_58 = (int *)0x596ef4;
  FUN_00403191();
  piStack_58 = (int *)0x0;
  piStack_5c = (int *)(unaff_EBP + -0x40);
  piStack_60 = (int *)(unaff_EBP + -0x30);
  *(int **)(unaff_EBP + -0x1c) = &local_64;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00679e4e(&local_64,0x567);
  iVar2 = unaff_EBP + -0x50;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00405a1d(iVar2);
  FUN_00402660();
  FUN_00404a02(iVar2);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  piStack_5c = (int *)0x596f3e;
  uVar1 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar1;
  piStack_58 = (int *)0x596f4f;
  iVar2 = FUN_00404b30();
  if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
    piStack_58 = (int *)0x596f60;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  piStack_58 = (int *)0x596f6d;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_58 = (int *)0x596f78;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  piStack_58 = (int *)0x596f84;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_58 = (int *)0x596f8f;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar4 = (int *)(unaff_EBP + -0x40);
  piStack_58 = (int *)0x596f9c;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_58 = (int *)0x596fa7;
    FUN_00878dfb();
    piVar4 = extraout_ECX_00;
  }
  piStack_58 = (int *)0x0;
  *(int ***)(unaff_EBP + -0x20) = &piStack_5c;
  piStack_60 = (int *)&DAT_00964310;
  local_64 = 0x596fb9;
  piStack_5c = piVar4;
  FUN_004033a1();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piStack_60 = (int *)(unaff_EBP + -0x50);
  local_64 = 0x596fc8;
  FUN_0040263d();
  local_64 = 0x596fcf;
  FUN_004048a4();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  piStack_5c = (int *)0x596fdd;
  iVar2 = FUN_004032b4();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 != 0) {
    piStack_58 = (int *)0x596ff3;
    iVar2 = FUN_0041a581();
    if ((iVar2 < 0) && (iVar2 != -0x7fffbffe)) {
      piStack_58 = (int *)0x597004;
      FUN_00878dfb();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_58 = (int *)0x597011;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_58 = (int *)0x59701c;
    FUN_00878dfb();
  }
  piStack_58 = (int *)0x597025;
  FUN_00403191();
  piStack_58 = *(int **)(unaff_EBP + -0x10);
  piStack_5c = (int *)0x597032;
  FUN_0040ee87();
  bVar5 = DAT_0097c1ac == 0;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (bVar5) {
    piStack_58 = (int *)0x597049;
    FUN_00878dfb();
  }
  piStack_58 = (int *)(unaff_EBP + -0x40);
  piStack_5c = (int *)0x0;
  piStack_60 = (int *)0x0;
  local_64 = 0;
  puVar3 = (undefined4 *)FUN_0042a39f(unaff_EBP + -0x1c,0,0);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(*(int *)(unaff_EBP + -0x18) + 0x18);
  piStack_58 = (int *)0x597074;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*puVar3);
  if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
    piStack_58 = (int *)0x597081;
    (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 8;
  piStack_58 = (int *)0x59708e;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_58 = (int *)0x597099;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_58 = (int *)0x5970a6;
  iVar2 = FUN_00402bc3();
  if (iVar2 < 0) {
    piStack_58 = (int *)0x5970b1;
    FUN_00878dfb();
  }
  if (*(int *)this == 0) {
    piStack_58 = (int *)0x5970bb;
    FUN_00878dfb();
  }
  piVar4 = *(int **)this;
  piStack_5c = (int *)0x5970cb;
  piStack_58 = piVar4;
  local_64 = (**(code **)(*piVar4 + 0xe0))();
  if (local_64 < 0) {
    piStack_5c = (int *)&DAT_00963df8;
    piStack_60 = piVar4;
    FUN_00878e09();
  }
  piStack_5c = (int *)0x4e6;
  piStack_60 = (int *)(unaff_EBP + -0x1c);
  local_64 = 0x5970ee;
  puVar3 = (undefined4 *)FUN_00679d86();
  uVar1 = *puVar3;
  piStack_5c = (int *)0x0;
  piStack_60 = (int *)0x0;
  local_64 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_0045af91(uVar1,0);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piStack_5c = (int *)0x597110;
  FUN_00402676();
  piStack_5c = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_5c != (int *)0x0) {
    piStack_60 = (int *)0x597121;
    (**(code **)(*piStack_5c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


