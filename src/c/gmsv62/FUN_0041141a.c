/* FUN_0041141a - 0x0041141a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0041141a(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x108))
                    (param_1,*param_3,param_3[1],param_3[2],param_3[3],&param_3);
  if (iVar1 < 0) {
    FUN_00878e09(iVar1,param_1,&DAT_00963df8);
  }
  *param_2 = param_3;
  return;
}


