/* FUN_0059dad3 - 0x0059dad3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_0059dad3(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x74))(param_1);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00964018);
  }
  return iVar1;
}


