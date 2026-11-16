/* FUN_50c04bb8 - 0x50c04bb8 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


bool __thiscall FUN_50c04bb8(void *this,undefined4 *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  uint uVar2;
  
  this_00 = *(undefined4 **)this;
  puVar1 = (undefined4 *)*param_1;
  if (this_00 == puVar1) {
    uVar2 = 0;
  }
  else if (this_00 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = FUN_50c04bfd(this_00,puVar1);
  }
  return uVar2 == 0;
}


