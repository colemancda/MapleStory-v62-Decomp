/* FUN_0079d9a5 - 0x0079d9a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0079d9a5(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0079e2b6(0);
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 4U;
  *(undefined4 *)(uVar2 + 4) = 1;
  return -(uint)(uVar2 != 0) & uVar2 - 4;
}


