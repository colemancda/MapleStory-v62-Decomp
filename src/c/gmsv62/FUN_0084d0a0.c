/* FUN_0084d0a0 - 0x0084d0a0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084d0a0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_00979178 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)(DAT_00979178 + 4) + 0x48))(&DAT_0097bde0);
    uVar2 = -(uint)(iVar1 != 0) & DAT_00979178;
  }
  if (uVar2 != 0) {
    FUN_0071b598(param_1);
  }
  return;
}


