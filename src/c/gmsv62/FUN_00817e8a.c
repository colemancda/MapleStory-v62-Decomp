/* FUN_00817e8a - 0x00817e8a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00817e8a(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (DAT_009784c0 != 0) {
    if (param_4 != 0) {
      if (*(int *)(param_1 + 0xd4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar1 = FUN_00404a94();
      param_2 = param_2 - iVar1;
      if (*(int *)(param_1 + 0xd4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar1 = FUN_00404abb();
      param_3 = param_3 - iVar1;
    }
    FUN_00526c23(param_2,param_3);
  }
  return;
}


