/* FUN_007b0b2a - 0x007b0b2a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_007b0b2a(int *param_1)

{
  int *_Dst;
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_18;
  undefined1 local_14 [4];
  int local_10;
  undefined4 local_c;
  int local_8;
  
  if (param_1[0x91c] != 0) {
    FUN_007d4061(param_1[0x91c]);
    param_1[0x91c] = 0;
  }
  param_1[0x915] = 0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x916),(IBinding *)0x0);
  local_8 = FUN_007d1e08();
  local_8 = local_8 - param_1[0x913];
  if (local_8 < 0x1f) {
    local_8 = 0x1e;
  }
  _Dst = param_1 + 0x799;
  iVar2 = FUN_007a3f65(param_1[0x799]);
  if (iVar2 <= local_8) {
    local_8 = iVar2;
  }
  iVar2 = FUN_0043f6fe();
  if (-1 < iVar2) {
    (**(code **)(*param_1 + 0x3c))();
    (**(code **)(param_1[0x1e] + 0x10))(6,100,0);
  }
  local_c = 0;
  iVar2 = FUN_00455c59(local_14);
  uVar1 = *(undefined4 *)(iVar2 + 4);
  if (local_10 != 0) {
    FUN_0045e7c2(0);
  }
  local_10 = FUN_00650dae(uVar1,*_Dst,&local_c);
  if ((*_Dst == 0x2f9f6c) || (*_Dst == 0x4faa8c)) {
    FUN_0079305e(local_c,6,0,1);
  }
  else {
    FUN_00432942(param_1[0x35e]);
  }
  pcVar3 = (code *)*_Dst;
  if ((int)pcVar3 < 0x236a6a) {
    if (pcVar3 != (code *)0x236a69) {
      if (((pcVar3 == (code *)0x111ae9) || (pcVar3 == (code *)0x12a189)) ||
         (pcVar3 == (code *)0x142829)) {
        iVar2 = FUN_007a3efc();
        if (iVar2 != 0) {
          FUN_007bc4e9(local_c,local_10,local_8);
        }
        goto LAB_007b0d56;
      }
      if ((pcVar3 != (code *)0x205d29) && (pcVar3 != (code *)0x21e3c9)) goto LAB_007b0d56;
    }
    iVar2 = FUN_007a3efc();
    if (iVar2 != 0) {
      iVar2 = FUN_007ab174(local_c,local_10,0,local_8);
LAB_007b0d39:
      if (iVar2 != 0) {
        FUN_007d3e08(*_Dst,0x1e);
        goto LAB_007b0d56;
      }
    }
LAB_007b0d4a:
    pcVar3 = (code *)*_Dst;
  }
  else if (pcVar3 != (code *)0x2f9f6c) {
    if (pcVar3 == (code *)0x312609) {
      iVar2 = FUN_007a3efc();
      if ((iVar2 != 0) && (iVar2 = FUN_007a71f1(0,0,&local_18,0,0,0,0), iVar2 == 0)) {
        iVar2 = FUN_007a93ea(local_c,local_10,local_18,0,local_8,0);
        goto LAB_007b0d39;
      }
      goto LAB_007b0d4a;
    }
    if (pcVar3 == (code *)0x4dd5cc) {
      FUN_007a71f1(local_c,local_10,0,0,0,local_8,0);
      goto LAB_007b0d56;
    }
    if (pcVar3 == ptr_004f5c6a) {
      iVar2 = FUN_004865cc();
      if (iVar2 == 0) {
        (**(code **)(*param_1 + 0x48))(local_8);
      }
      goto LAB_007b0d56;
    }
    if (pcVar3 != (code *)0x4faa8c) goto LAB_007b0d56;
  }
  FUN_007bd2b0(pcVar3);
LAB_007b0d56:
  _memset(_Dst,0,0xc);
  return;
}


