/* FUN_007f5256 - 0x007f5256 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007f5256(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1;
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1,&param_1);
  if (-1 < iVar2) {
    (**(code **)(*piVar1 + 0x40))(piVar1,param_2,param_1);
  }
  return;
}


