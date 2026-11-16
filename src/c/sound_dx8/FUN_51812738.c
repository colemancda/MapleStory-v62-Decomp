/* FUN_51812738 - 0x51812738 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51812738(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    piVar2 = (int *)(param_1 + -4);
    *param_2 = piVar2;
    (**(code **)(*piVar2 + 4))(piVar2);
    param_2[1] = 1;
    memcpy(param_2 + 2,L"Output",0xe);
    uVar1 = 0;
  }
  return uVar1;
}


