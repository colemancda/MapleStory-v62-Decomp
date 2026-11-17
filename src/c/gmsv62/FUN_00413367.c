/* FUN_00413367 - 0x00413367 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00413367(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar3 = FUN_0087a36a(uVar1,5);
  iVar4 = FUN_0087a034(uVar2 ^ 0xbaadf00d,5);
  if (iVar4 + uVar1 != param_2) {
    param_1 = (uint *)0x5;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&param_1,&DAT_008f9b80);
  }
  return uVar3 ^ uVar2;
}


