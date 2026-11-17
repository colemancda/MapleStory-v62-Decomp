/* FUN_006142ce - 0x006142ce in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_006142ce(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_0041398d();
    iVar1 = iVar1 + 0x14;
  } while (iVar1 < 0x1e0);
  return;
}


