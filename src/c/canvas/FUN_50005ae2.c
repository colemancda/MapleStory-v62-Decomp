/* FUN_50005ae2 - 0x50005ae2 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


uint FUN_50005ae2(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_5000604f();
  uVar2 = -(uint)(iVar1 != 0) & iVar1 + 4U;
  *(undefined4 *)(uVar2 + 4) = 1;
  return -(uint)(uVar2 != 0) & uVar2 - 4;
}


