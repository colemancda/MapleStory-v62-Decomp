/* FUN_006c93aa - 0x006c93aa in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_006c93aa(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 5) || (param_3 + -0x19 < 0x25)) {
    iVar1 = FUN_006c978b(param_2,param_3);
    *(undefined4 *)(param_1 + 0x9ac + iVar1 * 0xc) = 1;
  }
  return;
}


