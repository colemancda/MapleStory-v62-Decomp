/* FUN_004a8c49 - 0x004a8c49 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a8c49(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  iVar5 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x7c) = *(undefined4 *)(iVar5 + 0x10);
  *(undefined4 *)(extraout_ECX + 0x80) = *(undefined4 *)(iVar5 + 0x1c);
  *(undefined4 *)(extraout_ECX + 0x84) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(extraout_ECX + 0x88) = *(undefined4 *)(iVar5 + 0x24);
  iVar2 = *(int *)(iVar5 + 0x28);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar2 == 0) {
    iVar2 = 0xffff;
  }
  *(int *)(extraout_ECX + 0x8c) = iVar2;
  *(undefined4 *)(extraout_ECX + 0x94) = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(extraout_ECX + 0x90) = *(undefined4 *)(iVar5 + 0x30);
  *(undefined4 *)(extraout_ECX + 0x48) = 0;
  *(undefined4 *)(extraout_ECX + 0x38) = *(undefined4 *)(iVar5 + 4);
  *(undefined4 *)(extraout_ECX + 0x3c) = *(undefined4 *)(iVar5 + 8);
  uVar1 = *(undefined4 *)(iVar5 + 0x34);
  *(undefined4 *)(extraout_ECX + 0x5c) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x98) = uVar1;
  *(undefined4 *)(extraout_ECX + 0x4c) = 0;
  *(undefined4 *)(extraout_ECX + 0x40) = 0;
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  *(int *)(extraout_ECX + 100) = *(int *)(extraout_ECX + 0x1c) + *(int *)(extraout_ECX + 0x38) * -2;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  if (*(int *)(iVar5 + 0x18) != 0) {
    iStack_38 = 0x4a8ced;
    FUN_00499fda();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iStack_38 = 0x4a8d0a;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    iStack_38 = 0x4a8d20;
    iVar2 = FUN_00402bc3();
    if (iVar2 < 0) {
      iStack_38 = 0x4a8d2b;
      FUN_00878dfb();
    }
  }
  iStack_38 = unaff_EBP + 8;
  iStack_3c = 0x4a8d40;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_3c = *puVar3;
  iStack_38 = extraout_ECX + 0x68;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  local_40 = 0x4a8d52;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iStack_38 = *(undefined4 *)(iVar5 + 0x14);
  iStack_44 = iVar5 + 0xc;
  iStack_3c = *(undefined4 *)(iVar5 + 0x10);
  *(int **)(unaff_EBP + 8) = &local_40;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4a8d86;
  FUN_0044974c();
  iStack_44 = 0x4a8d8d;
  FUN_004503f9();
  iStack_38 = unaff_EBP + 8;
  iStack_3c = 0x4a8d9d;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_3c = *puVar3;
  iStack_38 = extraout_ECX + 0x70;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  local_40 = 0x4a8daf;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iStack_38 = 0xffffffff;
  iStack_3c = *(undefined4 *)(iVar5 + 0x10);
  iStack_44 = iVar5 + 0xc;
  *(int **)(unaff_EBP + 8) = &local_40;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4a8de2;
  FUN_0044974c();
  iStack_44 = 0x4a8de9;
  FUN_004503f9();
  if (*(char *)(extraout_ECX + 0x83) == '\0') {
    iStack_38 = 0x4a8dfd;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x6c),
               *(IBinding **)(extraout_ECX + 0x68));
  }
  else {
    iStack_38 = unaff_EBP + 8;
    iStack_3c = 0x4a8e0f;
    puVar3 = (undefined4 *)FUN_00679d86();
    iStack_3c = *puVar3;
    iStack_38 = extraout_ECX + 0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    local_40 = 0x4a8e21;
    FUN_004506a3();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402676();
    iStack_38 = 0xff404040;
    iStack_3c = *(undefined4 *)(iVar5 + 0x10);
    iStack_44 = iVar5 + 0xc;
    *(int **)(unaff_EBP + 8) = &local_40;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_44 = 0x4a8e57;
    FUN_0044974c();
    iStack_44 = 0x4a8e5e;
    FUN_004503f9();
  }
  iStack_38 = unaff_EBP + 8;
  iStack_3c = 0x4a8e6e;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_3c = *puVar3;
  iStack_38 = extraout_ECX + 0x74;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  local_40 = 0x4a8e80;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iStack_38 = 0xff000000;
  iStack_3c = *(undefined4 *)(iVar5 + 0x10);
  iStack_44 = iVar5 + 0xc;
  *(int **)(unaff_EBP + 8) = &local_40;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4a8eb6;
  FUN_0044974c();
  iStack_44 = 0x4a8ebd;
  FUN_004503f9();
  iStack_38 = unaff_EBP + 8;
  iStack_3c = 0x4a8ecd;
  puVar3 = (undefined4 *)FUN_00679d86();
  iStack_3c = *puVar3;
  iStack_38 = extraout_ECX + 0x78;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  local_40 = 0x4a8edf;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iStack_38 = 0xffffffff;
  iStack_3c = *(undefined4 *)(iVar5 + 0x10);
  iStack_44 = iVar5 + 0xc;
  *(int **)(unaff_EBP + 8) = &local_40;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4a8f11;
  FUN_0044974c();
  iStack_44 = 0x4a8f18;
  FUN_004503f9();
  iStack_38 = 0x4a8f21;
  FUN_00414f8b();
  iStack_38 = 0x4a8f2d;
  piVar4 = (int *)FUN_004489f5();
  iVar5 = *piVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar5 == 0) {
    iStack_38 = 0x4a8f43;
    FUN_00878dfb();
  }
  FUN_004320e3();
  iStack_38 = *(undefined4 *)(extraout_ECX + 0x7c);
  iStack_3c = 0x4a8f59;
  FUN_00424df4();
  iStack_3c = 0x4a8f60;
  iStack_3c = FUN_00424f08();
  iStack_3c = iStack_3c + *(int *)(extraout_ECX + 0x3c);
  local_40 = 0x4a8f6b;
  FUN_00424df4();
  local_40 = 0x4a8f72;
  local_40 = FUN_00424ee1();
  local_40 = local_40 + *(int *)(extraout_ECX + 0x38);
  piVar4 = &iStack_44;
  *(int **)(unaff_EBP + -0x10) = &iStack_44;
  FUN_004a10ab(&iStack_44);
  FUN_004489f5(piVar4);
  FUN_004a787c();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_38 = 0x4a8fa9;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  if (*(int *)(extraout_ECX + 0x88) != 0) {
    *(undefined4 *)(extraout_ECX + 0xb8) = 1;
    *(undefined4 *)(extraout_ECX + 0xb4) = 1;
  }
  iStack_38 = 0;
  iStack_3c = 0;
  *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  *(undefined4 *)(extraout_ECX + 0x40) = 0;
  local_40 = 0x4a8fca;
  FUN_004aa5f9();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_38 = 0x4a8fd7;
  iVar5 = FUN_00402bc3();
  if (iVar5 < 0) {
    iStack_38 = 0x4a8fe2;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


