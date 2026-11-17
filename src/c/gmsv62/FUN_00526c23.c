/* FUN_00526c23 - 0x00526c23 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_00526c23(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  if (param_2 < 1) {
    param_2 = 0;
  }
  if (799 < param_2) {
    param_2 = 800;
  }
  if (param_3 < 1) {
    param_3 = 0;
  }
  local_8 = 600;
  if (param_3 < 600) {
    local_8 = param_3;
  }
  local_c = param_2;
  if (param_1[3] == 0) {
    FUN_00526469(param_2,local_8);
    iVar1 = (*DAT_0097b59c)(*param_1,&local_c);
    if (iVar1 != 0) {
      iVar1 = (*DAT_0097b598)(local_c,local_8);
      if (iVar1 != 0) goto LAB_00526ca1;
    }
    uVar2 = 0;
  }
  else {
    param_1[0x24e] = param_2;
    param_1[0x24f] = local_8;
    FUN_00526469(param_2,local_8);
LAB_00526ca1:
    uVar2 = 1;
  }
  return uVar2;
}


