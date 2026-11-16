/* FUN_51807041 - 0x51807041 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_51807041(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    iVar1 = -0x7fffbffd;
  }
  else {
    piVar2 = FUN_51805785(u_Sound_DX8_5181e1ac);
    *param_2 = piVar2;
    iVar1 = (-(uint)(piVar2 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar1;
}


