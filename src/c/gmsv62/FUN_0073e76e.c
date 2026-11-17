/* FUN_0073e76e - 0x0073e76e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall
FUN_0073e76e(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  if (param_2 == 0x201) {
    FUN_0074d6fb();
    FUN_0073eee4(param_4,param_5);
    FUN_0073ec65(param_4,param_5);
    iVar1 = FUN_0073e80c(param_4,param_5);
    if (iVar1 == 0) {
      FUN_0073eb01(param_4,param_5);
    }
  }
  else if (param_2 == 0x202) {
    if (*(int *)(param_1 + 0xb30) != 0) {
      FUN_00818111(-(uint)(param_1 != 4) & param_1);
    }
    *(undefined4 *)(param_1 + 0xb30) = 0;
  }
  else if (param_2 == 0x203) {
    FUN_0074000b(param_4,param_5);
    FUN_0074011d(param_4,param_5);
  }
  return;
}


