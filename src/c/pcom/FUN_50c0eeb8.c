/* FUN_50c0eeb8 - 0x50c0eeb8 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void __thiscall FUN_50c0eeb8(void *this,undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_50c08269(this);
  if (iVar1 < 0) {
    FUN_50c101c4(iVar1);
  }
  memcpy(this,param_1,0x10);
  *param_1 = 0;
  return;
}


