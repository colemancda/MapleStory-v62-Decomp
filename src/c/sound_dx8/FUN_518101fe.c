/* FUN_518101fe - 0x518101fe in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int __thiscall FUN_518101fe(void *this,undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)this;
  *(undefined4 *)this = 0;
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(param_1,&DAT_51819f20,this);
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return *(int *)this;
}


