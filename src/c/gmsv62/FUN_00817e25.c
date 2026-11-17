/* FUN_00817e25 - 0x00817e25 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00817e25(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  if (DAT_009784c0 != 0) {
    FUN_00526726(param_2);
    if (param_3 != 0) {
      if (*(int *)(param_1 + 0xd4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar1 = FUN_00404a94();
      *param_2 = *param_2 + iVar1;
      if (*(int *)(param_1 + 0xd4) == 0) {
        FUN_00878dfb(0x80004003);
      }
      iVar1 = FUN_00404abb();
      param_2[1] = param_2[1] + iVar1;
    }
  }
  return;
}


