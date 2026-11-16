/* ptr_5181244d - 0x5181244d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 ptr_5181244d(undefined4 param_1,void *param_2)

{
  undefined4 uVar1;
  
  if (param_2 == (void *)0x0) {
    uVar1 = 0x80004003;
  }
  else {
    memcpy(param_2,u_Wizet__ZMS_5181f430,0x16);
    uVar1 = 0;
  }
  return uVar1;
}


