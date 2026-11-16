/* FUN_5180330c - 0x5180330c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180330c(int param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)**(undefined4 **)(param_1 + 0xc))
                    (*(undefined4 **)(param_1 + 0xc),param_2,param_3);
  if ((iVar1 < 0) && (DAT_518183b4 + param_1 != *(int *)(param_1 + 0xc))) {
    FUN_518035e3(param_1,(int *)&PTR_DAT_518183b0,param_2,param_3);
  }
  return;
}


