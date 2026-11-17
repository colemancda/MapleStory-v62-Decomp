/* FUN_0050d773 - 0x0050d773 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0050d773(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0050d79e();
  *puVar1 = param_1;
  puVar1[1] = param_2;
  iVar2 = FUN_007d1e08();
  puVar1[2] = iVar2 + param_3;
  return;
}


