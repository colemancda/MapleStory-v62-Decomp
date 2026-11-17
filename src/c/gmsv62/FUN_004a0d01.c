/* FUN_004a0d01 - 0x004a0d01 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a0d01(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  
  FUN_00879bb8();
  iVar4 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(extraout_ECX + 0x7c) = *(undefined4 *)(iVar4 + 0x18);
  *(undefined4 *)(extraout_ECX + 0x80) = *(undefined4 *)(iVar4 + 0x24);
  *(undefined4 *)(extraout_ECX + 0x84) = *(undefined4 *)(iVar4 + 0x28);
  *(undefined4 *)(extraout_ECX + 0x88) = *(undefined4 *)(iVar4 + 0x2c);
  iVar1 = *(int *)(iVar4 + 0x30);
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (iVar1 == 0) {
    iVar1 = 0xffff;
  }
  *(int *)(extraout_ECX + 0x8c) = iVar1;
  *(undefined4 *)(extraout_ECX + 0x38) = *(undefined4 *)(iVar4 + 4);
  *(undefined4 *)(extraout_ECX + 0x3c) = *(undefined4 *)(iVar4 + 8);
  *(undefined4 *)(extraout_ECX + 0x90) = *(undefined4 *)(iVar4 + 0x34);
  *(undefined4 *)(extraout_ECX + 0x40) = *(undefined4 *)(iVar4 + 0xc);
  uVar3 = *(undefined4 *)(iVar4 + 0x10);
  *(undefined4 *)(extraout_ECX + 0x5c) = 0xffffffff;
  *(undefined4 *)(extraout_ECX + 0x44) = uVar3;
  *(undefined4 *)(extraout_ECX + 0x4c) = 0;
  *(undefined4 *)(extraout_ECX + 0x48) = 0;
  *(undefined4 *)(extraout_ECX + 0x60) = 0;
  *(int *)(extraout_ECX + 100) = *(int *)(extraout_ECX + 0x1c) + *(int *)(extraout_ECX + 0x38) * -2;
  *(undefined4 *)(extraout_ECX + 0x58) = 0;
  if (*(int *)(iVar4 + 0x20) != 0) {
    iStack_38 = 0x4a0d9c;
    FUN_00499fda();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined4 *)(unaff_EBP + -4) = 0;
  }
  iStack_38 = 0x4a0db9;
  FUN_00403191();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    iStack_38 = 0x4a0dcf;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      iStack_38 = 0x4a0dda;
      FUN_00878dfb();
    }
  }
  iStack_38 = unaff_EBP + 8;
  local_3c = 0x4a0def;
  piVar2 = (int *)FUN_00679d86();
  local_3c = *piVar2;
  iStack_38 = extraout_ECX + 0x68;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_40 = 0x4a0e01;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iStack_38 = *(undefined4 *)(iVar4 + 0x1c);
  iStack_44 = iVar4 + 0x14;
  local_3c = *(int *)(iVar4 + 0x18);
  *(int **)(unaff_EBP + 8) = &iStack_40;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4a0e35;
  FUN_0044974c();
  iStack_44 = 0x4a0e3c;
  FUN_004503f9();
  iStack_38 = unaff_EBP + 8;
  local_3c = 0x4a0e4c;
  piVar2 = (int *)FUN_00679d86();
  local_3c = *piVar2;
  iStack_38 = extraout_ECX + 0x70;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  iStack_40 = 0x4a0e5e;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iStack_38 = 0xffffffff;
  local_3c = *(int *)(iVar4 + 0x18);
  iStack_44 = iVar4 + 0x14;
  *(int **)(unaff_EBP + 8) = &iStack_40;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4a0e91;
  FUN_0044974c();
  iStack_44 = 0x4a0e98;
  FUN_004503f9();
  if (*(char *)(extraout_ECX + 0x83) == '\0') {
    iStack_38 = 0x4a0eac;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x6c),
               *(IBinding **)(extraout_ECX + 0x68));
  }
  else {
    iStack_38 = unaff_EBP + 8;
    local_3c = 0x4a0ebe;
    piVar2 = (int *)FUN_00679d86();
    local_3c = *piVar2;
    iStack_38 = extraout_ECX + 0x6c;
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iStack_40 = 0x4a0ed0;
    FUN_004506a3();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00402676();
    iStack_38 = 0xff404040;
    local_3c = *(int *)(iVar4 + 0x18);
    iStack_44 = iVar4 + 0x14;
    *(int **)(unaff_EBP + 8) = &iStack_40;
    FUN_004059fd();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iStack_44 = 0x4a0f06;
    FUN_0044974c();
    iStack_44 = 0x4a0f0d;
    FUN_004503f9();
  }
  iStack_38 = unaff_EBP + 8;
  local_3c = 0x4a0f1d;
  piVar2 = (int *)FUN_00679d86();
  local_3c = *piVar2;
  iStack_38 = extraout_ECX + 0x74;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_40 = 0x4a0f2f;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iStack_38 = 0xff000000;
  local_3c = *(int *)(iVar4 + 0x18);
  iStack_44 = iVar4 + 0x14;
  *(int **)(unaff_EBP + 8) = &iStack_40;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4a0f65;
  FUN_0044974c();
  iStack_44 = 0x4a0f6c;
  FUN_004503f9();
  iStack_38 = unaff_EBP + 8;
  local_3c = 0x4a0f7c;
  piVar2 = (int *)FUN_00679d86();
  local_3c = *piVar2;
  iStack_38 = extraout_ECX + 0x78;
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_40 = 0x4a0f8e;
  FUN_004506a3();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  iStack_38 = 0xffffffff;
  local_3c = *(int *)(iVar4 + 0x18);
  iStack_44 = iVar4 + 0x14;
  *(int **)(unaff_EBP + 8) = &iStack_40;
  FUN_004059fd();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_44 = 0x4a0fc0;
  FUN_0044974c();
  iStack_44 = 0x4a0fc7;
  FUN_004503f9();
  iStack_38 = 0;
  *(int **)(unaff_EBP + 8) = &local_3c;
  iStack_44 = 0x4a0fd8;
  iStack_40 = iVar4;
  FUN_00450368();
  iStack_40 = 0x4a0fdf;
  FUN_004a1334();
  iStack_38 = 0x4a0feb;
  piVar2 = (int *)FUN_004489f5();
  iVar4 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  if (iVar4 == 0) {
    iStack_38 = 0x4a0fff;
    FUN_00878dfb();
  }
  FUN_004320e3();
  iStack_38 = *(undefined4 *)(extraout_ECX + 0x7c);
  local_3c = 0x4a1015;
  FUN_00424df4();
  local_3c = 0x4a101c;
  local_3c = FUN_00424f08();
  local_3c = local_3c + *(int *)(extraout_ECX + 0x44);
  iStack_40 = 0x4a1027;
  FUN_00424df4();
  iStack_40 = 0x4a102e;
  iStack_40 = FUN_00424ee1();
  iStack_40 = iStack_40 + *(int *)(extraout_ECX + 0x40);
  piVar2 = &iStack_44;
  *(int **)(unaff_EBP + -0x10) = &iStack_44;
  FUN_004a10ab(&iStack_44);
  FUN_004489f5(piVar2);
  FUN_0049f8d7();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
    iStack_38 = 0x4a1063;
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined4 *)(extraout_ECX + 0x5c) = 0;
  if (*(int *)(extraout_ECX + 0x34) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(extraout_ECX + 0x34) + -4);
  }
  iStack_38 = 0;
  local_3c = 0;
  *(undefined4 *)(extraout_ECX + 0x48) = uVar3;
  iStack_40 = 0x4a1082;
  FUN_004a2298();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  iStack_38 = 0x4a108f;
  iVar4 = FUN_00402bc3();
  if (iVar4 < 0) {
    iStack_38 = 0x4a109a;
    FUN_00878dfb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


