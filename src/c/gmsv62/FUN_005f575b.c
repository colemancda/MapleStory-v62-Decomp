/* FUN_005f575b - 0x005f575b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_005f575b(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005f58ac();
  FUN_00414f8b(param_1);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
  return iVar1;
}


