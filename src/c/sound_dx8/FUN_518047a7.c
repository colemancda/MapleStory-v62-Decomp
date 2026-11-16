/* FUN_518047a7 - 0x518047a7 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __thiscall FUN_518047a7(void *this,void *param_1)

{
  int iVar1;
  
  iVar1 = memcmp(this,param_1,0x10);
  if ((iVar1 == 0) &&
     (iVar1 = memcmp((void *)((int)this + 0x10),(void *)((int)param_1 + 0x10),0x10), iVar1 == 0)) {
    return 1;
  }
  return 0;
}


