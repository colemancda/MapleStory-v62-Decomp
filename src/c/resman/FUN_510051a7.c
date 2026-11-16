/* FUN_510051a7 - 0x510051a7 in ResMan.dll (image base 0x51000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "resman_decls.h"


bool __thiscall FUN_510051a7(void *this,undefined4 *param_1)

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
    uVar2 = FUN_51005305(this_00,puVar1);
  }
  return uVar2 == 0;
}


