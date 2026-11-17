/* FUN_004dd9dd - 0x004dd9dd in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __thiscall FUN_004dd9dd(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 < 0x22000004) {
    if (iVar1 == 0x22000003) {
      uVar2 = 0x5a;
    }
    else if (iVar1 == 0x21000001) {
      uVar2 = 0x54;
    }
    else if (iVar1 == 0x21000002) {
      uVar2 = 0x55;
    }
    else if (iVar1 == 0x21000003) {
      uVar2 = 0x56;
    }
    else if (iVar1 == 0x21000004) {
      uVar2 = 0x62;
    }
    else if (iVar1 == 0x22000001) {
      uVar2 = 0x57;
    }
    else {
      if (iVar1 != 0x22000002) goto LAB_004dda3e;
      uVar2 = 0x59;
    }
  }
  else if (iVar1 == 0x22000004) {
    uVar2 = 0x5b;
  }
  else if (iVar1 == 0x22000005) {
    uVar2 = 0x5c;
  }
  else if (iVar1 == 0x22000006) {
    uVar2 = 0x5d;
  }
  else if (iVar1 == 0x22000007) {
    uVar2 = 0x5e;
  }
  else {
    if (iVar1 != 0x22000008) {
LAB_004dda3e:
      *param_2 = 0;
      FUN_00414edd(&DAT_00978474,0xffffffff);
      return param_2;
    }
    uVar2 = 0x5f;
  }
  FUN_00679d22(param_2,uVar2);
  return param_2;
}


