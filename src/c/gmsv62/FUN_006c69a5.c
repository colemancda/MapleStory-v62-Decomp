/* FUN_006c69a5 - 0x006c69a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_006c69a5(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  uVar1 = param_1;
  param_1 = 0;
  piVar3 = &DAT_0096aa54;
  while( true ) {
    local_14 = piVar3[-1];
    local_10 = *piVar3;
    local_c = local_14 + 0x20;
    local_8 = local_10 + 0x20;
    iVar2 = (*DAT_0097b57c)(&local_14,uVar1,param_2);
    if (iVar2 != 0) break;
    param_1 = param_1 + 1;
    piVar3 = piVar3 + 2;
    if (0x96ae4b < (int)piVar3) {
      return -1;
    }
  }
  if (((&DAT_0096aa50)[param_1 * 2] == 0) && ((&DAT_0096aa54)[param_1 * 2] == 0)) {
    return -1;
  }
  if (param_1 == 0x36) {
    return 0x2a;
  }
  if (param_1 == 0x59) {
    return 0x1d;
  }
  if (param_1 == 0x5a) {
    return 0x38;
  }
  return param_1;
}


