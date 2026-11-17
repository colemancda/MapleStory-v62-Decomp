/* FUN_00882d74 - 0x00882d74 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00882d74(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_00982120;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  DAT_0098200c = 0;
  DAT_0098201c = 0;
  DAT_00982224 = 0;
  DAT_00982010 = 0;
  DAT_00982014 = 0;
  DAT_00982018 = 0;
  return;
}


