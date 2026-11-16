/* FUN_51804a7e - 0x51804a7e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __cdecl FUN_51804a7e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_51804aa3(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_51804aa3(param_1);
    Ordinal_201(0,uVar2);
  }
  return *(undefined4 *)(param_1 + 4);
}


