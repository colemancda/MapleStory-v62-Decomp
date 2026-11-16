/* FUN_50803f09 - 0x50803f09 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


bool __thiscall FUN_50803f09(void *this,undefined4 *param_1)

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
    uVar2 = FUN_508040e7(this_00,puVar1);
  }
  return uVar2 == 0;
}


