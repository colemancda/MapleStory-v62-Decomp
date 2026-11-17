/* FUN_008180db - 0x008180db in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_008180db(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00818724();
  iVar1 = FUN_00819a37(&param_1,0);
  if (iVar1 != 0) {
    FUN_008198eb(iVar1);
  }
  puVar2 = (undefined4 *)FUN_008198ad();
  *puVar2 = param_1;
  return;
}


