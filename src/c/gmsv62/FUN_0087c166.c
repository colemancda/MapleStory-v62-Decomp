/* FUN_0087c166 - 0x0087c166 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0087c166(HANDLE param_1)

{
  BOOL BVar1;
  undefined4 *puVar2;
  
  BVar1 = FindClose(param_1);
  if (BVar1 == 0) {
    puVar2 = (undefined4 *)FUN_0087fc84();
    *puVar2 = 0x16;
    return 0xffffffff;
  }
  return 0;
}


