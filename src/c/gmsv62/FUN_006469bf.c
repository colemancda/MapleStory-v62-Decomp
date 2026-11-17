/* FUN_006469bf - 0x006469bf in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_006469bf(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    iVar1 = FUN_006486c3(param_4,param_5,&param_5,&param_2);
    if (iVar1 != 0) {
      if (param_5 == 0) {
        *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
        *(int *)(param_1 + 0xe0) = param_2;
      }
      else {
        *(int *)(param_1 + 0xdc) = param_2;
        *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
      }
      FUN_008161f1(0);
    }
  }
  else if (param_2 == 0x203) {
    iVar1 = FUN_006486c3(param_4,param_5,&param_5,&param_2);
    if (iVar1 != 0) {
      if (param_5 == 0) {
        if (param_2 == *(int *)(param_1 + 0xe0)) {
          FUN_00648ac9();
        }
      }
      else if (param_2 == *(int *)(param_1 + 0xdc)) {
        FUN_00648855();
      }
    }
  }
  return;
}


