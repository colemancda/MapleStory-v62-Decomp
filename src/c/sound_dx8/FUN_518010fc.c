/* FUN_518010fc - 0x518010fc in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __fastcall FUN_518010fc(void *param_1)

{
  int iVar1;
  
  if (*(int *)((int)param_1 + 0x14) == 3) {
    if (*(int *)((int)param_1 + 0x18) == 0) {
      iVar1 = (*DAT_5181fa0c)(0,0,0,0);
      *(int *)((int)param_1 + 0x18) = iVar1;
      if (iVar1 == 0) {
        return -0x7ff8fff2;
      }
    }
    iVar1 = FUN_51801e6a(param_1,0,0,0,0,(void *)0x0);
    if (iVar1 != 0) {
      return 0;
    }
    iVar1 = (*DAT_5181fad4)();
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    FUN_51802a89(u_Sound_DX8__Scheduler_is_still_ac_5181e0a0,0);
  }
  return -0x7fffbffb;
}


