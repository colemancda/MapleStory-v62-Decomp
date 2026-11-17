/* FUN_004f1993 - 0x004f1993 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


float10 FUN_004f1993(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  double local_18;
  int local_10;
  int local_c;
  uint local_8;
  
  piVar6 = (int *)(param_1 + 8);
  param_1 = param_1 - (int)piVar6;
  local_8 = 0xbaadf00d;
  iVar4 = (int)&local_18 - (int)piVar6;
  local_c = 2;
  do {
    uVar1 = *(uint *)(param_1 + (int)piVar6);
    local_10 = *piVar6;
    uVar2 = FUN_0087a36a(local_10,5);
    uVar5 = uVar1 ^ local_8;
    *(uint *)(iVar4 + (int)piVar6) = uVar2 ^ uVar1;
    iVar3 = FUN_0087a034(uVar5,5);
    local_8 = iVar3 + local_10;
    piVar6 = piVar6 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (local_8 != param_2) {
    param_1 = 5;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_008f9b80);
  }
  return (float10)local_18;
}


