/* FUN_0083440a - 0x0083440a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_0083440a(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  local_c = 0;
  if (DAT_0097926c != 0) {
    iVar2 = FUN_00455c59(local_10);
    uVar1 = *(undefined4 *)(iVar2 + 4);
    if (local_c != 0) {
      FUN_0045e7c2(0);
    }
    (**(code **)(*DAT_00978358 + 4))();
    local_c = FUN_004bf0d4();
    local_8 = FUN_0083cbf6();
    iVar2 = FUN_006fc790(param_2);
    iVar2 = FUN_0062d669(param_2,*(undefined4 *)(iVar2 + 0x18),uVar1,local_c,
                         *(undefined4 *)(param_1 + 0x3308),local_8);
    if (iVar2 == 0) {
      FUN_0083f11a(&param_2);
    }
    else {
      if (param_3 != 0) {
        iVar2 = FUN_0062fc59(&param_2,0);
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0x3300) = 1;
        }
      }
      param_3 = 1;
      FUN_0062fcac(&param_2,&param_3);
    }
  }
  return;
}


