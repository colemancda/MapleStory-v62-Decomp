/* ptr_51812196 - 0x51812196 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 ptr_51812196(undefined4 param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (void *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    memcpy(param_2,&DAT_51819578,0x10);
    uVar1 = 0;
  }
  return uVar1;
}


