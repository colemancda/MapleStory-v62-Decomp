/* FUN_00691319 - 0x00691319 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_00691319(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    iVar1 = FUN_0069265a(param_4,param_5,&param_5,&param_2);
    if (iVar1 != 0) {
      if (param_5 == 0) {
        *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
        *(int *)(param_1 + 0xe8) = param_2;
      }
      else {
        *(int *)(param_1 + 0xe4) = param_2;
        *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
      }
      FUN_008161f1(0);
    }
  }
  else if (param_2 == 0x203) {
    iVar1 = FUN_0069265a(param_4,param_5,&param_5,&param_2);
    if (iVar1 != 0) {
      if (param_5 == 0) {
        if (param_2 == *(int *)(param_1 + 0xe8)) {
          FUN_00692967();
        }
      }
      else if (param_2 == *(int *)(param_1 + 0xe4)) {
        FUN_006927e9();
      }
    }
  }
  return;
}


